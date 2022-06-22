#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int
main ()
{
  pid_t id = fork ();
  
  id > 0 ? printf("Processo pai - Id: %d\n", id) : printf("Processo filho - Id: %d\n", id);
  return EXIT_SUCCESS;
   
}
