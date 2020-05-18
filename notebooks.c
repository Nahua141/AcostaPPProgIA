#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "notebooks.h"
void OrdenarArrayMarcaYPrecio(eNotebook vector[], int tam)
{
    eNotebook auxVector;

    for(int i=0; i<tam-1; i++)
    {
        for(int j=i+1; j<tam; j++)
        {
            if(strcmp(vector[i].marca, vector[j].marca) > strcmp(vector[j].marca, vector[i].marca))
            {
                auxVector = vector[i];
                vector[i] = vector[j];
                vector[j] = auxVector;
            }
            else if(strcmp(vector[i].marca, vector[j].marca) == strcmp(vector[j].marca, vector[i].marca) && (vector[i].precio > vector[j].precio))
            {
                auxVector = vector[i];
                vector[i] = vector[j];
                vector[j] = auxVector;
            }
        }
    }
}
