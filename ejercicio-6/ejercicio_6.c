#include <stdio.h>
#include <stdlib.h>
#include "tipo_elemento.h"
#include "listas.h"
#include "ejercicio_6.h"

void cargar_listas(Lista* L){
    int num;
    char c;

    while(scanf("%d",&num) == 1){
            TipoElemento X = te_crear(num);
            l_agregar(L, X);

    }
    printf("\nSOLO SE CARGAN A LAS LISTAS DATOS NÚMERICOS\n\n");
    while ((c = getchar()) != '\n' && c != EOF);
}

bool comparar(Lista* L2, Lista* L1){
    TipoElemento X;
    Iterador ite;
    ite = iterador(L2);

    while(hay_siguiente(ite)){
        X = siguiente(ite);
        if(!l_buscar(L1,X->clave)){
            printf("\nRESULTADO: L2 no es sublista de L1\n");
            return false;
        }
    }
    printf("\nRESULTADO: L2 es sublista de L1\n");
}

//COMPLEJIDAD ALGORITMICA

/*La función "comparar" presenta una complejidad algorítmica  de orden lineal, ya que
para buscar todos los elementos de L2 en L1 requiero recorrer ambas listas. Elrecorrido
se realiza con el  while en L2. Pero a su vez la funcion l_buscar por cada elemento de
L2 realiza una búsqueda en la L1. Por lo tanto O(n*m).*/

