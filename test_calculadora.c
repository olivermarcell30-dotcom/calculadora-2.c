#include <stdio.h>
#include <assert.h>
#include "function_divisao.c"
#include "function_multiplicar.c"
int main()
{
    assert(dividir(14,2) == 7);
    assert(dividir(99,3) == 33);
    assert(dividir(144,12) == 12);
    printf("Teste executado com sucesso");
 printf("/ncriado por Marcell Augusto (https://github.com/olivermarcell30-dotcom) ");
 return 0;
}
