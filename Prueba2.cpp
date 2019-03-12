

#include "pch.h"
#include <iostream>
#include "Nodo.h"

int main()
{
	Nodo * prueba = CrearLista(2);
				
	imprimir(&prueba);

	

	cout << "\n Ingrese el nombre del archivo (Incluya la extension): ";
	char * nombreArchivo = new char[25];
	cin >> nombreArchivo;
	guardarLista(&prueba,nombreArchivo);
}

