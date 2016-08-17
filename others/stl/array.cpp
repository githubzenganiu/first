#include <iostream>
#include <array>   
using namespace std;

int main ()
{
	 //-----------------------------------------------
  //--这是1维数组
	std::array<int,5> myarray={1,2,3,4,5};
 //-----------------------------------------------
  cout <<"myarray="<<endl;
  for (size_t n=0; n<myarray.size(); n++){
	  cout << myarray[n] <<'\t';
  }
  cout << endl;
  //-----------------------------------------------
  //当然也可以使用
  cout <<"myarray="<<endl;
  for (size_t n=0; n<myarray.size(); n++){
	  cout << myarray.at(n) << '\t';
  }
   cout << endl;
 //-----------------------------------------------
  //--这是2维数组,共3行2列
  array<array<int,2>,3 > myarray2D={1,2,3,4,5,6};
  //-----------------------------------------------
  cout <<"myarray2D="<<endl;
  for (size_t m=0; m<myarray2D.size(); m++){
  	for (size_t n=0; n<myarray2D[m].size(); n++){  	
	  	cout << myarray2D[m][n] <<'\t';
  	} 
   cout << endl; 
  }
  cout << endl;
  //-----------------------------------------------
  
  return 0;
}

