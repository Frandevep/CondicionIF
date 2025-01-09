#include <stdio.h>


int main()
{
    int edad=0;

    printf("Escriba su edad:");
    scanf("%d",&edad);

    if(edad>=18)// if sirve para dar la condicion de que si la edad ingresada es mayor o igual a 18 imprime "sos mayor de edad"
    {
        printf("Sos mayor de edad");
    }

    else// si la edad ingresada es menor que 18 imprime "sos menor de edad"
    {
        printf("Sos menor de edad");
    }
    return 0;
}
