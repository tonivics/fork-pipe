#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int
main ()
{
  pid_t id1 = fork ();
  
  printf("Id1: %d\n", id1);
  return EXIT_SUCCESS;
   
}
