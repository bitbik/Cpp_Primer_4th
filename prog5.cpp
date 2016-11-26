#include <iostream>
using std::cin;
using std::cout;
using std::endl;


int main(){
	int value=2;
	int pow=10;

	int result=1;

	for(int i=0;i!=pow;++i)
		result*=value;

	std::cout<<value<<"\nraised to the power of "<<pow<<" : \t "
	<<result<<std::endl;

	return 0;




}
