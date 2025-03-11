#include <stdio.h>



int main() {
    int b, r, ct, cb, cr;
    int dt, db, dr, dc1, dc2;
    
    printf("\nQuantas casas a torre vai andar: ");//Entrada da quantidade casas
    scanf("%d", &ct);
    printf("Direção da torre: \n");
    printf("(1) Direia \n");
    printf("(2) Esquerda \n");
    printf("(3) Cima \n");
    printf("(4) Baixo \n");
    printf("Qual direção da torre: ");//Entrada da direção
    scanf("%d", &dt);
    
    printf("\nQuantas casas o bispo vai andar: ");//Entrada da quantidade casas
    scanf("%d", &cb);
    printf("Direção do bispo: \n");
    printf("(1) Cima-Direia \n");
    printf("(2) Cima-Esquerda \n");
    printf("(3) Baixo-Direita \n");
    printf("(4) Baixo-Esquerda \n");
    printf("Qual direção do bispo: ");//Entrada da direção
    scanf("%d", &db);
    
    printf("\nQuantas casas a rainha vai andar: ");//Entrada da quantidade casas
    scanf("%d", &cr);
    printf("Direção da Rainha: \n");
    printf("(1) Direia \n");
    printf("(2) Esquerda \n");
    printf("(3) Cima \n");
    printf("(4) Baixo \n");
    printf("Qual direção da rainha: ");//Entrada da direção
    scanf("%d", &dt);
    
    printf("\nQuais as direções do cavalo: \n");//Entrada da quantidade casas
    printf("Direção do Cavalo: \n");
    printf("(1) Cima \n");
    printf("(2) Baixo \n");
    printf("Primeira direção [cima/baixo]: ");//Entrada da direção
    scanf("%d", &dc1);
    printf("(3) Direita \n");
    printf("(4) Esquerda \n");
    printf("Segunda direção [direta/esquerda]: ");//Entrada da direção
    scanf("%d", &dc2);

//Movimento da torre
    printf("\nTorre: \n");
    for (int i = 1; i <= ct; i++)
    {
        if (dt == 1)
        {
            printf("Direita\n");
        } else if (dt == 2)
        {
            printf("Esquerda\n");
        } else if (dt == 3)
        {
            printf("Cima\n");
        } else
        {
            printf("Baixo\n");
        }
        
    }

//Movimento do bispo
    printf("\nBispo: \n");
    b = 1;
    while (b <= cb)
    {
        if (db == 1)
        {
            printf("Cima-Direita\n");
        } else if (db == 2)
        {
            printf("Cima-Esquerda\n");
        } else if (db == 3)
        {
            printf("Baixo-Direita\n");
        } else
        {
            printf("Baixo-Esquerda\n");
        }
        b++;
    }

//Movimento da rainha
    printf("\nRainha: \n");
    r = 0;
    do
    {
        if (dr == 1)
        {
            printf("Direita\n");
        } else if (dr == 2)
        {
            printf("Esquerda\n");
        } else if (dr == 3)
        {
            printf("Cima\n");
        } else
        {
            printf("Baixo\n");
        }
        r++;
    } while (r < cr);

//Movimento do cavalo
    printf("\nCavalo: \n");
    int movimento_completo = 1;
    while (movimento_completo--)
    {
        for (int i = 0; i < 2; i++)
        {
            if (dc1 == 1)
        {
            printf("Cima\n");
        } else
        {
            printf("Baixo\n"); 
        }
        
        }
        
        if (dc2 == 3)
        {
            printf("Direita\n");
        } else
        {
            printf("Esquerda\n");
        }
        
        
        
    }
    
    return 0;
}
