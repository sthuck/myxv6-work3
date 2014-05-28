#include "types.h"
#include "stat.h"
#include "user.h"


int c = 5;
int
main(int argc, char *argv[])
{
  int a = 200;
  int pid = fork();
  int* b = (int*)=malloc(4);
  *b=5;
  if (pid==0) {
  	c=6;
  	*b=6;
    printf(2,"son== %d %d\n",a,pid);
    exit();
  }
  *b=7;
  c=7;
  a=100;
  wait();
  printf(2,"dad %d %d\n",a,pid);
  exit();
}
