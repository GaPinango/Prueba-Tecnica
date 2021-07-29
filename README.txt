Prueba Técnica Gabriel Piñango

	A) Uso del programa:
-Al iniciar el programa imprimirá en consola un menu de tres opciones:

    1) Realizar compras
    2) Transacciones
    3) Salir

El programa espera que se ingrese un numero ("1", "2" o "3" dependiendo de la opción) para continuar con la ejecución del programa.
En caso de ingresar un caracter distinto a "1", "2" o "3", el programa enviará un mensaje de error.

	B) Realizar compras

- La opción "Realizar compras" es accesible ingresando el numero "1" en el menú principal.

- "Realizar comprar" solicitará al usuario Cédula, Pin y Monto. En caso de que todo esté correcto, procesará la compra y guardará la información. Caso contrario enviará un mensaje de error y se deberá repetir el proceso.

	C) Transacciones

- La opción "Transacciones" es accesible ingresando el numero "2" en el menu principal. Esta opción desplegará un menú con las siguientes opciones: 

    1) Ver Lista de Transacciones
    2) Ver Transaccion detallada
    3) Anular Transaccion
    4) Regresar al Menu anterior

El programa espera que se ingrese un numero ("1", "2", "3" o "4" dependiendo de la opción) para continuar con la ejecución del programa.
En caso de ingresar un caracter distinto a "1", "2", "3" o "4", el programa enviará un mensaje de error.

		C.1) Ver Lista de Transacciones

- La opción "Ver Lista de Transacciones" es accesible ingresando el numero "1" en el menú de transacciones. 

- "Ver Lista de Transacciones" mostrará en pantalla todas las transacciones registradas en el sistema. Cada transacción en pantalla mostrará: Número de transacción, Monto, Fecha y Hora de la operación.

- Al finalizar, el programa espera que se ingrese un "1" para regresar al menú anterior.

		C.2) Ver Transacción detallada

- La opción "Ver Transaccion detallada" es accesible ingresando el numero "2" en el menú de transacciones. 

- "Ver Transaccion detallada" solicitará al usuario ingresar el numero de transacción que desea ver. 

- Si el numero ingresado corresponde a una transacción registrada, se mostrarán en consola los siguientes datos de la transacción requerida: Número de Transaccion, Cedula, PIN, Monto, Fecha, Hora y Status.

- Si el numero ingresado no corresponde a una transacción registrada, el programa enviará un mensaje de error.

		C.3) Anular Transaccion

- La opción "Anular Transaccion" es accesible ingresando el numero "3" en el menu de transacciones.

- "Anular Transaccion" solicitará al usuario ingresar el numero de transacción que desea anular. 

- Si el numero ingresado corresponde a una transacción registrada, el programa cambiará el estado de la variable Status de la transacción de "Activo" a "Anulado".

- Si el numero ingresado no corresponde a una transacción registrada, el programa enviará un mensaje de error.

		C.4) Regresar al Menu anterior

- La opción "Regresar al Menu anterior" es accesible ingresando el numero "4" en el menu de transacciones y permite regresar al menú principal.

	D) Salir

- La opción "Salir" es accesible ingresando el numero "3" en el menu principal y permite finalizar la aplicación.




