#include <stdio.h>
//Bibliotecas

/// @brief FUNCION PARA PEDIR EL NUMERO DEL MENU QUE EL USUARIO QUIERA
///
/// @param km
/// @param precioAerolineas
/// @param precioLatam
/// @return
int PedirNumeroMenu(int km, float precioAerolineas, float precioLatam);


/// @brief FUNCION PARA PEDIR LOS KILOMETROS DEL VUELO
///
/// @return
int PedirKm();

/// @brief FUNCION PARA PEDIR LOS PRECIOS DE LAS AEROLINEAS
///
///
/// @param numero
/// @return
float PedirPrecios(int numero);

//FUNCIONES PARA CALCULAR COSTOS LATAM
/// @brief funcion para calcular el costo de latam con tarjeta de debito
///
/// @param precioLatam
/// @return
float CalcularDebitoLatam(float precioLatam);

/// @brief funcion para calcular el costo de latam con tarjeta de credito
///
/// @param precioLatam
/// @return
float CalcularCreditoLatam(float precioLatam);

/// @brief funcion para calcular el costo de latam con Bitcoin
///
/// @param precioLatam
/// @return
float CalcularBitcoinLatam(float precioLatam);

/// @brief funcion para calcular el costo de latam por kilometro
///
/// @param precioLatam
/// @param km
/// @return
float CalcularUnitarioLatam(float precioLatam, int km);

/// @brief funcion para calcular el costo de aerolineas con tarjeta de debito
///
/// @param precioAerolineas
/// @return
float CalcularDebitoAerolineas(float precioAerolineas);

/// @brief funcion para calcular el costo de aerolineas con tarjeta de credito
///
/// @param precioAerolineas
/// @return
float CalcularCreditoAerolineas(float precioAerolineas);

/// @brief funcion para calcular el costo de aerolineas con Bitcoin
///
/// @param precioAerolineas
/// @return

/// @brief funcion para calcular el costo de aerolineas con Bitcoin
///
/// @param precioAerolineas
/// @return
float CalcularBitcoinAerolineas(float precioAerolineas);

/// @brief funcion para calcular el costo de aerolineas por kilometro
///
/// @param precioAerolineas
/// @param km
/// @return
float CalcularUnitarioAerolineas(float precioAerolineas, int km);


/// @brief FUNCION PARA CALCULAR DIFERENCIA DE PRECIOS ENTRE AEROLINEAS
///
/// @param precioAerolineas
/// @param precioLatam
/// @return
float CalcularDiferenciaPrecios(float precioAerolineas, float precioLatam);

/// @brief FUNCION PARA CARGAR FORZADA DE DATOS
///
void CargaForzada();
