#!/bin/bash

#--------------------------------------
# COMPILANDO O ARQUIVO EM C
#--------------------------------------

# APRESENTANDO TODOS OS ARQUIVOS C PARA COMPILAR

echo " "
echo "Todos os arquivos para compilar"
echo " "
echo "$(tput setaf 1)" *.c # VAI IMPRIMIR OS NOMES DOS ARQUIVO EM VERMELHO
echo " "
echo "$(tput setaf 11)"
# ENTRANDO O NOME DO ARQUIVO QUE QUEREMOS COMPILAR

echo -n "Digite o nome do arquivo para compilar: "
read nome
echo " "
printf "Compilando o arquivo...\n"
echo " "
gcc $nome.c -o $nome &&\
mv ./$nome testes/$nome &&\
cd testes &&\
./$nome

