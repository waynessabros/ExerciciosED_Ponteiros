/*3) Escreva uma fun��o que exibe o maior entre dois n�meros diferentes 
digitados pelo usu�rio.*/
int maior(int n1, int n2){
 int *i;
 if(n1>n2){
 	i=n1;
 }else{
 	i=n2;
 }
 printf("Maior: %d\n", i);
}
int main(){
	int n1, n2;
	
	scanf("%d", &n1);
	scanf("%d", &n2);
	
	maior(n1, n2);
	return 0;
}
