#include <iostream>
#include <string>

#include <stdio.h>
int main()
{
using std::string;
using std::cin;
using std::cout;
using std::endl;

string line;
// read line at time until end-of-file
char *p, array[10];
char *p2=array;
printf("sizeof p is \n%d",sizeof(p));
printf("array %d",sizeof(array));
printf("last %d",sizeof(p2));


return 0;
}

