#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float x[100],y[100],a,s=1,t=1,k=0;
    int n,i,j,d=1;
    printf("\n\n Entre com o numero de termos da equacao da tabela: = ");
    scanf("%d",&n);
    
	for(i=0; i<n; i++)
    {
        printf("Entre com o valor x = ",x[i]);
  		scanf ("%f",&x[i]);
        printf("Entre com o valor y = ",y[i]);
  	    scanf("%f",&y[i]);
    }
    printf("\n\n Valores de entrada da Tabela :\n\n");
    for(i=0; i<n; i++)
    {
        printf("%0.3f\t%0.3f",x[i],y[i]);
        printf("\n");
    }
    while(d==1)
    {
        printf(" \n\n\n Entre com o valor de x para encontrar o respectivo valor de y\n\n\n");
        scanf("%f",&a);
        for(i=0; i<n; i++)
        {
            s=1;
            t=1;
            for(j=0; j<n; j++)
            {
                if(j!=i)
                {
                    s=s*(a-x[j]);
                    t=t*(x[i]-x[j]);
                }
            }
            k=k+((s/t)*y[i]);
        }
        printf("\n\n O respectivo valor da variavel y: %f",k);
        printf("\n\n Do you want to continue?\n\n Press 1 to continue and any other key to exit");
        scanf("%d",&d);
    }
getch();
}

