#include <stdio.h>
#include "func.h"
#include "subs/subs.h"
#include "tremendous/trem.h"

int doSomething(char *name){
	printf("Doing Something %s\n",name);
	return (25);
}

int main(int agrc, char **argv){
   printf("Hello World, there is hope\n");
   printf("This is test\n");
   doSomething("Carlos Luis");
   doSpecialFunc("dxyz");
   printf("name is %s\n",returnName());
   doTremendous();
}


