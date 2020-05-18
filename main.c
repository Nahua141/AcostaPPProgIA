#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "notebooks.h"
float aplicarDescuento(float precio);
int main()
{
    float precioCampera=100;
    float precioConDescuento;
    precioConDescuento=aplicarDescuento(precioCampera);
    printf("%.2f", precioConDescuento);

    return 0;
}
float aplicarDescuento(float precio)
{
   float precioFinal=0;
   if(precio != 0)
   {
       precioFinal=precio-(float)(precio*5/100);
   }

   return precioFinal;
}
