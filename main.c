#include  <stdio.h>
#include <stdlib.h>
#include<time.h>
#define n 10
#define m 10


int main()

{

    int  M[n][m];
    int i, j,linha,coluna;
    int cont1= 25;
    int cont_inicial1 = 0;
    int ganhou=5;
    int ganhou_inicial=0;
    int perdeu=3;
    int perdeu_incial=0;

    srand(time(NULL));

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            M[i][j]=0;
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {

            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("informe a linha e a colona:\n");
    scanf("%d %d",&linha,&coluna);

    while(cont_inicial1 < cont1 )
    {

        int l= rand () % 10;
        int c= rand () % 10;

        if ( M[l][c]== 0)
        {
            M[l][c]= 1;
            cont_inicial1++;
        }


    }




    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {

            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}

