#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int
main ()
{
  pid_t id1 = fork ();
  pid_t id2 = fork ();
  
  printf("Id1: %d  -  Id2: %d\n", id1, id2);
  return EXIT_SUCCESS;
   
}
