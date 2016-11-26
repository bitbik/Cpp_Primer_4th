/*****************************************************

CPP

Chapter 3.

3.18

write a program to create a vector with 10 elements . 
using an iterator assign each element a value that is
twice its current value.

*****************************************************/
#include <iostream>
#include <vector>

using namespace std;


int main(){


//there are few ways to initialize an vector 
// you can use vector<int> ivec(10)
//			or ivec(10,int) 
	vector<int> intvec (10,1992);

	for(vector<int>::iterator iter = intvec.begin(); iter != intvec.end(); ++ iter)
	
		*iter = (*iter)*2;

	for(vector<int>::iterator iter = intvec.begin(); iter != intvec.end(); ++iter)
		cout<<(*iter)<<" ";
	cout<<endl;

	return 0;

}//end of main 


