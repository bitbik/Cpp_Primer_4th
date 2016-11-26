/********************************************




*******************************************/
#include <iostream>
#include <cstring>

using namespace std;

int main(){





	const char *pc = "a very long literal string";

	const size_t len = strlen(pc+1);

	for(size_t ix = 0; ix != 1000000; ++ix){

		char *pc2 = new char[len+1];

		strcpy(pc2,pc);
		if(strcmp(pc2,pc)==0)
			cout<<"same"<<endl;

		delete [] pc2;
	}

	return 0;


}

