# Esudo de comunicação entre processos


## Parte 1 - Estudo de código fonte

Este pacote de estudo possui os seguintes fontes que devem ser estudado 
na sequinte ordem:

1. 01_fork.c
1. 02_fork.c
1. 03_fork.c
1. 04_fork.c
1. pipe_01.c

O ideia norneadora desta parte de estudo é que você faça sua própria 
exploração dos códgos com o objetivo de compreender os conceitos abordados.

## Parte 2 - Exercício de fixação

Com base em pipe_01.c:

- Escreva um programa (pipe_02.c) que tuliza a função fork, 
o processo pai calcula a soma dos ímpares de 1 a 10 
e processo filho calcula a soma dos pares no processo filho;
- A soma dos números de 1 a 10 é mostrada no processo pai usando
os dados complementares obtidos do processo filho com o uso de pipe.

## Utilização

Para compilar, utilize o comando make:

```
$ ls
01_fork.c  02_fork.c  03_fork.c  04_fork.c  Makefile  pipe_01.c  README.md

$ make
gcc -ggdb -Wall -ansi -pedantic -std=c99 -o 01_fork 01_fork.c
gcc -ggdb -Wall -ansi -pedantic -std=c99 -o 02_fork 02_fork.c
gcc -ggdb -Wall -ansi -pedantic -std=c99 -o 03_fork 03_fork.c
gcc -ggdb -Wall -ansi -pedantic -std=c99 -o 04_fork 04_fork.c
gcc -ggdb -Wall -ansi -pedantic -std=c99 -o pipe_01 pipe_01.c

$ ls
01_fork    02_fork    03_fork    04_fork    Makefile  pipe_01.c
01_fork.c  02_fork.c  03_fork.c  04_fork.c  pipe_01   README.md

```
