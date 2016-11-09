#include<iostream>
#include<exception>
#include<pthread.h>
#include<unistd.h>
#include<string>
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
            cout<<"Mutex::unlock"<<endl;
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
        Mutex& mutex_;//注意这里是引用！
};
Mutex mutex;
pthread_mutex_t mutex_=PTHREAD_MUTEX_INITIALIZER;
void fun(){
    pthread_mutex_lock(&mutex_);
    MutexLockGuard lock(mutex );//这里开始时犯了一个错误MutexLockGuard(mutex)...汗
    	throw 1;
    pthread_mutex_unlock(&mutex_);
    cout<<"pthread_mutex_unlock"<<endl;//由于抛出异常该句不执行，可见某些情况让lock和unlock不配对
}
int main(){
    try{//throw抛出异常时会清理该块内的对象
        fun();
    }catch(int &temp){//catch会将将抛出的异常对象复制拷贝，如果catch参数是传值的，则拷贝构造一个新的对象作为catch语句的参数的值。在该catch语句结束时，先析构catch的传值的参数对象，然后析构throw语句抛出的异常对象。引用参数是为了效率。throw抛出的异常对象和catch实行严格匹配，不允许类型转换。
        cout<<"异常对象:"<<temp<<endl;
    }
    return 0;
}
