

#include "pch.h"
#include <iostream>
#include "Nodo.h"

int main()
{
	Nodo * prueba = CrearLista(5);
	
	imprimir(&prueba);

	guardarLista(&prueba);
}

