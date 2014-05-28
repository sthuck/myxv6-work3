#include "types.h"
#include "stat.h"
#include "user.h"


int c = 5;
int
main(int argc, char *argv[])
{
  int a = 200;
  int pid = cowfork();
  if (pid==0) {
  	c=6;
    printf(2,"son== %d %d\n",a,pid);
    exit();
  }
  c=7;
  a=100;
  wait();
  printf(2,"dad %d %d\n",a,pid);
  exit();
}
