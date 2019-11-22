# Alocação Dinâmica de Memória

### Entendo o uso de memória

Olhando para Layout de memória de um processo de execução no Linux.

* _User Stack =_ armazena todas as **variáveis locais** de uma função e também outros dados da função como **registradores,endereços de retorno, etc.**
* _Runtime heap = memória compartilhada por todos os processos em execução no sistema operacional, usado para a **Alocação Dinâmica de Memória.**_
* _Read-Write segment =_ armazena todas as variáveis globais de um programa.
* _Read-only segment =_ armazena o código do programa.

### Verificando o total de memória

* Podemos no Linux verificar o quanto de memória temos para o programa usando o comando `ulimit -a`

```text
core file size          (blocks, -c) 0
data seg size           (kbytes, -d) unlimited
scheduling priority             (-e) 0
file size               (blocks, -f) unlimited
...
stack size              (kbytes, -s) 8192 <--- ESTE AQUI
cpu time               (seconds, -t) unlimited
max user processes              (-u) 15333
virtual memory          (kbytes, -v) unlimited
file locks                      (-x) unlimited
```

* Neste caso o tamanho da pilha é limitado a **8 Mb**.

### Alocação Dinâmica em C

Alocação Dinâmica de Memória resolve o problema de armazenar grandes quantidade de dados na pilha da memória. Também nos permite alocar memória que irá persistir além do escopo da função que estamos fazendo.

* Lembre-se sempre que a Alocação Dinâmica de Memória usa a memória _runtime heap._
* Precisamos usar funções para gerenciar memória dinâmicamente.

### Funções para gerência de memória

* Usamos o _Header_ `stdlib.h`para mexermos com a alocação.
* As seguintes funções são usadas dessa biblioteca:

#### Função malloc:

* é a função mais simples! ela tenta alocar o número de bytes de memória e retorna um ponteiro para o bloco\(se falhar vai dar NULL\).
* o número de bytes é o **sizeof\(\)** do tipo de dado que queremos mais a multiplicação de quantas posições desejamos, por exemplo de um vetor.

Exemplo: criando um vetor de 10 posições em um ponteiro.

```c
// Criando o Ponteiro com 10 espaços na memória
int* ptr = malloc(sizeof(int)*10);

// Criando de uma forma mais segura
int* ptr = malloc(10 * sizeof *ptr);
```

#### Função calloc:

* A função calloc aloca memória para um array de tamanho definido onde cada posição requer um número definido de bytes.
* O calloc inicia a memória com **Zeros**, onde o malloc não faz isso.

```c
// Criando o Ponteiro com 10 espaços na memória
int* ptr = calloc(10, sizeof *ptr); //inicia tudo com zero
```

#### Função realloc:

* A função realloc altera o tamanho de ponteiro já com a memória alocada.
* Se é maior e não cabe, a função irá mover a memória para outro lugar e liberar o ponteiro original.
* Retorna um ponteiro para o novo bloco que agora foi alocado.

```c
// Ponteiro anteriormente alocado
int* ptr = calloc(10, sizeof *ptr);

// Aumentando o tamanho para mais 20
int* nptr = realloc(ptr, 30);
```

