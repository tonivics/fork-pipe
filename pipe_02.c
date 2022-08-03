// Link de referência: https://www.programacaoprogressiva.net/2014/09/Pipes-em-C-Comunicao-entre-Processos-IPC-Interprocess-Communication.html

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(void){
	int file_descriptor[2];
	pid_t pid;
	
	if(pipe(file_descriptor)<0){
		perror("pipe");
		return -1;
	}
	
	if((pid=fork())<0){
		perror("fork");
		exit(1);
	}
	
	if(pid==0){
		close(file_descriptor[0]);
		int soma_pares;
		soma_pares = 2+4+6+8+10;
		write(file_descriptor[1], &soma_pares, sizeof(soma_pares));
		
		printf("PID: %d :: Soma dos pares: %d\n", pid, soma_pares);
		exit(0);
	}else{
		close(file_descriptor[1]);
		int pares;
		read(file_descriptor[0], &pares, sizeof(pares));
		int soma_impares;
		soma_impares = 1+3+5+7+9;
		int soma_total;
		soma_total = pares + soma_impares;
		
		printf("PID: %d :: Soma dos ímpares: %d\n", pid, soma_impares);
		printf("PID: %d :: Soma total: %d\n", pid, soma_total);
		exit(0);
	}
	
}
