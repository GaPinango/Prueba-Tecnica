#include "transacciones.h"
#define MAXPRECIO 12         //Digitos maximos que puede tener un monto
#define TRUE 1
#define FALSE 0

trans *head = NULL;
int counter = 0;

/**
void nuevaTransaccion(int cedula, int pin, char* monto): crea un nuevo bloque en la lista de transacciones.
Primero inicializa y invoca funciones de <time.h>, luego con esos datos y los datos de inicio de la funcion cosntruye
un nuevo objeto en la lista de transacciones.

@param {int} cedula Cedula ingresada previsamente por consola
@param {int} pin Cedula ingresada previsamente por consola
@param {char*} monto Cedula ingresada previsamente por consola
*/

void nuevaTransaccion(int cedula, int pin, char* monto){
    //inicializacion de funciones de <time.h> y creacion de variables temporales
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    char temp[12];
    int month=tm.tm_mon+1;
    int day=tm.tm_mday;
    int year=tm.tm_year+1900;
    trans *list = malloc(sizeof(trans));

    //Construccion de nuevo bloque en lista
    snprintf(temp,7,"%d:%d",tm.tm_hour,tm.tm_min);
    strcpy(list->hora, temp);
    snprintf(temp,10,"%d/%d/%d",day,month,year);
    strcpy(list->fecha, temp);
    snprintf(temp,12,"%s",monto);
    strcpy(list->monto, temp);
    list->id = cedula;
    list->pin = pin;
    list->nTransaciones = ++counter;
    list->status = TRUE;
    list->siguiente = head;
    head = list;
}

/**
void printList(trans*n): Recorre la lista de transacciones y muestra en consola datos de cada uno de los objetos de la lista.

@param trans*n Head de la lista de transacciones
*/

void printList(trans*n){
    while (n!=NULL){
        printf("\n");
        printf("Numero de Transaccion : %d\n",n->nTransaciones);
        printf("Monto: %s\n",n->monto);
        printf("Fecha : %s\n",n->fecha);
        printf("Hora : %s\n",n->hora);
        printf("\n");
        n = n->siguiente;
    }

}

/**
void compras(): Recibe los datos de una nueva compra y, si los datos estan correctos, los envia a la funcion nuevaTransaccion(...)

@param none
*/

void compras(){
    int cedula, pin;
    char monto [MAXPRECIO]={};
    printf("\n*****Nueva Compra*****\n\n");
    printf("Introduzca su Numero de Cedula:\n");
    scanf("%d", &cedula);
    printf("Introduzca su PIN:\n");
    scanf("%d", &pin);
    printf("Introduzca el valor de su compra:\n");
    scanf("%s", monto);
    if (!chequeoNumero(monto)){finalDeCompra(FALSE);}
    else {
        nuevaTransaccion(cedula, pin, monto);
        finalDeCompra(TRUE);
    }

}

/**
void unsigned char chequeoNumero(char n[]): Verifica que el string ingresado no es de tamaño mayor a MAXPRECIO y que solo contiene numeros

@param char n[] string a verificar
*/

unsigned char chequeoNumero(char n[]){
    unsigned int i = strlen(n);
    if (i<=MAXPRECIO){
        for (int x=0;x<i; x++){
            if (!isdigit(n[x])){;return FALSE;
            }
        }return TRUE;
    } else return FALSE;

}

/**
void listaTransacciones(): Muestra una lista de todas las transacciones realizadas

@param none
*/

void listaTransacciones(){
    int opcion=0;
    char i[2];
    printList(head);
    menuAnterior();
    while(opcion!=1){
        fgets(i,2,stdin);
        opcion = atoi(i);
    };fflush(stdin);
return;
}

/**
void detalleTransacciones(): Muestra a detalle los valores de una transaccion en especifico

@param none
*/

void detalleTransacciones(){
    trans *n=head;
    int i=0;
    printf("Ingrese numero de transaccion:   ");
    scanf("%d", &i);

    while (n != NULL && n->nTransaciones!=i){
            n = n->siguiente;
    }
    if (n == NULL){printf("No se encuenta el numero de transaccion\n");}
    else{
        printf("\n");
        printf("Numero de Transaccion : %d\n",n->nTransaciones);
        printf("Cedula : %d\n",n->id);
        printf("pin : %d\n",n->pin);
        printf("Monto: %s\n",n->monto);
        printf("Fecha : %s\n",n->fecha);
        printf("Hora : %s\n",n->hora);
        if(n->status)printf("Status : Activo\n");
        else printf("Status : Anulado\n");
        printf("\n");
    }
    int opcion=0;
    char ix[2];
    menuAnterior();
    while(opcion!=1){
        fgets(ix,2,stdin);
        opcion = atoi(ix);
    };fflush(stdin);
}

/**
void anularTransacciones(): Cambia el valor del flag status de una transaccion en especifico

@param none
*/

void anularTransacciones(){
    trans *n=head;
    int i=0;
    printf("Ingrese numero de transaccion:   ");
    scanf("%d", &i);
    while (n != NULL && n->nTransaciones!=i){
            n = n->siguiente;
    }
    if (n == NULL){printf("No se encuenta el numero de transaccion\n");}
    else{
        printf("\n");
        n->status = 0;
        printf("Transaccion anulada\n");
    }
    int opcion=0;
    char ix[2];
    menuAnterior();
    while(opcion!=1){
        fgets(ix,2,stdin);
        opcion = atoi(ix);
    };fflush(stdin);
}
