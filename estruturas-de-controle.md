# Estruturas de Controle

## Estruturas de Controle

* Existem dois tipos de Estruturas de Controle simples:

### Estruturas de Seleção

* **if-else** : é a estrutura mais comum já utilizada na programação
* **Switch**: é uma estrutura que a saida modifica dependendo do valor entrado

Para construir um **if-else** é bem simples e existem diversas formas:

* Um **if** simples que só faz uma vez

```c
// Um if simples 
if(true){
    return true;
}
```

* Um **if** que possui um **else** caso necessite de mais uma operação

```c
// Um if-else simples
if(false){
    return false;
}else{
    return true;
}
```

* Um **if-else-if** simples, onde podemos colocar quantos testes quisermos

```c
// Um if-else-if simples
if(false){
    return false;
}else if(true){
    return true;
}else{
    printf("Change");
}
```

* um **if-else** de somente uma linha, onde se quisermos fazer coisas pequenas podemos colocar um if-else de somente uma única linha linha, como abaixo.
  * usamos um **?**  onde a esquerda fica a condição desejada verificar e a direita caso **if** e depois dos **:** fica a condição de **else.**
  * Colocamos **\( \)**  entre toda a estrutura como abaixo para evitar de erros na hora de compilar
  * Não colocamos **;** nas condições, somente no final como abaixo.

```c
// Estrutura Básica 

(Condição) ? (caso if) : (caso else) ; 
```

Exemplo:

```c
// Variavel
int p = 1;
int q = 1;

// o if-else em uma linha

(p == 1) ? (q = q + 1) : (q = q - 1) ;

// o if-else normal desse exemplo

if(p == 1){
    q = q + 1;
}else{
    q = q - 1;
}
```

