/**********************************************************************************

write a program to concatenate 2 c style string literals, putting

the result in a c-style string. write a program to concatenate 2 

library stings that have the same value as the literals used in the first program.

************************************************************************************/

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main(){

	const char *cp1 = "Mary and Linda";
	const char *cp2 = "are friends";

	size_t len = strlen(cp1) + strlen(cp2);

	char *result_str = new char[len+1];

	strcpy(result_str,cp1);

	strcat(result_str,cp2);

//	delete [] result_str;

	cout<<result_str<<endl;

	cout<<"#####################"<<endl;

	delete [] result_str;
	
	const string str1("chen and");
	const string str2("xi");

	string result_str2;
	result_str2 = str1;
	result_str2 = result_str2+str2;


	cout<<result_str2<<endl;
	


	return 0;


}

