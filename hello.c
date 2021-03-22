#include <stdio.h>
#include "func.h"
#include "subs/subs.h"
#include "tremendous/trem.h"

int doSomething(char *name){
	printf("Doing Something %s\n",name);
	return (25);
}

int main(int argc, char **argv){
   printf("Hello World, there is hope\n");
   doSomething("Carlos Luis");
   doSpecialFunc(returnName());
   for (int ii = 0; ii < argc; ii++){
	doSpecialFunc(argv[ii]);
   }
}


