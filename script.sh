#!/bin/bash

#Script para geração de analisador sintático
echo "Iniciando o BISON"
bison -d comp.y -Wcounterexamples
if [ $? -ne 0 ]; then
    echo "Erro na geração do código sintático."
    exit 1
fi

echo "Renomeando arquivos"
mv comp.tab.h analisador.h
mv comp.tab.c comp.y.c

echo "Iniciando FLEX"
flex comp.l
if [ $? -ne 0 ]; then
    echo "Erro na geração do código léxico."
    exit 1
fi

echo "Renomeando arquivos"
mv lex.yy.c comp.flex.c
echo "Compilando arquivos"
gcc -c comp.flex.c -o comp.flex.o
gcc -c comp.y.c -o comp.y.o
gcc -o comp comp.flex.o comp.y.o -lfl -lm
echo "Para executar o compilador digite: ./comp [nome do arquivo a ser
testado]"