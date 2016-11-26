/****************************************

CPP

EX3.14 

read some text into a vector , storing each one and transform it into upperletters.

print out with 8 words prt line
********************************************/



#include <iostream>
#include <string>
#include <vector>
#include <cctype>


using namespace std;


int main(){


	vector<string> myvec;

	string str1;

	cout<<"\nplease input some words:\n"<<endl;


	while(cin>>str1)

		myvec.push_back(str1);
	
	if(myvec.size()==0)

		cout<<"\nno string in vector \n"<<endl;

	else{

		cout<<"\nThe transformed string is :\n"<<endl;



		for(vector<string>::size_type sz=0; sz!=myvec.size();++sz){

		
			for(string::size_type id =0 ; id != myvec[sz].size();++id)

				if(islower(myvec[sz][id]))

					myvec[sz][id]=toupper(myvec[sz][id]);


			cout<<myvec[sz]<<" ";


			if((sz+1)%8==0)
				cout<<endl;



		}

	

	}


	return 0;



}











