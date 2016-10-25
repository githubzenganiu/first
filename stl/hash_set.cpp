#include"include.h"
using namespace std;
using namespace __gnu_cxx;


int  main()
{

	const int N= 3;
	int s1[N]={1,2,3};
	int s2[N]={4,5,6};
	hash_set<int>sa(s1,s1+N);
	hash_set<int>sb(s2,s2+N);
	hash_set<int> sc;

	ostream_iterator<int> output(cout," ");
	cout<<"输出集合sa的元素:";
	copy(sa.begin(),sa.end(),output);

	cout<<"\n\n输出集合sb的元素:";
	copy(sb.begin(),sb.end(),output);
	cout<<endl;

	sa.erase(1);//erase an element
	cout <<"after delete :"<<endl;
	copy(sa.begin(),sa.end(),output);
	cout<<endl;
	return 0;

}
