#include <stdio.h>
#include <sumar.h>
int main(int argc, char const* argv[])
{
int num1, num2;
printf("Calculadora En C\n");
printf("Ingrese el primer numero: ");
scanf("%d", &num1 )
printf("Ingrese el segundo numero: ");
scanf("%d", &num2);
printf("La suma es : %d",sumar(num1,num2));
return 0;    
}
