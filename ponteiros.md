# Ponteiros

{% page-ref page="./" %}

Cada variável na linguagem C é armazenada em um local na memória do seu computador.

### Entendendo Ponteiro

**Ponteiros** serve para pegarmos e mexermos o endereço de memória que foi utilizada no computador, assim temos mais controle do que estamos fazendo com a memória sendo utilizada.

É muito utilizada nos Vetores e Funções, tendo seu uso muito importante na Linguagem C, onde com os ponteiros podemos alterar os valores armazenados em um ponto da memória

#### Símbolos

* Usamos o `*` para duas coisas:

  * Quando usamos o \* na direita de um tipo de dado, estamos dizendo que essa variável é um **Ponteiro.**
  * Quando usamos o \* na esquerda do nome do ponteiro significa que estamos chamando o valor que existe naquele endereço de memória.

* Usamos o `&` para pegar o endereço de memória de uma variável.
  * No scanf\(\) é usado para pegar o endereço de memória da variável e adicionar o valor que for entrar.
  * No Ponteiro ele pega onde a variável está armazenada.

```c
// Criando uma Variável
int valor = 3;

// Criando um Ponteiro para o Endereço da Variavel valor
int* ponteiro = &valor;

// Pegando o valor e salvando em outra variavel
int outra_variavel = *ponteiro; //valor: 3

// Testando
printf("Valor da Variavel valor: %d ", valor);
printf("Valor da Variavel nova: %d ", outra_variavel);
```

#### Lendo o Endereço de Memória

* Usamos o Modificador **%d** sempre que queremos imprimir um valor inteiro, mas se queremos apresentar um Endereço de memória usamos outro tipo de Modificador especial.
* Com o Modificador **%p** podemos imprimir na tela qual o endereço de memória da variável que foi adicionada em um Ponteiro.

```c
// Criando uma Variável
int valor = 3;

// Criando o Ponteiro
int* ponteiro = &valor;

// Apresentando o Endereço de Memória
printf("Endereço de Memória do valor: %p ", ponteiro);
// Exemplo de Endereço: 0x7ffceaa2fd1c     

// Imprimindo os valores
printf("Valor vindo da variavel: %d", valor); // 3
printf("Valor vindo do ponteiro: %d", *ponteiro); // 3
```

* Endereços de Memória é um valor do tipo Hexadecimal, sendo que cada vez que tu verifica o endereço de memória pode ser um valor diferente

#### Ponteiros Válidos

* Um ponteiro válido é um ponteiro que aponta para uma área de memória válida\(normalmente uma variável\).
* Se um ponteiro não for válido, ele vai entregar um erro chamado **Falha de Segmentação**\(Segmentation Fault\) no Linux.

```c
// Variavel
int valor = 3;

// Ponteiro
int* ptr; //Não iniciado

// Saida
printf("Valor: %d", *ptr); // Segmentation Fault
```

#### Ponteiros NULL

* É uma boa prática armazenar o valor NULL em ponteiros não inicializados.
* Podemos usar isso para podermos verificar se o ponteiro foi inicializado ou não.
* NULL é simplesmente uma constante definida como ZERO.

```c
// Variável
int a = 10;

// Ponteiro
int* ptr = NULL;

// Teste
if(ptr != NULL){
    printf("Ponteiro Inicializado!!");
}else{
    printf("Ponteiros Inválidos!");
}
```

