#include <string>
#include <string.h>
using std::string;

class String{

	public:
		String(const char *s){
			buf = new char[strlen(s)+1] ;

			strcpy(buf,s);

			}

		~String(){

		delete [] buf;

	}
	private:
		char *buf;

};

int main(){

	String s1("hello");
	String s2("goodbye");
	s2=s1;

	return 0;

}



