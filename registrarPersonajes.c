#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *ptrDatosPersonajes;
    char nombre[15];
    int edad;

    ptrDatosPersonajes = fopen("Mis personajes.dat", "w");

    printf("Introduce datos del personaje: Nombre y edad\n");
    printf("-> ");
    scanf("%s %i", nombre, &edad);

    while(!feof(stdin)){
        fprintf(ptrDatosPersonajes, "%s %i\n", nombre, edad);
        printf("-> ");
        scanf("%s %i", nombre, &edad);
    }

    fclose(ptrDatosPersonajes);

    return 0;
}