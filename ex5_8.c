/*8) Escreva uma função que decide se um número é primo.*/
#include <stdio.h>
int primo (int a){
  int n, cont=0;

  for(n=1;n<11;n++){
   if(a%n==0){
  	cont++;
   }  
  }
  if(cont > 2){
    printf("O numero nao eh primo");
  }else{
	printf("O numero eh primo");
	}
}

int main (){
    int x;
    scanf ("%d", &x);
    int *r = primo(x);
    return r;
}
