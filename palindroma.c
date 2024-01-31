#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
	int palabra;
	int pala;
	int i;
	int res;
	char pali[10]="";
	char pali1[10];
	
	printf ("Escribe una palabra \n");
	scanf ("%s", &pali);
	palabra=strlen(pali);
	pala=palabra;
	
	for (i=0; i<palabra; i++) {
		pali1[i]= pali[pala-1];
		pala--;
	}
	res = strcmp (pali, pali1);
	if (res==0){
		puts ("La palabra es palindroma");
	}else{
		puts ("La palabra no es palindroma");
	}
	return 0;
}