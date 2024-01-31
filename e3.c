#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (){
	char palabra[80];
	int x, y, z;
	int res;
    
	printf ("\n\nIngrese una palabra: ");
	scanf("%s", palabra);
	x=strlen(palabra);
	x=x-1;
	char palabra1, palabra2;

	for(y=0, z=x; y<=x/2; y++, z--){
	
    }
    /*
    palabra[y]=palabra1;
    palabra[z]=palabra2;
    */
   
    res=strcmp(palabra[y],palabra[z]);
    
    if(res==0){
        printf("Es una palabra palindroma \n");
    }else{
        printf("No es una palabra palindroma \n");
    }
     
    /* 
    if(palabra[y]==palabra[z]){
		printf ("Es una palabra palindroma \n");
	}else{
		printf("No es una palabra palindroma \n");
	}
    */

	return 0;
}

/*
 int res;              //Negativo si la cadena 2 es mayor que la cadena 1
  char str1[]="Para";   //O si las dos son iguales
  char str2[]="Brisas"; //Positivo si la cadena 1 es mayor que la cadena 2

  res = strcmp(str1,str2);
  printf("resultado: %d",res);
*/