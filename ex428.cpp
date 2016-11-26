/**********************************************************
write a program to read the standard input and build a vector 

of ints from values that are read.

Allocate an array of the same size as the vector and copy 

the elements from the vector into the array.

************************************************************/

#include <iostream>
#include <vector>
//#include <>

using namespace std;

int main(){


	vector<int> ivec;
	int ival;
	
	//read data and create the vector
	cout<<"Enter numbers:(Ctrl+Z,or D to end)"<<endl;

	while(cin>>ival)
		ivec.push_back(ival);

	//dynamically allocate array;

	int *pia = new int[ivec.size()];
	cout<<"\n"<<endl;
	cout<<ivec.size()<<endl;
	cout<<"numbers"<<endl;
	int *tp = pia;
	
	for (vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter, ++tp)

		*tp = *iter;

	delete [] pia;

	return 0;




}


