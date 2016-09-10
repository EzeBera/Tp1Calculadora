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
    printf("4. Calcular la resta (A-B) \n");
    printf("5. Calcular la division (A/B)\n");
    printf("6. Calcular la multiplicacion (A*B) \n");
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

                                if (flagA==1 && flagB==1)
                {
                                printf("%f",suma(a,b));
                }
                else
                {
                    printf("Debe cargar ambos operandos.\n");
                }


                break;
            case 4:

                                if (flagA==1 && flagB==1)
                {
                        printf("%f",resta(a,b));
                }
                else
                {
                    printf("Debe cargar ambos operandos.\n");
                }




                break;
            case 5:
                                                if (flagA==1 && flagB==1 && b!=0)
                {
                        printf("%f",division(a,b));
                }
                else
                {
                    printf("Debe cargar ambos operandos y el segundo distinto de 0.\n");
                }
                break;
            case 6:                                if (flagA==1 && flagB==1)
                {
                        printf("%f",multiplicacion(a,b));
                }
                else
                {
                    printf("Debe cargar ambos operandos.\n");
                }
                break;
            case 7:                                if (flagA==1 && flagB==1 && (a>0 && b>0))
                {

                printf("%f",factorial(a));
                printf("%f",factorial(b));
                }
                else
                {
                    printf("Debe cargar ambos operandos con mayores a 0.\n");
                }
                break;
            case 8:
                                                if (flagA==1 && flagB==1)
                {

               all(a,b);
                }
                else
                {
                    printf("Debe cargar ambos operandos.\n");
                }

                break;
            case 9:
                break;
            default:
                printf("ingrese un valor entre 1 y 9 \n");

        }
         fflush(stdin);
system("pause");

    }while(seleccion!=9);

    return 1;

}
