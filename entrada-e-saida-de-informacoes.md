# Entrada e Saída de Informações

{% page-ref page="./" %}

## Entrada e Saída de Informações

* Assim como todas as linguagens de programação, C possui também seu sistema de entrada e saída de informações para testes ou utilização do usuário.
* É um pouco complexo diferente dos outros porque precisa dizer exatamente qual o tipo de informação que está entrando e saíndo do programa.

### Entrada de Informações no programa

* Para entrar texto pelo terminal no seu programa iremos usar duas funções, a função _printf\(\)_ e _scanf\(\)_ 
* _com o **printf\(\)** podemos colocar a mensagem que desejamos que o programador ou o usuário precisa ver para pegarmos o valor de entrada, com uma mensagem._
* _com o **scanf\(\)** iremos pegar o valor entrado via entrada do teclado para dentro de uma variável previamente definida._

```c
// Para poder armazenar o valor 1 em uma variável

// Variável desejada
int numero;

// Mensagem de Entrada
printf("Por favor, entre com o número 1: ");
scanf("%d", &numero ); //coletando o valor
```

Como se pode ver existe toda uma construção muito importante no _scanf\(\)_ para se poder pegar as informações, como explicado abaixo:

* **%d** : é um modificador para dizer ao sistema que a entrada é do tipo _Digit , ou seja, um número inteiro com Sinal_
* _**& :** é um operador que diz ao programa que a variável chamada após o operador é a variável onde o valor entrado será armazenado._

### _Saída de informações no Programa_

* Assim como na entrada precisa utilizar um modificador, na saída também precisa para poder dizer como deve ser apresentado.
* Colocamos os modificadores e a informação da seguinte forma

```c
printf("Saida do Valor: %d", numero);
//Saida do Valor : 1
```

* Portanto dessa forma ele vai pegar o valor armazenado n variável _numero_ e colocar na posição onde o modificador foi chamado, então quanto mais variaveis e mais modificadores colocados, diferente vai ficando a saída

```c
//Variáveis
int valor1 = 1;
int valor2 = 2;
int valor3 = 3;

printf("Valores Armazenados: %d %d %d", valor1 , valor2 , valor3);
//Valores Armazenados: 1 2 3
```

* Quando trabalhamos com um tipo _float_ \(valores reais como 2,5\), podemos definir como vai ser a  saída dele, onde normalmente são 7 digitos além da virgula apresentados normalmente, mas podemos definir a saida da seguinte forma:

```c
//Variavel
float valor = 2.5;

//Saida

printf("Teste: %f ", valor);
//Teste: 2.5000000

// Melhorando Saida, max de 2 digitos antes e 2 digitos depois
printf("Teste: %2.2f ", valor);
//Teste: 2.5
```



