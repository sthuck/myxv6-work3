#include "types.h"
#include "stat.h"
#include "user.h"


int
main(int argc, char *argv[])
{
	//int pid = fork();
	int pid = cowfork();
	if (pid==0) {
	int *a;
	a=(int*)0x5;
	printf(2,"%d\n",*a);
	a=0;
	printf(2,"%x\n",*a);
	}
	else {
		wait();
	}
  exit();
}
