#include "pch.h"
#include "Nodo.h"

void Insertar(Nodo** nodo, char * name)
{
	if (*nodo == 0)
		{
				Nodo * nuevo = new Nodo;
				nuevo->name = name;
				*nodo = nuevo;
				
		}

	else
	{
		Nodo * actual = *nodo;

		while (actual != 0)
		{


			int r = strcmp(actual->name, name);
			if (r > 0)
			{
				
				Nodo * nuevo = new Nodo;
					nuevo->name = name;
					

					if (actual->anterior == 0)
					{
						
						nuevo->Siguiente = *nodo;
						
						*nodo = nuevo;
						actual->anterior = *nodo;
						return;
					}
					else 
					{
						nuevo->Siguiente = actual;
						nuevo->anterior = actual->anterior;
						actual->anterior->Siguiente= nuevo;
						actual->anterior = nuevo;
						
						return;

					}
					
			}
			else {
				
				if (actual->Siguiente == 0)
					break;
				actual = actual->Siguiente;
			}
		}

		Nodo * nuevo = new Nodo;
		nuevo->name = name;
		actual->Siguiente = nuevo;
		nuevo->anterior = actual;
		
		return;

	}
}

Nodo * CrearLista(int tam)
{
	Nodo * inicial=0;
	
		
	for (int i = 0; i < tam ; i++)
	{
		char* a = new char;
		cout << "Ingrese el nombre: ";
		cin >> a;
		Insertar(&inicial,a);
		
	}

	return inicial;
}

void imprimir(Nodo** ini )
{
	Nodo * actual = (*ini);
	do {
		cout << actual->name << "\n";
	
		actual = actual->Siguiente;
	
	} while (actual != 0);
}

void guardarLista(Nodo** ini)
{
	ofstream archive("lista.dat", ios::app);

	if (!archive)
	{
		cout << "Error al abrir archivo";
	}
	Nodo * actual = *ini;
	do {
		archive << (actual)->name << " ";
		actual = actual->Siguiente;
	} while (actual != 0);
	archive.close();
}

// hacer un algoritmo de ordenamiento por seleccion;
//strcmp
