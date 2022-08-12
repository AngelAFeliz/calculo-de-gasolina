#include <stdio.h>
#include <stdlib.h>
int main() 
{
  float precioGasolina = 0.0 ;
  float paso = 0.0;
  float promedioCarretera = 0.0;
  float promedioCiudad = 0.0;
  float promedio = 0.0;
  int  ID = 0;
  char control = 1;
  const float litro2galon = 3.78;
  int salir = 0;
  while (salir <= 0)
  {

  
  printf ("calculo Gasolina Europeo L/100km a Dominicano km/Galon\n");

  if (precioGasolina == 0.0)
    {
      printf ("Cual es el precio de la gasolina x galon: ") ;
      scanf ("%f",&precioGasolina); 
    }
 control = 1;
  while (control)
    { 
       printf ( "\n Cuantos km x  cada Galon consume en la  ciudad: ");
      scanf("%f",&promedioCiudad);

       printf ( "\n Cuantos km x cada Galon consume en la carretera: ");
       scanf("%f",&promedioCarretera);

       printf ( "\n Por favor sumisnistrar paso del detalle a imprimir: ");
       scanf("%f",&paso);

       if (promedioCiudad < promedioCarretera)
         { 
          printf("\n Error El promedio carretera debe ser mayor al de ciudad:"); 

           }else if (paso < 0.1 || paso > 2)
            { 
         printf("\n Error El valor del paso es o muy grande o muy pequeño 0.1 − 2");

       }else 
       {
        control = 0; 
         }
         }
       
  for (promedio = promedioCiudad; promedio >= promedioCarretera;promedio = promedio - paso)
    {
    float kmxgal = 0;
    float costokm = 0;
    kmxgal = 100 / (promedio / litro2galon);
    costokm = precioGasolina / kmxgal;
    ID ++; 
      printf ("\n|ID: %d| promedio L/100km: %f | costo km/galon: %f | costo km: %f",ID, promedio,kmxgal,costokm );
      }
    printf("\nDesea hacer otro calculo?");
    
    printf("\nSi desea continuar seleccione 1");
    
    printf("\nSi desea salir seleccione 2\n");
   scanf("%d",&salir);
    
  
    if (salir == 2){
      printf ("\n Fin del programa" );
      break;
      }
}
  return 0;
}