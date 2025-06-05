// Online C compiler to run C program online
#include <stdio.h>

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int l,c;
    printf("Digite a quantidade de linhas e colunas da matriz respectivamente\n");
    
    scanf("%d%d",&l,&c);
    int matriz[l][c];
    float media;
    int qtd =l*c;
    int soma=0;
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("\ndigite o valor da linha %d e coluna %d\n",i+1,j+1);
            scanf("%d",&matriz[i][j]);
            soma +=matriz[i][j];
            
        }
    }
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("\t%d",matriz[i][j]);
            
        }
        printf("\n");
    }
    media=soma/qtd;
    printf("\nA média de valores da matriz é %.2f",media);
    
    int qpar, qimpar;
      qpar = qimpar = 0;
      for (int i=0; i<l; i++){
          for(int j=0; j<c; j++){
              if(matriz[i][i] %2 == 0)
                    qpar++;
              else
                    qimpar++;
          }
      }
        printf("\n Na matriz temos %d números pares", qpar);
        printf("\n Na matriz temos %d números impares", qimpar);
        
    
        return 0;
    }
