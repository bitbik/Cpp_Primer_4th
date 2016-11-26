/************************************

C primer plus

chapeter 3

exercise 3.7:

write a program to read two srings and report which one is larger

then change it to report whether the strings have the same lenth, 

if not, report which one is longger.


***************************************/



#include <iostream>
#include <string>


int main(){



	using std::cin;
	using std::cout;
	using std::endl;
	using std::string;


	cout<<"\nplease input 2 strings:\n"<<endl;

	string s1,s2;

	cin>>s1>>s2;

	if(s1>s2){

		cout<<"\ns1 is larger\n"<<endl;
	}	

	else if (s1==s2){
	
		cout<<"\ns1 is equal to s2\n"<<endl;
	}

	else 

		cout<<"\ns2 is larger\n"<<endl;

	cout<<"\n**********************************\n"<<endl;

	if(s1.size()==s2.size())

		cout<<"\nthe lenth of the two strings is the same\n"<<endl;

	else if(s1.size()>s2.size())

		cout<<"\ns1 is longger \n"<<endl;


	else	cout<<"\ns2 is longger \n"<<endl;

}
