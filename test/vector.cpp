#include<iostream>
#include<vector>
using namespace std;


int main(int argc, char **argv)
{
	vector<int> vec;
	vec.push_back(1);
	vec.push_back(1);
	vec.push_back(1);
	vec.push_back(1);
	vec.push_back(1);
	vec.push_back(1);

	cout <<"vec.size = "<<vec.size()<<endl;
	cout <<"vec.capacity= "<<vec.capacity()<<endl;
/*	vector<int>(vec).swap(vec);
	//vector<int>().swap(vec);
	cout <<"vec.size = "<<vec.size()<<endl;
	cout <<"vec.capacity= "<<vec.capacity()<<endl;
*/
	vec.clear();//clear action is only clear the data, does not free the memory
	cout <<"vec.size = "<<vec.size()<<endl;
	cout <<"vec.capacity= "<<vec.capacity()<<endl;

	return 0;
}
