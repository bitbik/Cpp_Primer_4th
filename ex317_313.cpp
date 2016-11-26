/***************************

CPP

chapter 3

vector, read in a sert of ints,
calculate the sum of adjacent pairs of ints,
if the number of ints is add, print info.

Then, modify it to calculate the sum of first and last,
second and second to last ...

add: use iterators to deal with this question

**************************/

#include <iostream>
#include <vector>

using namespace std;
using std::vector;
//using std::cout;
//using std::cin;
//using std::endl;

int main(){


	vector <int> ins;
	int num;
	vector <int>::size_type num_count = 0;
	cout<<"please input a set of integers"<<endl;

	while(cin>>num){

		ins.push_back(num);
//		num_count++;

	}


	for(vector<int>::size_type i = 0; i != (ins.size()/2) ; ++i){

			cout<<ins[2*i]+ins[2*i+1]<<endl;

		}

	cout<<"\nThe next is to print out the second algo, first with last, etc\n\n"<<endl;

	num_count = ins.size();
	for(vector <int> ::size_type i = 0; i!= (ins.size()/2) ; ++i){

		cout<<ins[i]+ins[num_count-i-1]<<endl;

	}


	return 0;



}



