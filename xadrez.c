#include <stdio.h>



int main() {
    int b, r, ct, cb, cr;
    
    printf("Quantas casas a torre vai andar: ");
    scanf("%d", &ct);
    printf("Quantas casas o bispo vai andar: ");
    scanf("%d", &cb);
    printf("Quantas casas a torre vai andar: ");
    scanf("%d", &cr);

//Movimento da torre
    printf("Torre: \n");
    for (int i = 1; i <= ct; i++)
    {
        printf("Direita\n");
    }

//Movimento do bispo
    printf("\nBispo: \n");
    b = 1;
    while (b <= cb)
    {
        printf("Cima-Direita\n");
        b++;
    }

//Movimento da rainha
    printf("\nRainha: \n");
    r = 0;
    do
    {
        printf("Esquerda\n");
        r++;
    } while (r < cr);
    
    
    return 0;
}
