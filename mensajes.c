#include <stdio.h>
#include <stdlib.h>
#include "mensajes.h"
#include "main.h"

/**
void imprimirMenuPrincipal(): Mensaje de menu principal
@param none
*/

void imprimirMenuPrincipal(){
    printf("\n*******************************!\n");
    printf("1) Realizar compras\n");
    printf("2) Transacciones\n");
    printf("3) Salir\n");
    printf("\n*******************************!\n\n");
    return;
}

/**
void imprimirMenuTransacciones(): Mensaje de menu de transacciones
@param none
*/

void imprimirMenuTransacciones(){
    printf("\n\n\nMenu de Transacciones\n");
    printf("*******************************!\n");
    printf("1) Ver Lista de Transacciones\n");
    printf("2) Ver Transaccion detallada\n");
    printf("3) Anular Transaccion\n");
    printf("4) Regresar al Menu anterior\n");
    printf("*******************************!\n\n");
    return;
}

/**
void errorDefault(): Mensaje de error
@param none
*/

void errorDefault(){
    system("cls");
    printf("Esta opcion no es valida\n");
    printf("Por favor intente de nuevo\n");
}

/**
void errorDefault(): Mensaje de final de compra
@param none
*/

void finalDeCompra(unsigned char i){
    system("cls");
    if(i==TRUE){
    printf("\n\n   Transaccion Registrada");
    printf("\n   Gracias por si compra\n");
    }else{
    printf("\n\n   Transaccion Fallida\n");
    printf("\n   Verifique los datos");
    printf("\n   e intente nuevamente\n\n\n");
    }
}

/**
void menuAnterior(): Mensaje de regreso a menu anterior
@param none
*/

void menuAnterior(){
    printf("\n\nPresione 1 para regresar al menu anterior ");
}

/**
void mensajeCerrar(): Mensaje de final
@param none
*/

void mensajeCerrar(){
    printf("Adios\n");
}

