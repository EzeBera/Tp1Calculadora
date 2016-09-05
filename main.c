#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "funciones.c"
int main()
{ float a;
bool flagA=0;
bool flagB=0;
float b;
int seleccion=1;

    do{
            system("cls");

            if(!flagA){
    printf("1. Ingresar 1er operando (A=x) \n");}
    else{
    printf("1. Ingresar 1er operando (A=%f) \n",a);}

    if(!flagB){
    printf("2. Ingresar 2do operando (B=y) \n");}
    else{
    printf("2. Ingresar 2do operando (B=%f) \n",b);}
    printf("3. Calcular la suma (A+B) \n");
    printf("4. Calcular la resta (A-B) \n ");
    printf("5. Calcular la division (A/B)\n ");
    printf("6. Calcular la multiplicacion (A*B) \n ");
    printf("7. Calcular el factorial (A!) \n");
    printf("8. Calcular todas las operaciones \n");
    printf("9. Salir \n");
    scanf("%d",&seleccion);


switch(seleccion)
        {
            case 1:
                    scanf("%f",&a);
                    flagA=1;
                break;
            case 2:
                    scanf("%f",&b);
                    flagB=1;
                break;
            case 3:
                printf("%f",suma(a,b));
                break;
            case 4:
                printf("%f",resta(a,b));
                break;
            case 5:
                printf("%f",division(a,b));
                break;
            case 6:
                printf("%f",multiplicacion(a,b));
                break;
            case 7:
                printf("%f",factorial(a));
                printf("%f",factorial(b));
                break;
            case 8:
                printf("%f",all(a,b));
                break;
            case 9:
                break;
            default:
                printf("ingrese un valor valido");

        }
         fflush(stdin);
        getchar();

    }while(seleccion!='9');

    return 1;

}
