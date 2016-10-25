#include<iostream>
#include<iterator>
#include<vector>
#include<map>
#include<set>
#include<list>
#include<deque>
#include<string>
#include<algorithm>
using namespace std;

bool if_get( const string &s)
{
	if(s[0]=='m')
		return true;
	else
		return false;

}

int main(int argc, char *argv[])
{
	/*vector*/
	vector<string> vec;
	vec.reserve(10);
	vec.push_back("apple");
	vec.push_back("microsoft");
	vec.push_back("cisio");
	vec.push_back("google");
	vec.push_back("facebook");
	vec.push_back("mac");
	/*for (auto it=vec.begin(); it!=vec.end(); ++it)
		cout << *it<<'\t';
	cout <<endl;*/

	ostream_iterator<string> out_it(cout, "	");

	copy(vec.begin(), vec.end(), out_it);
	cout <<endl;
	vec.erase(remove(vec.begin(), vec.end(), "apple"), vec.end());
	copy(vec.begin(), vec.end(), out_it);
	cout <<endl;

	vec.erase(remove_if(vec.begin(), vec.end(), if_get), vec.end());
	for (auto it=vec.begin(); it!=vec.end(); ++it)
		cout << *it<<'\t';
	cout <<endl;
	cout <<"vec.size() = "<<vec.size()<<endl;
	cout <<"vec.capacity() = "<<vec.capacity()<<endl; 


	vector<string>(vec.size()).swap(vec);//shrink space
	cout <<"vec.size() = "<<vec.size()<<endl;
	cout <<"vec.capacity() = "<<vec.capacity()<<endl; 
	
	/*deque*/
	deque<string> ds;
	ds.push_back("maths");
	ds.push_back("english");
	ds.push_back("vipabc");
	ds.push_back("51Talk");
	ds.push_back("maopu");
	ostream_iterator<string> dit(cout, "\t");
	copy(ds.begin(), ds.end(), dit);
	cout <<endl;
	ds.erase(remove(ds.begin(), ds.end(), "vipabc"), ds.end());
	copy(ds.begin(), ds.end(), dit);
	cout <<endl;
	ds.erase(remove_if(ds.begin(), ds.end(), if_get), ds.end());
	copy(ds.begin(), ds.end(), dit);
	cout <<endl;



	/*list*/
	list<string> list1;
	list1.push_back("China");
	list1.push_back("America");
	list1.push_back("Russia");
	list1.push_back("Japan");
	list1.push_back("mainland");
	ostream_iterator<string> list_out_it(cout, " ");
	//for (auto it=list1.begin(); it!=list1.end(); ++it)
	//	cout <<*it<<"\t";
	//cout <<endl;
	copy(list1.begin(), list1.end(), list_out_it);
	cout <<endl;
	list1.remove("China");
	list1.remove_if(if_get);
	copy(list1.begin(), list1.end(), list_out_it);
	cout <<endl;


	/*map*/
	map<int, string> mp;
	mp.insert(pair<int, string>(1, "Asia"));
	mp.insert(pair<int, string>(3, "America"));
	mp.insert(pair<int, string>(4, "Oceania"));
	mp.insert(pair<int, string>(0, "Africa"));
	map<int, string>::iterator itmp;
	if ((itmp = mp.find(0)) != mp.end())
	{

		cout << "find 0"<<endl;
		cout << itmp->second<<endl;
	}
	mp[4] = "lizhenbo";
	cout << (mp.find(4))->second<<endl;
	mp.erase(1);
	for (auto it=mp.begin(); it!=mp.end(); it++)
		cout << it->first<<"	"<<it->second<<endl;

/*set*/
	set<string> s;
	s.insert("first");
	s.insert("second");
	s.insert("third");
	s.insert("firth");
	ostream_iterator<string> sit(cout, "\t") ;
	copy(s.begin(), s.end(), sit);
	cout <<endl;
	s.erase("third");
	copy(s.begin(), s.end(), sit);
	cout <<endl;

		return 0;
}
