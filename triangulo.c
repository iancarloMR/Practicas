#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	//Declaramos las variables a utilizar tanto para que el usuario digite los datos como para los resultados
	int ladoA,ladoB,ladoC;
	int altura;
	float resultadoArea;
	float resultadoPerimetro;
	//Declaramos la variable que nos va a dar pauta a el uso del Switch-case y el Do-while
	char selec;
	//Inicializamos el Do-while el cual se va a 
	do
	{
		printf("Ingrese que desea obtener:\n A)Area de el triangulo\nB)Perimetro de un triangulo\nC)Regresar al menu\n");
		scanf("%c",&selec);
		fflush(stdin);
		switch (selec)
		{
		case 'A':
			printf("Ingrese la base del triangulo: \n");
			scanf("%d",&ladoA);
			fflush(stdin);
			printf("Ingrese la altura del triangulo: \n");
			scanf("%d",&altura);
			fflush(stdin);
			resultadoArea=((ladoA*altura)/2);
			printf("El resultado es: %f\n", resultadoArea);

			break;
		case 'B':
			printf("Ingrese el lado A del triangulo: \n");
			scanf("%d",&ladoA);
			fflush(stdin);
			printf("Ingrese el lado B del triangulo: \n");
			scanf("%d",&ladoB);
			fflush(stdin);
			printf("Ingrese el lado C del triangulo: \n");
			scanf("%d",&ladoC);
			fflush(stdin);
			resultadoPerimetro=ladoA+ladoB+ladoC;
			printf("El resultado es: %f\n", resultadoPerimetro);
			break;
		case 'C':
			printf("Gracias por usar esta funcion :)\n");
			break;
		default:
			printf("\nLa opcion no es la correcta, vuelva a intentar\n");
			fflush(stdin);
			break;
		}
	}while (selec!='C');
	return 0;
}
