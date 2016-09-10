
    float suma(float a, float b){

    return a+b;

    }

        float resta(float a, float b){

    return a-b;

    }

        float division(float a, float b){

    return a/b;

    }

        float multiplicacion(float a, float b){

    return a*b;

    }

        float factorial(float n){
    float factorial=1;
    int i;

    if (n < 0){
        printf("Error, Factorial de numero negativo no existe");
        return -1;

    }else
    {
        for(i=1; i<=n; i++)
        {
            factorial *= i;
        }
        printf("Factorial de %f = %f", n, factorial);
        return factorial;
    }

    }



        void all (float a, float b){

    printf("suma = %f \n resta = %f \n division = %f \n multiplicacion = %f \n ",
           suma(a,b), resta(a,b), division(a,b), multiplicacion(a,b) );

           factorial(a);
           printf("\n");
            factorial(b);
           printf("\n");

    }
