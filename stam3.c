#include "types.h"
#include "stat.h"
#include "user.h"

void foo(void);

int
main(int argc, char *argv[])
{
	//int pid = fork();
	int pid = cowfork();
	if (pid==0) {
		foo();
		exit();
	}
	wait();
	foo();
	exit();
}

void foo() {
	int a = 5;
	int b = 6;
	a = 7;
	b = 8;
	int *c = (int*)main;
	*c = 50;
	printf(2,"%d %d %d\n",a,b,*c);
	return;
}