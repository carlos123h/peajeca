#include <stdio.h>


int main ()
{

    int ocupacion=0;
    int opcion=0;
    int tiempo=0;
    int hora=0;
    float precio=0.0;

    printf("Teclee el rango de ocupación de la vía:\n");
    printf("BAJA, hasta 10 coches.\n");
    printf("FLUIDA, entre 11 y 50 coches.\n");
    printf("SATURADA, entre 51 y 80 coches.\n");
    printf("MUY SATURADA, 81 coches o más.\n");

    scanf("%d" ,&ocupacion);

    if (ocupacion<0)
        {printf("¡ERROR!\n");
        return 0;}

    else if (ocupacion<=10) 
        {precio=2;
        printf("BAJA.\n");}
    
    else if (ocupacion<=50) 
        {precio=2+1;
        printf("FLUIDA.\n");}

    else if (ocupacion<=80) 
        {precio=2+1+1;
        printf("SATURADA.\n");}

    else if (ocupacion>80) 
        {precio=2+1+1+1;
        printf("MUY SATURADA.\n");}


   printf("El precio por ocupación de la vía es de %.2f €.\n",precio);

   

   printf("Elige el número de opción, si existe algun problema en la carretera:\n");
   printf("1-ACCIDENTE, 2-OBRAS, 3-CARRIL CORTADO, 4-CONTROL POLICIAL.\n");
   printf("Si no hay problemas pulsa cualquier otro número entero.\n");

   scanf("%d" ,&opcion);

   switch (opcion)
   {
    case 1:
        precio = precio +2;
        printf("¡ACCIDENTE! El precio es de %.2f €.\n", precio);
        break;

    case 2:
        precio = precio +2;
        printf("¡OBRAS! El precio es de %.2f €.\n", precio);
        break;
    
    case 3:
        precio = precio +2;
        printf("¡CARRIL CORTADO! El precio es de %.2f €.\n", precio);
        break;
    
    case 4:
        precio = precio +2;
        printf("¡CONTROL POLICIAL! El precio es de %.2f €.\n", precio);
        break;

    default:
        
        
        break;
    


   }

   printf("Elige el numero de opción correspondiente a las horas:\n");
   printf("1-Hora punta. MAÑANA (07:00-09:59).\n");
   printf("2-Hora valle. MATINAL (10:00-13:59).\n");
   printf("3-Hora valle. VESPERTINA (14:00-16:59).\n");
   printf("4-Hora punta. TARDE (17:00-19:59).\n");
   printf("5-Hora valle. NOCTURNA (20:00-06:59).\n");


   scanf("%d" ,&hora);

   switch (hora)
   {
    case 1:
        precio= precio +2;
        printf("¡HORA PUNTA! El precio es de %.2f €.\n", precio);
        break;
    
    case 2: 
        precio= precio +0.5;
        printf("¡HORA VALLE! El precio es de %.2f €.\n", precio);
        break;
    
    case 3:
        precio= precio +0.5;
        printf("¡HORA VALLE! El precio es de %.2f €.\n", precio);
        break;
    
    case 4:
        precio= precio +2;
        printf("¡HORA PUNTA! El precio es de %.2f €.\n", precio);
        break;
    
    case 5:
        precio= precio +0.5;
        printf("¡HORA VALLE! El precio es de %.2f €.\n", precio);
        break;
        
    
    default:
        printf("¡ERROR!\n");

        return 0;
        

   }

   printf("Inserte el numero de minutos que ha permanecido el coche en la vía:\n");

   scanf("%d" ,&tiempo);


   if (tiempo<=0){
        printf("¡ERROR!\n");
        return 0;}
    
    else if (tiempo<20)
    {precio= precio *1.15;
        printf("El precio total a cobrar es de %.2f €.\n", precio);}
    
    else if (tiempo>=20)
    
        {printf("El precio total a cobrar es de %.2f €.\n", precio);}





return 0;



}