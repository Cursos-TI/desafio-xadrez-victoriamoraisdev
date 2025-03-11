#include <stdio.h>

void moverTorre(int casas, int dt)
{
    
    if (casas > 0) 
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
        } else if (dt == 4)
        {
            printf("Baixo\n");
        } else {
            printf("Opção inválida para a torre\n");
            return;
        }
        moverTorre(casas - 1, dt);
        
        
    }
}

void moverBispo(int casasb, int db1, int db2)
{
    int cb;
    for(int i = 0; i < cb; i++)
    {
        
        if (db1 == 1)
        {
            printf("Cima\n");
        } else if (db1 == 2)
        {
            printf("Baixo\n");
        } else 
        {
            printf("Opção inválida 3 ");
        }
        
        for(int j = 1; j <= 1; j++) 
        {
            if (db2 == 3)
        {
            printf("Direita\n");
        } else if (db2 == 4)
        {
            printf("Esquerda\n");
        } else 
        {
            printf("Opção inválida 4 ");
        } 
        }

        moverBispo(casasb - 1, db1, db2);
    }

}

void moverRainha(int casasr, int dr)
{
    
    if (casasr > 0) 
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
        
        moverRainha(casasr - 1, dr);
    }
}

int main() {
    int b, r, ct, cb, cr;
    int direcaot, direcaob1, direcaob2, direcaor, direcaoc1, direcaoc2;
    
    printf("\nQuantas casas a torre vai andar: ");//Entrada da quantidade casas
    scanf("%d", &ct);
    printf("Direção da torre: \n");
    printf("(1) Direia \n");
    printf("(2) Esquerda \n");
    printf("(3) Cima \n");
    printf("(4) Baixo \n");
    printf("Qual direção da torre: ");//Entrada da direção
    scanf("%d", &direcaot);
    
    printf("\nQuantas casas o bispo vai andar: ");//Entrada da quantidade casas
    scanf("%d", &cb);
    printf("Direção do bispo: \n");
    printf("(1) Cima \n");
    printf("(2) Baixo \n");
    printf("Primeira direção [cima/baixo]: ");//Entrada da direção
    scanf("%d", &direcaob1);
    printf("(3) Direita \n");
    printf("(4) Esquerda \n");
    printf("Segunda direção [direta/esquerda]: ");//Entrada da direção
    scanf("%d", &direcaob2);
   
    printf("\nQuantas casas a rainha vai andar: ");//Entrada da quantidade casas
    scanf("%d", &cr);
    printf("Direção da Rainha: \n");
    printf("(1) Direia \n");
    printf("(2) Esquerda \n");
    printf("(3) Cima \n");
    printf("(4) Baixo \n");
    printf("Qual direção da rainha: ");//Entrada da direção
    scanf("%d", &direcaot);
    
    printf("\nQuais as direções do cavalo: \n");//Entrada da quantidade casas
    printf("Direção do Cavalo: \n");
    printf("(1) Cima \n");
    printf("(2) Baixo \n");
    printf("Primeira direção [cima/baixo]: ");//Entrada da direção
    scanf("%d", &direcaoc1);
    printf("(3) Direita \n");
    printf("(4) Esquerda \n");
    printf("Segunda direção [direta/esquerda]: ");//Entrada da direção
    scanf("%d", &direcaoc2);

//Movimento da torre
    printf("\nTorre: \n");
    moverTorre(ct, direcaot);

//Movimento do bispo
    printf("\nBispo: \n");
    moverBispo(cb, direcaob1, direcaob2);

//Movimento da rainha
    printf("\nRainha: \n");
    moverRainha(cr, direcaor);

//Movimento do cavalo
    printf("\nCavalo: \n");
    
    for (int i = 0, j = 4; i < j; i++, j--)
    {
        if (direcaoc1 == 1)
        {
            printf("Cima\n");
        } else if (direcaoc1 == 2)
        {
            printf("Baixo\n");
        } else 
        {
            printf("Opção inválida 1 ");
        }

        for(int i = 0, j = 2; i < j; i++, j--)
        if (direcaoc2 == 3)
        {
            printf("Direita\n");
        } else if (direcaoc2 == 4)
        {
            printf("Esquerda\n");
        } else 
        {
            printf("Opção inválida 2 ");
        } 
    }
    
    return 0;
}
