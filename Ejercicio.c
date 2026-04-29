#include "stdio.h"
#include "sumar.h"
#include "restar.h"
#include "multiplicar.h"
#include "dividir.h"
int main(int argc, char const* argv[])
{
int num1, num2;
printf("Calculadora En C\n");
printf("Ingrese el primer numero: ");
scanf("%d", &num1 );
printf("Ingrese el segundo numero: ");
scanf("%d", &num2);
printf("La suma es : %d\n",sumar(num1,num2));
printf("La resta es : %d\n", restar(num1, num2)); 
printf("La multiplicacion es : %d\n", multiplicar(num1, num2));
 printf("La division es : %d\n", dividir(num1, num2));
return 0;    
} 