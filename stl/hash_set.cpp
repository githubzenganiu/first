#include"include.h"
using namespace std;
using namespace __gnu_cxx;


int  main()
{

	const int N= 3;
	int s1[N]={1,2,3};
	int s2[N]={4,5,6};
	hash_set<int>sa(s1,s1+N);//申明一个集合sa,元素为数组s1
	hash_set<int>sb(s2,s2+N);//申明一个集合sb，元素为数组s2
	hash_set<int> sc;//申明一个集合sc，为空集合

	ostream_iterator<int> output(cout," ");
	cout<<"输出集合sa的元素:";
	copy(sa.begin(),sa.end(),output);

	cout<<"\n\n输出集合sb的元素:";
	copy(sb.begin(),sb.end(),output);
	cout<<endl;
	return 0;
	//system("pause");

}
