/********************************************************************
write a program to read data from standard input device and then store 

it in an array of char

*********************************************************************/
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){

	string in_str;
	const size_t str_size = 10;
	char result_str[str_size+1];

	cout<<"Please input an string(<="<<str_size<<"characters) with no spaces:"<<endl;

	cin>>in_str;

	size_t len = strlen(in_str.c_str());


	cout<<"\nlenth is "<<len<<endl;

	if(len > str_size){

		len = str_size;	
		cout<<"string is longger than "<<str_size<<" characters and is stored only "<<str_size<<" characters!"<<endl;
		

	}
	
	//copy len chars into array result_str;
	//use strncpy is safer 
	strncpy(result_str,in_str.c_str(),len);
	
	result_str[len+1]='\0';

	cout<<"the string stored in result_str is "<<result_str<<endl;

	cout<<"\n\n"<<endl;



	return 0;


}




