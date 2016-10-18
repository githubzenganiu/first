#include<iostream>
#include<list>
#include<string>
using namespace std;
bool divby5(int x)
{
	return x%5?0:1;
}
int main()
{
	list<int> l1;
	l1.push_back(1);
	l1.push_back(2);
	l1.push_front(3);
	l1.push_front(3);
	l1.push_front(5);
	//list<int>::iterator it;
	for (auto it =l1.begin(); it!=l1.end(); ++it )
		cout << *it<<endl;
	cout <<"l1.size() "<<l1.size()<<endl;
	/*l1.reverse();
	for (auto it =l1.begin(); it!=l1.end(); ++it )
		cout << *it<<endl;
	l1.sort();
	for (auto it =l1.begin(); it!=l1.end(); ++it )
		cout << *it<<endl;
	l1.unique();
	for (auto it =l1.begin(); it!=l1.end(); ++it )
		cout << *it<<endl;
	cout <<"l1.size() "<<l1.size()<<endl;
	l1.insert(l1.begin(),99);
	for (auto it =l1.begin(); it!=l1.end(); ++it )
		cout << *it<<endl;
	cout <<l1.empty()<<endl;
	l1.clear();
	cout <<"l1.empty() "<<l1.empty()<<endl; 
	
	l1.remove(3);
	for (auto it =l1.begin(); it!=l1.end(); ++it )
		cout << *it<<endl;
	cout <<"l1.size() "<<l1.size()<<endl;
	*/
	l1.remove_if(divby5);
	for (auto it =l1.begin(); it!=l1.end(); ++it )
		cout << *it<<endl;
	cout <<"l1.size() "<<l1.size()<<endl;

	return 0;
}
