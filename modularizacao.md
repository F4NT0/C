# Modularização

{% page-ref page="./" %}

## Modularização

Modularização serve para poder limpar o arquivo main em C

Na modularização colocamos todos os _protótipos_ das funções em um _header_

* **Protótipos** são as construções das funções sem o que elas fazem, ou seja, são somente a construção do que precisa, como no exemplo abaixo temos uma função completa: 

```c
// Função completa em C
int teste(int a, int b){
    return a + b;
}
```

O protótipo dessa função é somente a chamada dela fora das chaves, encerrando com um **;**

```c
// Exemplo de Header
int teste(int a, int b);
```

Na teoria, **Protótipos são Declarações das Funções e de Constantes** para serem chamadas para avisarem para o program que essas funções existem e serão criadas depois em outro lugar e é isso que o Header faz, avisa para um outro arquivo que aquelas funções serão criadas e utilizadas.

* **Header** é um arquivo onde será definido todos os Protótipos de todas as funções necessárias, podendo haver vários headers para cada biblioteca de funções desejada. os arquivos headers possuem a extensão .h e tem a seguinte construção básica:

```c
// -----------------------------
// Nome do Arquivo: functions.h
// -----------------------------

#ifndef FUNCTIONS_H //cria um comando de pré-processamento que será verificado
#define BIBFUNC_H

// =========================
// AQUI FICAM OS PROTÓTIPOS
// =========================

#endif //se o arquivo ja tiver sido incluido ele irá pular para cá direto
```

* Após fazer o Header, fazemos um arquivo com a extensão .c para poder construir todas as funções que foram definidas no Header e para isso acontecer devemos **incluir** o header em nosso novo arquivo c:

```c
// -----------------------------
// Nome do Arquivo: functions.c
// -----------------------------

#include "functions.h"

// ======================
// AQUI FICAM AS FUNÇÕES
// ======================
```

