#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
char *s =(char *)malloc(10);
strcpy(s,"hello");
free(s);
printf("%s\n",s);

}
