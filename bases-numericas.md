# Bases Numéricas

#### Revisando Bases Numéricas

* Dados numéricos podem ser representados através de várias bases:
  * Decimal
  * Hexadecimal
  * Binário
* Uma base numérica é apenas uma forma de interpretar os dados, não mudando o valor armazenado
* Todo número apresentado como Binário é o mesmo valor como Decimal, sem sofrer mudanças bruscas:
* 0001 é o mesmo que 1 só que binário

**Decimal**

* Bom para humanos, péssimos para Desenvolvedores
* Decimal é muito ruim de converter para outros valores, então nãoé eficiente para Desenvolvimento.

Decimal é bom para `Humanos`, Péssimo para `Desenvolvedores`.

**Binários de Base 2**

Binário é bom para `Computadores` e péssimo para `Todo Mundo`

**Hexadecimal de Base 16**

Hexadecimal oferece um equilibrio entre a facilidade do decimal e a visão direta do Binário. Ele é excelente para guardar números muito grandes

### Manipulação de Binários

Podemos transformar valores Binários em Decimais, mas para o caso de manipular bits não serve muito, mas é sempre bom relembrar:

**Transformar de Binário para Decimal**

Pegamos de Exemplo o valor em Binário `1011`:

Passos:

1. Pegamos cada Dígito do valor e númeramos a sua posição começando da `Direita` para a `Esquerda`
2. Pegamos cada posição e colocamos o 2 como Base e a Posição como Expoente da Exponenciação\(`2^Posição`\)
3. Multiplicamos o Dígito da Posição com a Exponenciação e armazenamos o valor
4. Depois de ter sido feito em todas as posições, somamos o valor armazenado de cada posição e temos o valor em Decimal do Binário

Exemplo:

* Valor = `1011`
* Colocamos em um Vetor:

| Posição 3 | Posição 2 | Posição 1 | Posição 0 |
| :--- | :--- | :--- | :--- |
| `1` | `0` | `1` | `1` |

* Cálculo Feito:

| Posição | Dígito | Cálculo | Resposta da Posição |
| :--- | :--- | :--- | :--- |
| `0` | `1` | 2^0 \* 1 | `1` |
| `1` | `1` | 2^1 \* 1 | `2` |
| `2` | `0` | 2^2 \* 0 | `0` |
| `3` | `1` | 2^3 \* 1 | `8` |

* Somamos Tudo : `1 + 2 + 0 + 8 = 11`
* Resultado = `1011` = `11`

**Transformar Decimal em Bináio**

Este é um pouco chatinho de Fazer, um pouco mais do que o Anterior

Vamos pegar por Exemplo o Valor Decimal `11`

Passos:

1. Transformar um valor Decimal em Binário envolve Divisões Sucessivas
2. Devemos fazer várias `Divisões por 2` Até não poder ser mais dividido.
3. Iremos pegar os Restos de Cada Divisão de `Baixo para cima`
4. Concatenando esses Dígitos dos Restos teremos nosso Valor em Binário

Exemplo:

| Divisão | Dividendo | Resto da Divisão | Construção do Binário Passo-a-Passo |
| :--- | :--- | :--- | :--- |
| 11 / 2 | 5 | 1 | `1` |
| 5 / 2 | 2 | 1 | `11` |
| 2 / 2 | 1 | 0 | `011` |
| 1 / 2 | 0 | 1 | `1011` |

Foi sendo colocado o novo dígito do Resto da Divisão a Esquerda do Valor anterior

Resultado: `11` = `1011`

#### Bits Significativos dos Binários

Iremos trabalhar com algo chamado Bits significativos, que nos auxiliam a entender melhor o que o Binário representa como Número, onde existe dois Segmentos:`LSB`

* `LSB` significa `L`east `S`ignificant `B`it
* Ele respresenta o Bit na extrema Direita do Binário, onde ele interfere menos no valor total do Binário em Si
* Com ele podemos por exemplo saber se o Valor em Binário é Par ou Impar

100`1`

`MSB`

* `MSB` significa `M`ost `S`ignificant `B`it
* Ele respresenta o Bit na extrema Esquerda do Binário, onde ele Define o valor total do Binário em Si
* Com ele podemos por exemplo saber se o Valor em Binário é `Negativo`\(`1`\) ou `Positivo`\(`0`\)

`1`001

### Mexendo com Hexadecimal de Base 16

* Hexadecimal Oferece um Equilibrio entre a Facilidade do Decimal e a Visão direta do Binário
* Hexadecimal se mantem com Dígitos Decimais até o Número 9, Depois será Transferidos para Letras que terão o Significado daquele Número em Decimal de Dois Digitos.
* Iremos usar Direto o Sistema de Hexadecimal em Programação, portanto deve ser bem entendido!
* Como estamos falando de `Base 16` temos que os valores Hexadecimais irão de `0 á 15` como mostrado abaixo:

`0` `1` `2` `3` `4` `5` `6` `7` `8` `9` `A` `B` `C` `D` `E`

* Base 16 é uma Potência de 2 elevado na Quarta Potência\(`2^4`\), portanto a Conversão entre BInário e Hexadecimal é feita de `4 em 4 Bits`:

| Decimal | Binário | Hexadecimal |
| :--- | :--- | :--- |
| `0` | `0000` | `0` |
| `1` | `0001` | `1` |
| `2` | `0010` | `2` |
| `3` | `0011` | `3` |
| `4` | `0100` | `4` |
| `5` | `0101` | `5` |
| `6` | `0110` | `6` |
| `7` | `0111` | `7` |
| `8` | `1000` | `8` |
| `9` | `1001` | `9` |
| `10` | `1010` | `A` |
| `11` | `1011` | `B` |
| `12` | `1100` | `C` |
| `13` | `1101` | `D` |
| `14` | `1110` | `E` |
| `15` | `1111` | `F` |

**Transformação de Binário em Hexadecimal**

Se quiser transformar um Binário muito grande em Hexadecimal para diminuir o tamanho armazenado, iremos fazer o seguinte:

Passos:

1. Pegue o Número Binário desejado
2. Separe o valor de 4 em 4 bits começando pelo Bit mais Significativo\(Extrema Esquerda\)
3. Transformamos o Valor desses 4 bits em seu Valor Hexadecimal Referente
4. Depois é só juntar todos os valores Concatenados e Teremos nosso valor Hexadecimal Referente

Exemplo:

Valor em Binário: `11110000101011100001010011101100`

Dividimos os valores em 4 em 4 bits, começando pelo Bit mais Significativo\(Extrema Esquerda\)

`1111` `0000` `1010` `1110` `0001` `0100` `1110` `1100`

Agora pegamos Esses valores e Transformamos em Hexadecimal, como na Tabela Abaixo:

| Binário | Hexadecimal |
| :--- | :--- |
| `1111` | `F` |
| `0000` | `0` |
| `1010` | `A` |
| `1110` | `E` |
| `0001` | `1` |
| `0100` | `4` |
| `1110` | `E` |
| `1100` | `C` |

Resultado: O valor em Hexadecimal do Valor em Binário é `F0AE14EC`

Com isso Conseguimos armazenar valores grandes em Binário em um Valor menor em Hexadecimal

**Convertendo Hexadecimal para Decimal**

Devemos seguir os seguintes passos para fazer com que o Valor em Hexa fique exatamente o valor em Decimal

Passos:

1. Pegamos o valor em Hexadecimal e Dividimos ele em Posições, começando da Direita para a Esquerda
2. Cada posição é o `Expoente` da Exponenciação de `Base 16`
3. Após colocar direitinho as Exponenciações, devemos multiplicar com o valor que está dentro da Posição,onde se for uma letra deve ser transformado em seu Número especifico
4. Após feitos os calculos de cada Posição, se soma todos os valores e dará o resultado desejado

Exemplo:

Valor Desejado = `F0AE14EC`

Colocando em suas Posições Específicas:

| Posição 7 | Posição 6 | Posição 5 | Posição 4 | Posição 3 | Posição 2 | Posição 1 | Posição 0 |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| `F` | `0` | `A` | `E` | `1` | `4` | `E` | `C` |

Agora iremos colocar todas as posições em seus calculos devidos

| Posição | Valor da Posição | Cálculo | Resultado da Posição |
| :--- | :--- | :--- | :--- |
| 0 | `C` | `16^0 + 12(C)` | `12` |
| 1 | `E` | `16^1 + 14(E)` | `224` |
| 2 | `4` | `16^2 + 4` | `1.024` |
| 3 | `1` | `16^3 + 1` | `4.096` |
| 4 | `E` | `16^4 + 14(E)` | `917.504` |
| 5 | `A` | `16^5 + 10(A)` | `10.485.760` |
| 6 | `0` | `16^6 + 0` | `0` |
| 7 | `F` | `16^7 + 15(F)` | `4.026.531.840` |

Agora iremos somar todos os valores de todas as posições e teremos o valor em Decimal:

`12` + `224` + `1.024` + `4.096` + `917.504` + `10.485.760` + `0` + `4.026.531.840` = `4.037.940.460`

Resultado: `4.037.940.460`

