/*5) Escreva um programa em C que calcula a m�dia de elementos armazenados em um
vetor de 30 posi��es.*/
#include <stdio.h>
int main(){
	 //declarando um vetor
    int v [30];//vetor com 30 valores 
    int soma=0;
    int *p;
    int i;
    
        for(i=0;i<30;i++){
    	scanf("%d", &v[i]); //usu�rio inserindo os dados no vetor
		}
		
	    for(i=0;i<30;i++){
    	soma = v[i]+soma;
		}
	p = soma/30;
	printf("Media dos elementos armarzenados num vetor de 30 posi��es: %d\n", p);
}
