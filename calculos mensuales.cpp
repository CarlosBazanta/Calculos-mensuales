#include <stdio.h>
#include <conio.h>

int main ()
{

char nom[50];
int edad;
float monto, monto2, resultado, resultado2, resultado3;

printf("Ingrese su nombre\n");
scanf("%s",nom);
printf("Ingrese su edad\n");
scanf("%i",&edad);

printf("Ingrese su monto de asignaciones semanales \n");
scanf("%f",&monto);
printf("Ingrese su monto de deducciones mensuales \n");
scanf("%f",&monto2);

resultado=monto2-monto;

resultado2=resultado/2;

resultado3=( resultado*12)/52;


printf("El empleado %s de edad %i tiene un sueldo neto es de %.2f\n",nom,edad,resultado);

printf("El empleado %s de edad %i tiene un sueldo neto mensual de %.2f\n",nom,edad,resultado2);

printf("El empleado %s de edad %i tiene un sueldo neto semanal de %.2f\n",nom,edad,resultado3);


getch ();
}

