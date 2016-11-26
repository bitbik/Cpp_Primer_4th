/***************************************************

write a program to read strings into a vector .

Then copy that vector into an array of character

pointers. 

For each element in the vector, allocate a new char 

array and  copy the data from the vector element 

into that character array. 

Then insert a pointer to the char array into the

aarray of char pointers.

****************************************************/

#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main(){


	vector<string> strvec;
	string str;
	cout<<"Please enter strings, ctrl + D to terminate:"<<endl;
	while(cin>>str)
		strvec.pushback(str);
	
	//create a aaray of character pointer
	char **parray = new char*[strvec.sizs()];


	//handle the elements in the vector 

	size_t ix = 0;
	for (vector<string>::iterator iter = strvec.begin(); iter != strvec.end(); iter ++, ix++){

		
		

	}

	





}

