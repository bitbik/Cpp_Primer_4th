#include <iostream>


int main(){

	int sum=0; 
	int value;

	while(std::cin>>value)
		sum+=value;

	std::cout<<"\nsum is :"<<sum<<std::endl;
	std::cout<<"\n\n"<<std::endl;
	return 0;
}

