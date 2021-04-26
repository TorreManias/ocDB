#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *ptrDatosPersonajes;
    char nombre[15];
    int edad;

    ptrDatosPersonajes = fopen("Mis personajes.dat", "r");

    printf("%-13s%-10s", "NOMBRE", "EDAD\n");
    fscanf(ptrDatosPersonajes, "%s %i", nombre, &edad);

    while(!feof(ptrDatosPersonajes)){
        printf("%-13s%-10i\n", nombre, edad);
        fscanf(ptrDatosPersonajes, "%s %i", nombre, &edad);
    }

    fclose(ptrDatosPersonajes);
    
    getchar();

    return 0;
}