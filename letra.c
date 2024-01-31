#include <stdio.h>
#include <string.h>

void contar(char palabra[], char diccionario[], int i);

int main (){
    char diccionario[26] = "abcdefghijklmnopqrstuvwxyz", palabra[30];
    int i, caracteres;
    printf("Ingre la palabra: \n");
    fgets(palabra, 30, stdin);
    
    caracteres = strlen(palabra);
    
    for  (i = 0; i < 25; i++)
        contar(palabra, diccionario, i);
    return 0;
}
 
void contar(char palabra[], char diccionario[], int i){

    int j, num,contador;
    char letra;
    contador = 0;
    num = strlen(palabra);
    
    for (j = 0; j < num-1; j++){

        if (palabra[j] == diccionario[i]){
                contador+=1;
                letra = diccionario[i];
        }   
    }
    if (contador != 0)
        printf("El numero de letras %c es %d\n", letra, contador);
}