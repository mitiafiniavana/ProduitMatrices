#include<math.h>
#include<stdio.h>
#include<conio.h>
float A[100][100], B[100][100],C[100][100];
int la,ca,cb,lb,lc,cc,k,i,j;
void main()
{
        printf("nombre de ligneA= ");
        scanf("%d",&la);
        printf("nombre de colonneA= ");
        scanf("%d",&ca);


                for(i=0;i<la;i++)
                {
                        for(j=0;j<ca;j++)
                        {
                                printf("A[%d][%d]= ",i,j);
                                scanf("%f",&A[i][j]);
                        }
                }

        printf("nombre de ligneB= ");
        scanf("%d",&lb);
        printf("nombre de colonneB= ");
        scanf("%d",&cb);


                for(i=0;i<lb;i++)
                {
                        for(j=0;j<cb;j++)
                        {
                                printf("B[%d][%d]= ",i,j);
                                scanf("%f",&B[i][j]);
                        }
                }
                for(i=0;i<la;i=i+1)
                {
                        for(j=0;j<ca;j=j+1)
                        {
                                C[i][j]=0;
                                for(k=0;k<ca;k=k+1)
                                {
                                        C[i][j]=A[i][k]*B[k][j];
                                }
                        }
                }
                for(i=0;i<la;i=i+1)
                {
                        for(j=0;j<cb;j=j+1)
                        {
                                printf("C[%d][%d]=%3.0f\n ", i,j,C[i][j]);
                        }
                }

getch();
}

