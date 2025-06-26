#include <stdio.h>

int main()
{
    int filhos;
    scanf("%d", &filhos);
    if((0<=filhos)&&(filhos<=1000))
    {
        int netos[filhos];
        int somanetos=0;
        for(int i=0; i<filhos; i++)
        {
            scanf("%d", &netos[i]);
            if((0<=netos[i])&&(netos[i]<=1000))
            {
                somanetos = somanetos + netos[i];
            }
        }
        printf("%d", somanetos);
    }
    return 0;
}
