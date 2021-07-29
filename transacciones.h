#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include "mensajes.h"
#include "main.h"

//Definicion de estructura de transacciones
typedef struct Transaciones {
    int id;
    int nTransaciones;
    int pin;
    char monto[12];
    char fecha[20];
    char hora[20];
    unsigned char status;
    struct Transaciones *siguiente;
}trans;

void printList(trans*n);
void nuevaTransaccion(int cedula, int pin, char* monto);
unsigned char chequeoNumero(char n[]);
void compras();
void listaTransacciones();
void detalleTransacciones();
void anularTransacciones();
