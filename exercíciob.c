#include <stdio.h>

int main()
{
    int ano;
    int anoerrado;
    int idade;
    scanf("%d", &ano);
    if((2010<=ano)&&(ano<=2020))
    {
        idade = 2025 - ano;
        anoerrado = 2025 - (idade*2);
        printf("%d", anoerrado);
    }
    return 0;
}
