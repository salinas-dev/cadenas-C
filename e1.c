#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Tipo de cadena strcmp para comparar 2 cadenas

int main(){
  int res;              //Negativo si la cadena 2 es mayor que la cadena 1
  char str1[]="Para";   //O si los dos son iguales
  char str2[]="Brisas"; //Positivo si la cadena 1 es mayor que la cadena 2

  res = strcmp(str1,str2);
  printf("resultado: %d",res);
 
    return 0;
}