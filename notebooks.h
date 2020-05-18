#ifndef NOTEBOOKS_H_INCLUDED
#define NOTEBOOKS_H_INCLUDED
typedef struct
{
    int id;
    char procesador;
    char marca;
    int precio;

}eNotebook;


#endif // NOTEBOOKS_H_INCLUDED
void OrdenarArrayMarcaYPrecio(eNotebook vector[], int tam);
