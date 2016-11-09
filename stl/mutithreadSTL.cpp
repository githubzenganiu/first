#include<iostream>
#include<exception>
#include<pthread.h>
#include<unistd.h>
#include<string>
#include<vector>
#include<boost/noncopyable.hpp>
using namespace std;
using namespace boost;
class Mutex:noncopyable{
    public:
        Mutex(){
            pthread_mutex_init(&mutex,NULL);
        }
        void lock() const{
            pthread_mutex_lock(&mutex);
        }
        void unlock() const{
            pthread_mutex_unlock(&mutex);
        }
        ~Mutex(){
            pthread_mutex_destroy(&mutex);
        }
    private:
        mutable pthread_mutex_t mutex;
};
class MutexLockGuard:noncopyable{
    public:
        explicit MutexLockGuard(Mutex& mutex):mutex_(mutex){//显示构造
            mutex_.lock();
        }
        ~MutexLockGuard(){
            mutex_.unlock();
        }
    private:
        Mutex& mutex_;
};
Mutex mutex;
void* worker1(void* arg){//线程1输出容器元素
    vector<int>* vec=(vector<int>*)arg;
    sleep(1);
    MutexLockGuard guard(mutex);
    for(vector<int>::iterator it=(*vec).begin();it!=(*vec).end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
void* worker2(void* arg){//线程2向容器添加元素
    vector<int>* vec=(vector<int>*)arg;
    MutexLockGuard guard(mutex);
    for(int i=0;i<100;i++){
        (*vec).push_back(i*10);
    }
}
int main(){
    pthread_t pid1,pid2;
    vector<int> vec;
    vec.push_back(-1);
    pthread_create(&pid2,NULL,worker2,&vec);
    pthread_create(&pid1,NULL,worker1,&vec);
    pthread_join(pid1,NULL);
    pthread_join(pid2,NULL);
    return 0;
}
