/******************************************************

write a program to copy a vector of ints 

into an array of ints


******************************************************/
#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int main(){
	
	vector<int> ivec;
	
	int ival;
	cout<<"Please input numbers :  enter ctrl +d to terminate\n"<<endl;
	while(cin>>ival)
		ivec.push_back(ival);

	//create array
	
	int *array = new int[ivec.size()];

	size_t ix=0;
	
	for(vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); iter++,ix++)
		array[ix]=*iter;

	delete [] array;
	cout<<"Haha"<<endl;
	return 0;
		

}

