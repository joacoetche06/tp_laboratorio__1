#include <stdio.h>
#include "Biblioteca.h"

int main()
{
    setbuf(stdout, NULL);
    //declaracion de variables
	int menu;
    int km;
    float precioAerolineas;
    float precioLatam;
    float debitoLatam;
    float creditoLatam;
    float precioBitcoinLatam;
    float precioUnitarioLatam;
    float debitoAerolineas;
    float creditoAerolineas;
    float precioBitcoinAerolineas;
    float precioUnitarioAerolineas;
    float diferenciaPrecios;
    int flag;
    int x;
    float y;
    float z;

    x = 0;
    y = 0;
    z = 0;

    //comienzo del programa
    do{
    menu = PedirNumeroMenu(x, y, z);//se inicializa el menu
    while(menu < 1 || menu > 6){
        printf("Ingrese un numero valido.");
        scanf("%d", &menu);
    }

    switch(menu){
        case 1:
            km = PedirKm();
            printf("\nLos km ingresados son: %d\n\n", km);
            flag = 1;//utilizacion de bandera para validar queno se pueda ingresar
                    //a una opcion sin haber ingresado una anterior que se necesite
            x = km;
        break;

        case 2:
        	if(flag == 1){
				precioAerolineas = PedirPrecios(1);
				printf("\nEl precio del vuelo en Aerolineas Argentinas es de: $%.2f\n", precioAerolineas);
				precioLatam = PedirPrecios(2);
				printf("\nEl precio del vuelo en Latam es de: $%.2f\n\n", precioLatam);
				flag = 2;
				y = precioAerolineas;
				z = precioLatam;
        	}
        	else{
        		printf("\nDebe ingresar primero los kilometros del vuelo.\n\n");
        	}
        break;

        case 3:
        	if(flag == 2){
				//FUNCIONES PARA CALCULAR COSTOS LATAM
				debitoLatam = CalcularDebitoLatam(precioLatam);
				creditoLatam = CalcularCreditoLatam(precioLatam);
				precioBitcoinLatam = CalcularBitcoinLatam(precioLatam);
				precioUnitarioLatam = CalcularUnitarioLatam(precioLatam, km);

				//FUNCIONES PARA CALCULAR COSTOS AEROLINEAS
				debitoAerolineas = CalcularDebitoAerolineas(precioAerolineas);
				creditoAerolineas = CalcularCreditoAerolineas(precioAerolineas);
				precioBitcoinAerolineas = CalcularBitcoinAerolineas(precioAerolineas);
				precioUnitarioAerolineas = CalcularUnitarioAerolineas(precioAerolineas, km);

				//FUNCION PARA DIFERENCIA DE PRECIO
				diferenciaPrecios = CalcularDiferenciaPrecios(precioAerolineas, precioLatam);
				printf("\nCostos calculados.\n\n");
				flag = 3;
        	}
        	else{
        		printf("\nDebe ingresar primero los costos del vuelo.\n\n");
        	}
        break;

        case 4:
        	if(flag == 3){
				printf("Latam: $%.2f\na)Precio con tarjeta de débito: $%.2f\nb) Precio con tarjeta de crédito: $%.2f\nc) Precio pagando con bitcoin: %.4f BTC\nd) Precio unitario: $%.2f por km\n\n", precioLatam, debitoLatam, creditoLatam, precioBitcoinLatam, precioUnitarioLatam);

				printf("Aerolíneas: $%.2f\na)Precio con tarjeta de débito: $%.2f\nb) Precio con tarjeta de crédito: $%.2f\nc) Precio pagando con bitcoin: %.4f BTC\nd) Precio unitario: $%.2f por km\n\n", precioAerolineas, debitoAerolineas, creditoAerolineas, precioBitcoinAerolineas, precioUnitarioAerolineas);

				printf("La diferencia de precio es de: $%.2f\n\n", diferenciaPrecios);
			}
        	else{
        		printf("\nDebe calcular primero los costos del vuelo.\n\n");
        	}
        break;

        case 5:
            CargaForzada();
        break;

        default:

        break;
    }
    }while(menu != 6);

    return 0;
}
