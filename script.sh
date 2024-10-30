#!/bin/bash

echo "Iniciando o BISON"
bison -d comp.y -Wcounterexamples
if [ $? -ne 0 ]; then
    echo "Erro na geração do código sintático."
    exit 1
fi

echo "Iniciando FLEX"
flex comp.l
if [ $? -ne 0 ]; then
    echo "Erro na geração do código léxico."
    exit 1
fi

echo "Compilando arquivos"
gcc -c lex.yy.c -o comp.flex.o
if [ $? -ne 0 ]; then
    echo "Erro na compilação do código léxico."
    exit 1
fi

gcc -c comp.tab.c -o comp.y.o
if [ $? -ne 0 ]; then
    echo "Erro na compilação do código sintático."
    exit 1
fi

gcc -o comp comp.flex.o comp.y.o -lfl -lm
if [ $? -ne 0 ]; then
    echo "Erro na compilação do compilador."
    exit 1
fi

echo "Para executar o compilador digite: ./comp [nome do arquivo a ser
testado]"