# Vetores

**Vetores** também conhecidos como **Arrays** é uma estrutura de dados mais simples e mais usadas na programação.

* **Vetor** é uma estrutura de dados homogênea que armazena vários valores do mesmo tipo e bem simples de iniciar, ele só precisa dos seguintes dados:

  * o Tipo de dado que será armazenado dentro do vetor.
  * nome do vetor
  * o número máximo de valores que podem ser colocados

Estrutura inicial básica de um vetor:

```c
// vetor de 10 inteiros
int vetor[10]; 
// tipo nome[numero maximo];
```

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
for(int i = 0 ; i < sizeof(vetor) ; i++){
    vetor[i] = i;
}
```

 A Função **sizeof\(\)** serve para pegarmos o tamanho total do vetor e definirmos como o tamanho máximo do for, sem precisar ter que se lembrar qual era o tamanho básico definido do vetor.

Dessa forma teremos um vetor igual como o do tipo 1 só que os valores sendo criados depois , onde podemos modificar como quisermos de forma mais fácil.

**OBS:** existem inumeras formas de se colocar valores em um vetor mas essas duas formas são as mais utilizadas diariamente no desenvolvimento.

