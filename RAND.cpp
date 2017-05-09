//Ejemplo generar numeros aleatorios del 1 al 20 ahora con semilla
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib> //tiene la definicion de la funcion RAND (random)

int main ()
{
  int cant;
  int semilla;
  int n;
  printf("Cuantos números quiere generar?\n");
  scanf("%d",&cant);
  printf("Ingrese una semilla para rand()"); //nueva linea
  scanf("%d",&semilla);
  srand(semilla);
  for (int i=1 ;i<=cant;i++){
      n=1+rand()%20;
      printf("\n%d",n);
    }
  return 0 ;
}
