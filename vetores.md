# Vetores

**Vetores** também conhecidos como **Arrays** é uma estrutura de dados mais simples e mais usadas na programação.

* **Vetor** é uma estrutura de dados homogênea que armazena vários valores do mesmo tipo e bem simples de iniciar, ele só precisa dos seguintes dados:

  * o Tipo de dado que será armazenado dentro do vetor.
  * nome do vetor
  * o número máximo de valores que podem ser colocados

Estrutura inicial básica de um vetor:

{% code title="" %}
```c
// vetor de 10 inteiros
int vetor[10]; 
// tipo nome[numero maximo];
```
{% endcode %}

Para salvar valores se deve adicionar os valores em cada **posição** do vetor.

* **Posição** é o local dentro do vetor onde será armazenado um valor, onde podemos acessar para mexer nele.

### Adicionando valores 

Existem duas formas principais de adicionar valores.

#### Tipo 1: Adicionando valores pré definidos

Podemos colocar valores na hora que estamos criando o vetor, se os valores já forem pré-definidos para teste, como no exemplo abaixo:

```c
// Vetor de números de 0 á 9
int vetor[10] = {0,1,2,3,4,5,6,7,8,9};
```

Dessa forma, podemos já ter os valores para usar caso necessário.

#### Tipo 2: Adicionando valores com estruturas de controle

Podemos usar estruturas de controle como o **For** e **While** para ir adicionando valores dentro de um vetor, assim os valores podem ser criados e adicionados.

Exemplo de Vetor onde é preenchido de 0 á 9 por um **F**or:

```c
// Vetor iniciado vazio de tamanho 10
int vetor[10];

// Adicionando valores com um For
for(int i = 0 ; i < 10 ; i++){
    vetor[i] = i;
}
```

Dessa forma teremos um vetor igual como o do tipo 1 só que os valores sendo criados depois , onde podemos modificar como quisermos de forma mais fácil.

**OBS:** existem inúmeras formas de se colocar valores em um vetor mas essas duas formas são as mais utilizadas diariamente no desenvolvimento.

### Ponteiros e Vetores

Em C, um vetor é armazenado como um ponteiro para o primeiro elemento do vetor \(na posição 0 \) e os demais elementos são armazenados nas memórias seguintes á primeira memória separada pela posição inicial.

Para definirmos o tamanho da memória que foi usado devemos saber o tipo de elemento que vai ser guardado, assim iremos verificar o tamanho do tipo e multiplicar pelo número de elementos definidos no vetor, como por exemplo:

```c
// Vetor Criado
int vetor[10]; // Possui 10 posições do tipo int(4 bytes)

// Descobrindo o espaço de memória total
int espaco_memoria = sizeof(int)*10; // 40 bytes
```

Dessa forma podemos saber o tamanho total de memória utilizado, onde como mostrado **pegamos o tamanho do tipo inteiro e multiplicamos pelo numero de posições do vetor.**

Se estiver trabalhando com o tipo **Char** está trabalhando com `1 byte` por posição, se for **Int** será `4 bytes` por posição.

### Vetores  são passados por Referência

Como explicado nas Funções, na passagem por referência iremos passar um ponteiro de vez de enviar um valor de uma variável, dessa forma iremos enviar o espaço de memória onde está localizado o vetor e não os valores em si.

Embaixo um exemplo de Função que modifica os valores de um vetor:

```c
// Função multiplicador de valores
void mult(int* vetor, int tamanho){
    for(int i = 0 ; i < tamanho ; i++){
        vetor[i] = vetor[i] * vetor[i];
    }
}

// Função Main
int main(){
    int vetor[] = {1,2,3,4,5,6,7,8,9,10};
    mult(vetor,10);
}
```

Dessa forma descobrimos que na verdade Vetores **são ponteiros para endereços de memórias dos valores armazenados nas posições especificas**.

### Aritmética de Ponteiros

Irei explicar a aritmética de ponteiros aqui porque isso está conectado intrinsecamente  aos vetores.

Aritmética de ponteiros é um cálculo que se faz para se poder acessar outras  posições do vetor, onde pegamos a primeira posição do vetor e vamos fazendo cálculos aritméticos para acessar os outros endereços de memória.

#### Como fazer

* Primeiramente devemos criar um vetor e adicionar valores nele, irei usar como exemplo um vetor com valores pré-definidos.
* Segundo criamos um Ponteiro do mesmo tipo do vetor e chamamos o Vetor nele
* Terceiro pegamos a Primeira posição, onde só precisamos pegar o valor do ponteiro

```c
// Primeiro passo: Criando o vetor
int vetor[10] = {0,1,2,3,4,5,6,7,8,9};

// Segundo passo: Declarando um ponteiro
int* ponteiro = vetor; //vetores são ponteiros também

// Terceiro passo: Acessando posições
printf("Primeiro Valor: %d ", *ponteiro); //acessando o valor
printf("Primeiro Endereço: %p ", ponteiro); //end. memória

// Acessando todas as outras posições
printf("Pos 0: %d ", *ponteiro);
printf("Pos 1: %d ", *(ponteiro+1));
printf("Pos 2: %d ", *(ponteiro+2));
...
```

Isso é Aritmética de Ponteiros, vamos somando o valor da posição e pegando o valor que se encontra lá dentro ou o endereço de memória dele.

#### Copiando o vetor

* Para copiar um vetor ao outro devemos usar um for para pegar todos os valores do vetor antigo.
* Para não modificar o vetor original devemos criar um novo vetor com novos endereços de memória.

Exemplo de Copia de um Vetor:

```c
//Vetor Original
int vetor[10] = {0,1,2,3,4,5,6,7,8,9};

// Novo vetor do mesmo tamanho
int novo_vetor[10];

// Adicionando os valores
for(int i = 0 ; i < 10 ; i++){novo_vetor[i] = vetor[i];}
```

#### Alterando valores do vetor

* Podemos alterar os valores de um vetor com ponteiros mais fácil, assim podemos mexer com os valores dos endereços de memória.

```c
// Vetor
int vetor[10] = {0,1,2,3,4,5,6,7,8,9};

// Criando um ponteiro de memória
int* ponteiro = vetor;

// Alterando os valores do vetor
for(int i = 0 ; i < 10 ; i++){
    *(ponteiro+i) = *(ponteiro+i) + 1;
}
```

#### Lendo as Posições

* Uma coisa que se tem que tomar cuidado é na leitura quando está querendo pegar os valores das posições.

```c
// Vetor
int vetor[3] = {4,9,12};

// Ponteiro
int* ptr = vetor;

// Pegando o primeiro valor e somando 1
for(int i = 0 ; i < 3 ; i++){
    printf("Valores: %d ", (*ptr)++); // Saida: 4 5 6
}

// Pegando os valores das posições
for(int i = 0 ; i < 3 ; i++){
    printf("Valores: %d ", *ptr++); // Saida: 4 9 12
}
```

