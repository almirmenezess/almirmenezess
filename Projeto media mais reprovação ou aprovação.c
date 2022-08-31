#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	//recebe as notas
	float num1 = 0;
	float num2 = 0;
	float num3 = 0;
	float media = (num1 + num2 + num3)/3;
	
	//primeira nota
	printf("Digite sua primeira nota: ");
    scanf("%f", &num1);
    
    //segunda nota
	printf("Digite sua primeira nota: ");
    scanf("%f", &num2);
    
	//terceira nota
	printf("Digite sua primeira nota: ");
    scanf("%f", &num3);
    
  	
	media = (num1 + num2 + num3)/3;
    
    printf("Sua media e: %f,", media);
    
    if ( media >= 6){
    printf(" Aprovado");
    
	}else
    { printf(" reprovado");	
	}
    

	return 0;
}
