/*********************************************************************

write a program that defines  a vector of pointers to strings.

Read the vector and printing each string and lenth/size of corresponding

string


*********************************************************************/

#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main(){


	vector <string *> pstr_vec;

	string str;

	cout<< "\n Enter strings, ctrl + D to terminate\n"<<endl;
	while(cin>>str){

		string *pstr = new string;
		*pstr = str;
		pstr_vec.push_back(pstr);

	}
	cout<<"\n"<<endl;

	vector<string*>::iterator iter=pstr_vec.begin();
	while (iter != pstr_vec.end()){

		cout<<**iter<<(**iter).size()<<endl;
		iter++;
	
	}
	
	iter = pstr_vec.begin();

	while(iter != pstr_vec.end()){
		
		delete *iter;
		iter++;

	}
	
	return 0;
}



