#include <stdio.h>

int main () {
    char desicion='s';
    double numero1;
    double numero2;
    double resultado=0;
    char ope;
    while(desicion=='s'){
        printf("\t\n PROGRAMA PARA REALIZAR OPERACIONES BASICAS\n");
        printf("Escriba algun simbolo +,-,*,/ para suma,resta,multiplicacion,division, respectivamente: ");  
        scanf("%c", &ope);
        printf("\nLa operacion seleccionada es: %c \n", ope);
        printf("Introduzca el primer numero: ");
        scanf("%lf",&numero1);
        printf("Introduzca el segundo numero: ");
        scanf("%lf",&numero2);

        if(ope=='+'){
            resultado=numero1+numero2;
        }else if(ope=='-'){
            resultado=numero1-numero2;
        }else if(ope=='*'){
            resultado=numero1*numero2;
        }else if(ope=='/'){
            if(numero2==0){
                printf("Division por cero invalida\n");
            }else{
                resultado=numero1/numero2;
            }
        }else{
            printf("Operacion introducida no valida\n");
        }
        printf("El resultado es: %lf \n",resultado);
        printf("Escriba s si desea realizar otra operacion: ");
        scanf("%s",&desicion);
    }
    
    return 0;
}