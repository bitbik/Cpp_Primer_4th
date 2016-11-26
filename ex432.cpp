/*************************************************

 wtite a program to initialize an vector using an

array of int



*************************************************/
#include <iostream>
#include <vector>
#include <cstring>


using namespace std;


int main(){

	const int arr[6]={1,2,3,4,5,6};
	
	/*cout<<"Enter 6 numbers:"<<endl;
	for(size_t ix=0; ix != 6 ; ix++){
		cin>>arr[ix];	
	}
	*/	
	vector<int> ivec(arr,arr+6);

	





}
