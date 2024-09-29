#include "remove.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char msg[101];
	char hexa[3];
	int i, b, verify, x = 1;
	char fim[] = "00";
	
	printf("Coloque o valor de B: ");
	scanf("%d", &b);
	
	printf("Coloque a mensagem: ");
	scanf("%100s", msg);
	for(i=0; i<strlen(msg); i+= 2){
		x = i / 2 + 1;
		veri + func_val(x, b);
		if(veri != 0){
			hex[0] = msg[i];
			hex[1] = msg[i + 1];
			hex[2] = '\0';
			if (strcmp(hexa, fim) == 0){
				break;
			}
			int resultado = strtol(hexa, NULL, 16);
			printf("%c", resultado);
		}
	}
	return 0;
}
