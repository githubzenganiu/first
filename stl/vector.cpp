#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define LEN 20
bool divby3(int x)
{

	return x%3?0:1;
}
int main()
{
	vector<int> vec1;
	for (int i=0; i< LEN; ++i)
		vec1.push_back(i*2);
	cout << "vec1.capacity()"<<vec1.capacity()<<endl;
	cout << "vec1.size()"<<vec1.size()<<endl;
	for (auto it=vec1.begin(); it!=vec1.end(); ++it)
		cout << *it <<'\t';
	cout <<endl;
	//remove:delete an element
	/*vec1.erase(remove(vec1.begin(), vec1.end(), 20), vec1.end());
	for (auto it=vec1.begin(); it!=vec1.end(); ++it)
		cout << *it <<'\t';
	cout <<endl;
*/
	//remove_if delete some elemetns that define by a function
	vec1.erase(remove_if(vec1.begin(), vec1.end(), divby3), vec1.end());
	for (auto it=vec1.begin(); it!=vec1.end(); ++it)
		cout << *it <<'\t';
	cout <<endl;



	return 0;
}
