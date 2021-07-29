/////Prueba Tecnica Gabriel Piñango

#include "mensajes.h"
#include "transacciones.h"
#include "main.h"



/**
menuTransacciones(): funcion que genera el menu para gestionar las opciones de transacciones.
El usuario puede escoger entre cuatro opciones mostradas en pantalla. Dependiedo de la eleccion accedera al menu indicado
El menu recibe variables de entrada en forma de caracteres y los trasforma en int para operar en el switch
Salir del menu redirije al menu en main(void);
@param none
*/

void menuTransacciones(){
    unsigned int opcion;
    char i[2];
    do{
        system("cls");
        imprimirMenuTransacciones();
        fgets(i,2,stdin);
        opcion = atoi(i);
        switch (opcion){
        case 1:
            fflush(stdin);
            listaTransacciones();
            break;
        case 2:
            fflush(stdin);
            detalleTransacciones();
            break;
        case 3:
            fflush(stdin);
            anularTransacciones();
            break;
        case 4:
            break;
        default:
            fflush(stdin);
            errorDefault();
            break;
        } fflush(stdin);
    }while(opcion!=4);
    system("cls");
    return;
}


/**
main(void): funcion que inicializa el programa. Contiene el menu para gestionar las opciones de principales.
El usuario puede escoger entre tres opciones mostradas en pantalla. Dependiedo de la eleccion accedera al menu indicado
El menu recibe variables de entrada en forma de caracteres y los trasforma en int para operar en el switch
Salir del menu finaliza el programa;
@param none
*/

int main(void)
{
    int opcion;
    char i[2];
    do {
        imprimirMenuPrincipal();
        fgets(i,2,stdin);
        opcion = atoi(i);
        switch (opcion){
        case 1:
            fflush(stdin);
            system("cls");
            imprimirMenuPrincipal();
            compras();
            break;
        case 2:
            fflush(stdin);
            menuTransacciones();
            break;
        case 3:
            break;
        default:
            fflush(stdin);
            errorDefault();
            break;
        }fflush(stdin);
    }while (opcion!=3);
    mensajeCerrar();
    return 0;
}

