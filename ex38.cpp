/*****************************************

cpp

chapter 3

excise 3.8 

write a pragram to read stringss from standard input,

concatenating what is read into a large string. print it.

Next, change it to separate adjacent input strings by a space.


*****************************************/


#include <string>
#include <iostream>

using std::endl;
using std::cin;
using std::cout;
using std::string;

//using namespace::std;


int main(){

	string str;

	string result1, result2;
	int sel;

	cout<<"print 1 for no space, 2 with space"<<endl;

	cin>>sel;



	if (sel==1){
		cout<<"enter string:\n"<<endl;
		while(cin>>str){

	 
			result1=result1+str;

		}



		cout<<"\n************************************\n"<<endl;

		cout<<"string equal to the concatenation of these strings is:"<<endl<<result1<<endl;

	}


	else if(sel==2){

		cout<<"please enter string:\n"<<endl;
		cin>>result2;
		while (cin>>str)

			result2=result2+' '+str;
		cout<<"\n***********************************\n"<<endl;

		cout<<result2<<endl;		
	}

	else cout<<"wrong input"<<endl;


	return 0;





}

