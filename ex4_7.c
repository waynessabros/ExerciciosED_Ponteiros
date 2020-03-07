/*7) Escreva uma função que calcula o fatorial de um número 
recebido por parâmetro, devolvendo-o ao final.*/
#include <stdio.h>
int fato (int a){
	  int fat,n;
	  int *p;
	  if(a>=0)
    {
           fat=1;
           n=a;
           while(n>0)
           {
                     fat*=n;     //FATORIAL = FATORIAL*N
                     n--;
           }
	       p = fat;
		   printf("%d!=%d\n",a,p);
	       
    }
    
}
int main (){
    int x;
    scanf ("%d", &x);
    int r = fato(x);
    return r;
}
