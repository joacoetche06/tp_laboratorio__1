#include "Biblioteca.h"


//FUNCION PARA PEDIR EL NUMERO DEL MENU QUE EL USUARIO QUIERA

int PedirNumeroMenu(int km, float precioAerolineas, float precioLatam){
    int menu;

    printf("Ingrese 1 para cargar los kilómetros del vuelo: (km: %d);\nIngrese 2 para cargar el precio por aerolinea\n-Precio vuelo Aerolineas: $%.2f\n-Precio vuelo Latam: $%.2f\nIngrese 3 para calcular todos los costos;\nIngrese 4 para informar los resultados;\nIngrese 5 para la carga forzada de datos;\nIngrese 6 para salir.\n", km, precioAerolineas, precioLatam);
    scanf("%d", &menu);

    return menu;
}


//FUNCION PARA PEDIR LOS KILOMETROS DEL VUELO

int PedirKm()
{
	int numero;

	printf("\nIngrese los km totales del vuelo: ");
	scanf("%d", &numero);

	return numero;
}


//FUNCION PARA PEDIR LOS PRECIOS DE LAS AEROLINEAS

float PedirPrecios(int numero)
{
	float precio;
    if(numero == 1){
	printf("Ingrese el precio del vuelo en Aerolineas Argentinas: ");
	scanf("%f", &precio);
    }
    else{
        printf("Ingrese el precio del vuelo en Latam: ");
	    scanf("%f", &precio);
    }
	return precio;
}


//FUNCIONES PARA CALCULAR COSTOS LATAM

float CalcularDebitoLatam(float precioLatam){
    float debitoLatam;

    debitoLatam = precioLatam * 0.9;

    return debitoLatam;
}

float CalcularCreditoLatam(float precioLatam){
    float creditoLatam;

    creditoLatam = precioLatam * 1.25;

    return creditoLatam;
}

float CalcularBitcoinLatam(float precioLatam){
    float precioBitcoinLatam;
    float unBitcoin;
    unBitcoin = 4606954.55;

    precioBitcoinLatam = precioLatam / unBitcoin;

    return precioBitcoinLatam;
}

float CalcularUnitarioLatam(float precioLatam, int km){
    float precioUnitarioLatam;

    precioUnitarioLatam = precioLatam / km;


    return precioUnitarioLatam;
}


//FUNCIONES PARA CALCULAR COSTOS AEROLINEAS

float CalcularDebitoAerolineas(float precioAerolineas){
    float debitoAerolineas;

    debitoAerolineas = precioAerolineas * 0.9;

    return debitoAerolineas;
}

float CalcularCreditoAerolineas(float precioAerolineas){
    float creditoAerolineas;

    creditoAerolineas = precioAerolineas * 1.25;

    return creditoAerolineas;
}

float CalcularBitcoinAerolineas(float precioAerolineas){
    float precioBitcoinAerolineas;
    float unBitcoin;
    unBitcoin = 4606954.55;

    precioBitcoinAerolineas = precioAerolineas / unBitcoin;

    return precioBitcoinAerolineas;
}

float CalcularUnitarioAerolineas(float precioAerolineas, int km){
    float precioUnitarioAerolineas;

    precioUnitarioAerolineas = precioAerolineas / km;


    return precioUnitarioAerolineas;
}


//FUNCION PARA DIFERENCIA DE PRECIO

float CalcularDiferenciaPrecios(float precioAerolineas, float precioLatam){
    float diferenciaPrecios;

    if(precioLatam > precioAerolineas){
        diferenciaPrecios = precioLatam - precioAerolineas;
    }
    else{
        diferenciaPrecios = precioAerolineas - precioLatam;
    }

    return diferenciaPrecios;
}


//FUNCION PARA LA CARGA FORZADA DE DATOS

void CargaForzada(){
    int kmHardcodeados;
    int precioAerolineasHardcodeados;
    int precioLatamHardcodeados;
    float debitoLatam;
    float creditoLatam;
    float precioBitcoinLatam;
    float precioUnitarioLatam;
    float debitoAerolineas;
    float creditoAerolineas;
    float precioBitcoinAerolineas;
    float precioUnitarioAerolineas;
    float diferenciaPrecios;
    float unBitcoin;

    unBitcoin = 4606954.55;
    kmHardcodeados = 7090;
    precioLatamHardcodeados = 162965;
    precioAerolineasHardcodeados = 159339 ;

    debitoLatam = precioLatamHardcodeados * 0.9;
    creditoLatam = precioLatamHardcodeados * 1.25;
    precioBitcoinLatam = precioLatamHardcodeados / unBitcoin;
    precioUnitarioLatam = precioLatamHardcodeados / kmHardcodeados;

    debitoAerolineas = precioAerolineasHardcodeados * 0.9;
    creditoAerolineas = precioAerolineasHardcodeados * 1.25;
    precioBitcoinAerolineas = precioAerolineasHardcodeados / unBitcoin;
    precioUnitarioAerolineas = precioAerolineasHardcodeados / kmHardcodeados;

    if(precioLatamHardcodeados > precioAerolineasHardcodeados){
        diferenciaPrecios = precioLatamHardcodeados - precioAerolineasHardcodeados;
    }
    else{
        diferenciaPrecios = precioAerolineasHardcodeados - precioLatamHardcodeados;
    }

    printf("KMs Ingresados: %d km", kmHardcodeados);

    printf("\nLatam: $%.2d\na) Precio con tarjeta de débito: $%.2f\nb) Precio con tarjeta de crédito: $%.2f\nc) Precio pagando con bitcoin: %f BTC\nd) Precio unitario: $%.2f\n\n", precioLatamHardcodeados, debitoLatam, creditoLatam, precioBitcoinLatam, precioUnitarioLatam);

    printf("Aerolíneas: $%.2d\na)Precio con tarjeta de débito: $%.2f\nb) Precio con tarjeta de crédito: $%.2f\nc) Precio pagando con bitcoin: %f BTC\nd) Precio unitario: $%.2f\n\n", precioAerolineasHardcodeados, debitoAerolineas, creditoAerolineas, precioBitcoinAerolineas, precioUnitarioAerolineas);

    printf("La diferencia de precio es de: $%.2f\n\n", diferenciaPrecios);
}
