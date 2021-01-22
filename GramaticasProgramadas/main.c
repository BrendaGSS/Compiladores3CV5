/*
A->aAa
A->bAb
A->c

*/
# include <stdio.h>
# include <stdlib.h>

char buffer[1024];
int i=0;

void consumir(char x){
	if (x==buffer[i]) i++; 
	else {
		printf("Se esperaba %c\n",x);
		exit(1);	
	}
}

void A(){
	switch(buffer[i]){
		case 'a': i++; A(); consumir('a'); break;
		case 'b': i++; A(); consumir('b'); break;
		case 'c': i++; break;
		default: exit(1);
	}
}

int main (){
	scanf("%s",buffer);
	A();
	if(buffer[i]=='\0') printf("Aceptada\n");
	else printf("Rechazada\n");
}
