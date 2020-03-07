/*2) Escreva um programa em C que encontra o maior elemento em um vetor de 10
valores digitados pelo usuário.*/
#include <stdio.h>
int main(){
	 //declarando um vetor
    int v [10];//vetor com 10 valores 
    int i,j,k=0;
    int *p, cont=1;
    for(i=0;i<10;i++){
    	scanf("%d", &v[i]); //usuário inserindo os dados no vetor
	}
	
	for(i=1;i<10;i++){
		for(j=1;j<10;j++){
	     if(v[i]>k){
	     cont = i;
		 k = v[i];//armazena o numero da maior posição de numero do vetor
	     p = v[i];}
	    }
    }
    printf("o maior elemento do vetor: %d", p);
}
    



