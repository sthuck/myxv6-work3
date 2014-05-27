#include "types.h"
#include "stat.h"
#include "user.h"


int
main(int argc, char *argv[])
{
  int i = 0;
  int a = 200;
  int pid = cowfork();
  if (pid==0) {
    a=100;
    for (i=0;i<2000000000;i++)
    ;
    printf(2,"bla1 %d %d\n",a,pid);
    exit();
  }
  for (i=0;i<2000000000;i++)
    ;
  wait();
  printf(2,"bla %d %d\n",a,pid);
  exit();
}
