#pragma once
#include<iostream>
#include<fstream>
using namespace std;
struct Nodo
{

	 char * name;
	Nodo* Siguiente;
	Nodo* anterior;

	Nodo()
	{
		name=0;
		Siguiente = nullptr;
		anterior = nullptr;
	}
};

void Insertar(Nodo **,  char * );
Nodo * CrearLista(int);
void imprimir(Nodo**);
void guardarLista(Nodo**,char *);


