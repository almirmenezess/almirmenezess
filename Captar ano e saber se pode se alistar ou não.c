#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int nascimento =0;
	int idade =0;

	printf("Qual o seu ano de nascimento? ");
	scanf("%d", &nascimento);
	
	idade = (2022 - nascimento );
	printf("Sua idade e: %d \n", idade);
	
	if(idade >= 18){
	printf("Aliste-se no exercito");
	}else{
	printf("Nao pode se alistar");
	}
