/***********************************************

CPP Chapter 3

excise 3.10

write a program to strip the punctuation from a string.


************************************************/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){

	string str;

	string s;
	//cout<<"please input the string"<<endl;

	bool has_punct=false;
	
	char ch;

	cout<<"\nplease input a string:\n"<<endl;



///////////////////////////////////////////////////////


// you should remember there's multi-ways to readin data;

//cin>>
//getline(cin,string__)


//////////////////////////////////////////////////////
	getline(cin,str);

	
	string::size_type count=0;

	for(string::size_type index=0;index!=str.size();index++){

		ch=str[index];

		if(ispunct(ch))

			has_punct=true;


		else

			s=s+ch;			

	}	

	if(has_punct)


		cout<<"\n Result:"<<endl<<s<<endl;

	else {

		cout<<"\nNo puncuation in this string!00<<endl;"<<endl;
		
		return -1;	

	}
	return 0;
	
	

}






