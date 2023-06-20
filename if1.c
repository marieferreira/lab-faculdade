#include <stdio.h>

int main(){
	
	int idade = 18;
	
	printf("Informe a idade:\n");
	scanf("%d", &idade);
	
	if(idade >= 18){
		printf("Maior de idade!\n");
		printf("Pode entrar na balada. \n");
	}else{
		printf("Proibido entrar!");
	}
			
}
	


