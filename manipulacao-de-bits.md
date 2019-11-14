# Manipulação de Bits

Manipulação de Bits é o ato de algoritimicamente manipular Bits ou outros pedaços de dados menores que uma palavra.

Precisa se entender o Básico das Seguinte Páginas Já adicionadas:

[Bases Numéricas](../prog_c/bases-numericas.md)

[Usando Bases Numéricas em C](../prog_c/bases-uso.md)

### Trabalhando com Bitwise

* `Operadores Bitwise` são operadores que manipulam individualmente cada bit ou Operandos
* Podem ser usados com os Seguinte valores:
  * `unsigned int`
  * `unsigned char`
  * `unsigned short int`
  * `unsigned long int`
* Iremos usar o Bitwise bit a bit em sua Necessidade, por isso Bitwise
* Existe Dois tipos de Operadores:
  * `Operadores Lógicos`
  * `Operadores de Deslocamento`

 `Operadores Bitwise Lógicos`

Iremos usar os Operadores Lógicos já usuais por nós, só que de vez de verificar um única vez\(um único valor\) iremos verificar bit a bit de um valor Binário, como iremos mostrar mais a frente

`É testado Bit á Bit da Direita para a Esquerda`

Operadores Lógicos que iremos usar:

* `AND bitwise`
  * Sempre trabalhamos com o AND em programação usando dois ampersands\(`&&`\)
  * Como estamos trabalhando com Bitwise, iremos usar um único ampersand\(`&`\)
  * Serve principalmente para verificar se teremos 8 bits no Resultado
* `OR bitwise`
  * Sempre trabalhamos com o OR em programação usando duas Barras\(`||`\)
  * Como estamos trabalhando com Bitwise, iremos usar uma única Barra\(`|`\)
* `XOR bitwise`
  * Usamos o Operador `^`
  * Funciona da mesma forma que o OR, mas quando ambos forem 1 ele gera zero
* `NOT bitwise`
  * Usamor o Operador `~`
  * Serve da mesma função que a negação dos Lógico

\*\*\*\*

**Exemplos Lógicos:**

* Valores de Entrada:
  * `unsigned` `int` Valor1 = `01001010`
  * `unsigned` `int` valor2 = `10010010`
* Teste do `AND`:

| Entrada 1 | Entrada 2 | Resultado Lógico |
| :--- | :--- | :--- |
| `0` | `0` | `0` |
| `1` | `1` | `1` |
| `0` | `0` | `0` |
| `1` | `0` | `0` |
| `0` | `1` | `0` |
| `0` | `0` | `0` |
| `1` | `0` | `0` |
| `0` | `1` | `0` |

Resultado do `AND bitwise`: `00000010`

* Teste do `OR bitwise`:

| Entrada 1 | Entrada 2 | Resultado Lógico |
| :--- | :--- | :--- |
| `0` | `0` | `0` |
| `1` | `1` | `1` |
| `0` | `0` | `0` |
| `1` | `0` | `1` |
| `0` | `1` | `1` |
| `0` | `0` | `0` |
| `1` | `0` | `1` |
| `0` | `1` | `1` |

Resultado do `OR bitwise`: `11011010`

* Teste do `XOR bitwise`:

| Entrada 1 | Entrada 2 | Resultado Lógico |
| :--- | :--- | :--- |
| `0` | `0` | `0` |
| `1` | `1` | `0` |
| `0` | `0` | `0` |
| `1` | `0` | `1` |
| `0` | `1` | `1` |
| `0` | `0` | `0` |
| `1` | `0` | `1` |
| `0` | `1` | `1` |

Resultado do `XOR bitwise`: `11011000`

* Teste do `NOT bitwise`:

| Entrada 1 | Resultado Lógico |
| :--- | :--- |
| `0` | `1` |
| `1` | `0` |
| `0` | `1` |
| `1` | `0` |
| `0` | `1` |
| `0` | `1` |
| `1` | `0` |
| `0` | `1` |

| Entrada 2 | Resultado Lógico |
| :--- | :--- |
| `0` | `1` |
| `1` | `0` |
| `0` | `1` |
| `1` | `0` |
| `0` | `1` |
| `0` | `1` |
| `1` | `0` |
| `0` | `1` |

* Resultados do `NOT bitwise` da Entrada 1 : `10110101`
* Resultados do `NOT bitwise` da Entrada 2 : `10110101`

`Operadores de Deslocamento (shifting)`

`Deslocamento(shifting)` deslocam os bits para a `Direita` ou para a `Esquerda` dependendo do que se Deseja fazer

Quando é movido os bits podem ficar espaços vazios e se existirem `são preenchidos com zeros`

Podemos utilizar Deslocamento junto com Operadores Lógicos

### Shift para a Esquerda

Usamos o operador específico `<<`

* Argumentos necessários para fazer o Shift:
  * Valor a ser deslocado
  * Quantidades de bits para a esquerda desejados
  * O valor original não é mexido, deve ser criado outra variavel com o Valor

Exemplo:

Pegamos o valor `23`

Armazenamos esse valor Decimal em Hexadecimal em uma Variável:

```c
unsigned int x = 0x17;
```

* O programa irá fazer o Seguinte:
  * Transformar o Valor em Binário
  * Mover o Número de bits para a esquerda pelo número de casas especificado
  * Adicionar zeros nos espaços vazios
  * Armazenar o novo valor na nova Variável

`23` em Binário é `00010111`

Queremos mover `Uma` casa a esquerda, ele irá pegar bita á bit e empurrar para a esquerda

Vetor Original:

| pos 7 | pos 6 | pos 5 | pos 4 | pos 3 | pos 2 | pos 1 | pos 0 |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| `0` | `0` | `0` | `1` | `0` | `1` | `1` | `1` |

Vetor fazendo o `shifting`:

Etapa 1: Será adicionado uma nova posição na Extrema Esquerda

| pos 8 | pos 7 | pos 6 | pos 5 | pos 4 | pos 3 | pos 2 | pos 1 | pos 0 |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| `NULL` | `0` | `0` | `0` | `1` | `0` | `1` | `1` | `1` |

Etapa 2: Será movido o valor da Posição 7 para a nova posição

| pos 8 | pos 7 | pos 6 | pos 5 | pos 4 | pos 3 | pos 2 | pos 1 | pos 0 |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| `0` |  | `0` | `0` | `1` | `0` | `1` | `1` | `1` |

Etapa 3: Será movido o valor da Posição 6 para a Posição 7

| pos 8 | pos 7 | pos 6 | pos 5 | pos 4 | pos 3 | pos 2 | pos 1 | pos 0 |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| `0` | `0` |  | `0` | `1` | `0` | `1` | `1` | `1` |

Etapa 4: Será movido o valor da Posição 5 para a Posição 6

| pos 8 | pos 7 | pos 6 | pos 5 | pos 4 | pos 3 | pos 2 | pos 1 | pos 0 |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| `0` | `0` | `0` |  | `1` | `0` | `1` | `1` | `1` |

Etapa 5: Será movido o valor da Posição 4 para a Posição 5

| pos 8 | pos 7 | pos 6 | pos 5 | pos 4 | pos 3 | pos 2 | pos 1 | pos 0 |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| `0` | `0` | `0` | `1` |  | `0` | `1` | `1` | `1` |

Etapa 6: Será movido o valor da Posição 3 para a Posição 4

| pos 8 | pos 7 | pos 6 | pos 5 | pos 4 | pos 3 | pos 2 | pos 1 | pos 0 |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| `0` | `0` | `0` | `1` | `0` |  | `1` | `1` | `1` |

Etapa 7: Será movido o valor da Posição 2 para a Posição 3

| pos 8 | pos 7 | pos 6 | pos 5 | pos 4 | pos 3 | pos 2 | pos 1 | pos 0 |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| `0` | `0` | `0` | `1` | `0` | `1` |  | `1` | `1` |

Etapa 8: Será movido o valor da Posição 1 para a Posição 2

| pos 8 | pos 7 | pos 6 | pos 5 | pos 4 | pos 3 | pos 2 | pos 1 | pos 0 |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| `0` | `0` | `0` | `1` | `0` | `1` | `1` |  | `1` |

Etapa 9: Será movido o valor da Posição 0 para a Posição 1

| pos 8 | pos 7 | pos 6 | pos 5 | pos 4 | pos 3 | pos 2 | pos 1 | pos 0 |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| `0` | `0` | `0` | `1` | `0` | `1` | `1` | `1` | `NULL` |

Etapa 10: Adicionar Zeros nos Espaços vazios

| pos 8 | pos 7 | pos 6 | pos 5 | pos 4 | pos 3 | pos 2 | pos 1 | pos 0 |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| `0` | `0` | `0` | `1` | `0` | `1` | `1` | `1` | `0` |

Valor Armazenado na nova Variável será `0x2E` em Decimal `46`

**Fazendo isso em C**

```c
#include<stdio.h>

unsigned int valor = 0x17; //23 em Decimal
unsigned int novoValor = valor << 1;

printf("Valor antigo: %d\n", valor);
printf("Valor apos shifting: %d\n", novoValor);
```

### Shift para a Direita

Usamos o Operador Especifico `>>`

* Argumentos necessários para fazer o `shitf`
  * Valor a ser deslocado
  * Quantidades de bits para deslocar
  * O valor original fica inalterado, já que estamos trabalhando com outra Variavel

Exemplo:

Pegamos o valor `46`

Armazenamos esse valor Decimal em Hexadecimal

```c
unsigned int valor = 0x2E;
```

* O que o programa irá fazer:
  * Será apagado o Valor da primeira Posição na Extrema Direita\(LSB\)
  * Ele irá pegar os bits na extrema direita e mover para a Direita bit a bit
  * Irá adicionar Zeros em todos os espaços vazios deixados
  * Irá armazenar o valor na nova variavel

`46` em Binário é `00101110`

Queremos mover `Uma` casa a Direita, então ele irá pegar bit á bit e empurrar para a Esquerda

Vetor Original:

| pos 7 | pos 6 | pos 5 | pos 4 | pos 3 | pos 2 | pos 1 | pos 0 |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| `0` | `0` | `1` | `0` | `1` | `1` | `1` | `0` |

Etapa 1: Será Apagado o Valor da Primeira Posição na Extrema Direita

| pos 7 | pos 6 | pos 5 | pos 4 | pos 3 | pos 2 | pos 1 | pos 0 |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| `0` | `0` | `1` | `0` | `1` | `1` | `1` | `NULL` |

Etapa 2: Será movido o valor da Posição 1 para a Posição 0

| pos 7 | pos 6 | pos 5 | pos 4 | pos 3 | pos 2 | pos 1 | pos 0 |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| `0` | `0` | `1` | `0` | `1` | `1` |  | `1` |

Etapa 3: Será movido o valor da Posição 2 para a Posição 1

| pos 7 | pos 6 | pos 5 | pos 4 | pos 3 | pos 2 | pos 1 | pos 0 |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| `0` | `0` | `1` | `0` | `1` |  | `1` | `1` |

Etapa 4: Será movido o valor da Posição 3 para a Posição 2

| pos 7 | pos 6 | pos 5 | pos 4 | pos 3 | pos 2 | pos 1 | pos 0 |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| `0` | `0` | `1` | `0` |  | `1` | `1` | `1` |

Etapa 5: Será movido o valor da Posição 4 para a Posição 3

| pos 7 | pos 6 | pos 5 | pos 4 | pos 3 | pos 2 | pos 1 | pos 0 |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| `0` | `0` | `1` |  | `0` | `1` | `1` | `1` |

Etapa 6: Será movido o valor da Posição 5 para a Posição 4

| pos 7 | pos 6 | pos 5 | pos 4 | pos 3 | pos 2 | pos 1 | pos 0 |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| `0` | `0` |  | `1` | `0` | `1` | `1` | `1` |

Etapa 7: Será movido o valor da Posição 6 para a 5

| pos 7 | pos 6 | pos 5 | pos 4 | pos 3 | pos 2 | pos 1 | pos 0 |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| `0` |  | `0` | `1` | `0` | `1` | `1` | `1` |

Etapa 8: Será movido o valor da Posição 7 para a Posição 6

| pos 7 | pos 6 | pos 5 | pos 4 | pos 3 | pos 2 | pos 1 | pos 0 |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
|  | `0` | `0` | `1` | `0` | `1` | `1` | `1` |

Etapa 9: A posição 7 ficará NULL

| pos 7 | pos 6 | pos 5 | pos 4 | pos 3 | pos 2 | pos 1 | pos 0 |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| `NULL` | `0` | `0` | `1` | `0` | `1` | `1` | `1` |

Etapa 10: Será adicionado um zero na posição Vazia

| pos 7 | pos 6 | pos 5 | pos 4 | pos 3 | pos 2 | pos 1 | pos 0 |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| `0` | `0` | `0` | `1` | `0` | `1` | `1` | `1` |

Etapa 11: Remodelação do Vetor para o novo valor

| pos 7 | pos 6 | pos 5 | pos 4 | pos 3 | pos 2 | pos 1 | pos 0 |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| `0` | `0` | `0` | `1` | `0` | `1` | `1` | `1` |

O Novo valor que será armazenado na Nova variavel será `0x17` que em Decimal é `23`

**Fazendo isso em C**

```c
#include<stdio.h>

unsigned int valor = 0x2E; //46 em Hexadecimal
unsigned int novoValor = valor >> 1; //mover um bit a direita

printf("Valor Original: %d\n", valor);
printf("Valor Novo: %d\n", novoValor);
```

