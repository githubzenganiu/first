#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	vector<string> SS;
	SS.push_back("first");
	SS.push_back("second");
	SS.push_back("third");
	SS.push_back("forth");
	int ii;
	cout <<"Loop by index"<<endl;
	for (ii=0; ii<SS.size(); ++ii)
		cout <<SS[ii]<<'\t';
	cout <<endl;
	cout <<"iterator"<<endl;
	vector<string>::const_iterator cii;
	for (cii=SS.begin(); cii!=SS.end(); ++cii)
		cout << *cii <<'\t';
	cout <<endl;
	cout <<"reverse iterator"<<endl;
	vector<string>::reverse_iterator rii;
	for (rii=SS.rbegin(); rii!=SS.rend(); ++rii)
		cout << *rii <<'\t';
	cout <<endl;
	cout <<"SS.zie() = "<<SS.size()<<endl;
	cout <<SS[2]<<endl;
	swap(SS[0], SS[2]);
	cout <<SS[2]<<endl;

	vector<int>vec2;
	cout <<"vec2.capacity() = "<<vec2.capacity()<<endl; 
	int arr[] = {12,1,23,67,54,77};
	vec2.assign(arr, arr+5);
	for (auto it = vec2.begin(); it!=vec2.end(); ++it)
		cout << *it <<endl;
	cout <<"vec2.size() = "<<vec2.size()<<endl;
	cout <<"vec2.capacity() = "<<vec2.capacity()<<endl;

	int array1[] = {90,100,999,88};
	cout <<"==========================="<<endl;
	vec2.assign(array1,array1+4);
	for (auto it = vec2.begin(); it!=vec2.end(); ++it)
		cout << *it <<endl;

	cout <<"vec2.size() = "<<vec2.size()<<endl;
	cout <<"vec2.capacity() = "<<vec2.capacity()<<endl;
	cout <<"vec2.max_size() = "<<vec2.max_size()<<endl;
	return 0;
}
