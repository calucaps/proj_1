#include <stdio.h>


int doSomething(char *name){
	printf("Doing Something %s\n",name);
	return (25);
}

int main(int agrc, char **argv){
   printf("Hello World\n");
   printf("This is test\n");
   doSomething("Carlos Luis");
}


