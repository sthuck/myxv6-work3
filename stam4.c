#include "types.h"
#include "stat.h"
#include "user.h"


int
main(int argc, char *argv[])
{
  int a = 200;
  int pid = cowfork();
  if (pid==0) {
    a=100;
    printf(2,"bla %d %d\n",a,pid);
    exit();
  }
  wait();
  printf(2,"bla %d %d\n",a,pid);
  exit();
}


/*
int
main(int argc, char *argv[])
{
  int a = 200;
  cowfork();
  printf(2,"bla %d %d\n",a);
  wait();
  exit();
}
*/

/*
int
main(int argc, char *argv[])
{
  int a = 200;
  int pid = fork();
  if (pid==0) {
    a=100;
    printf(2,"bla1 %d %d\n",a,pid);
    exit();
  }
  int i =0;
  for (i=0;i<2000000000;i++)
    ;
  wait();
  printf(2,"bla %d %d\n",a,pid);
  exit();
}
*/
