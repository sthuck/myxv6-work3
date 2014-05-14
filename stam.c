#include "types.h"
#include "stat.h"
#include "user.h"

void foo() {
  int i;
  for (i=1;i<2000000000;i++)
    ;
  printf(1,"bla bla \n");
}

int
main(int argc, char *argv[])
{
	foo();
	printf(1,"doing malloc");
	//malloc(4096*2);
	sbrk(4096*2);
    foo();
  exit();
}
