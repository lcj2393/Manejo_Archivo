#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>

main()
{
    int cant;
    int semilla;
    int n, n1;
	FILE *fichero;

	fichero = fopen("BD_1MILLON.txt","w");
	if (fichero == NULL) {
		printf( "No se puede crear el fichero.\n" );
		exit( 1 );
	}else{
      printf("Cuantos números quiere generar?\n");
      scanf("%d",&cant);
      printf("Ingrese una semilla para rand()"); //nueva linea
      scanf("%d",&semilla);
      srand(semilla);
      for (int i=1 ;i<=cant;i++){
          n=1+rand()%20;
          fputc(n,fichero);
          printf("\n%d",n);
        }
	}

	if (fclose(fichero)!=0)
		printf( "Problemas al cerrar el fichero\n" );


	fichero = fopen("BD_1MILLON.txt","r");
	if (fichero == NULL){
            printf("\nError de apertura del archivo. \n\n");
        }else{
            printf("\nEl contenido del archivo de prueba es \n\n");
            while((n1 = fgetc(fichero)) != EOF)
	    {printf("%d\n",n1);}
        }
        fclose(fichero);

	if (fclose(fichero)!=0)
		printf( "Problemas al cerrar el fichero\n" );

    return 0;
}
