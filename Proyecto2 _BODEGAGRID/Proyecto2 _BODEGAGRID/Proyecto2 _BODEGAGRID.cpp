//IMPORTAMOS ENCABEZADOS Y LIBRERÍAS NECESARIAS PARA LLEVAR A CABO NUESTRO PROYECTO
#include "pch.h"
#include <exception>
#include "validaciones.h"
using namespace std;
using namespace System;

int main(array<System::String ^> ^args)
{
	//DECLARAMOS VARIABLES GLOBALES
	int opcion, columna;
	char row;
	String^ fila;
	String^ tipo_producto;
	double peso_maximo;

	validaciones verificaciones;
	
	try
	{
		do
		{
			Console::WriteLine("Elija una opcion:");
			Console::WriteLine("1. Crear Bahía.\n2. Ver Bahía.\n3. Ver inventario.\n4. Salir.");
			opcion = int::Parse(Console::ReadLine());
			switch (opcion)
			{
			case 1:
				Console::WriteLine("Haz seleccionado crear bahía. Presione enter para continuar.");
				Console::ReadKey();
				Console::Clear();

				llenarbahia:
				//SOLICITAMOS LA FILA
				Console::WriteLine("Ingrese la fila de la nueva bahía");
				fila = Console::ReadLine();

				/*EMPLEAREMOS EN CÓDIGO ASCII LA FILA PARA PROPIOS BENEFICIOS A NIVEL CÓDIGO, SIN EMBARGO
				SERA MOSTRADO EN FORMATO STRING AL USUARIO*/

				row = Char::Parse(fila);

				//SOLICITAMOS LA COLUMNA DE LA BAHÍA
				Console::WriteLine("Ingrese la columna de la nueva bahía");
				columna = int::Parse(Console::ReadLine());

				Console::WriteLine("Ingrese el tipo de producto y/o productos a almacenar");
				tipo_producto = Console::ReadLine();

				Console::WriteLine("Ingrese el peso máximo que soportará la bahía");
				peso_maximo = Double::Parse(Console::ReadLine());

				Console::WriteLine("Verificando los datos ingresados, espera un momento por favor...");
				Console::ReadKey();

				if (verificaciones.ValidarIngresoBahia(row, columna) == true && verificaciones.ValidarPeso(peso_maximo)
					== true) {
					Console::WriteLine("Los datos ingresados son: ");
					Console::WriteLine("Fila: " + fila);
					Console::WriteLine("Columna: " + columna);
					Console::WriteLine("Tipo/s de producto/s: " + tipo_producto);
					Console::WriteLine("Peso máximo de la bahía: " + peso_maximo);
					Console::Clear();
				}
				else goto llenarbahia;
				
				break;


			case 2:Console::WriteLine("Haz seleccionado ver bahía. Presione enter para continuar.");
				Console::ReadKey();
				Console::Clear();
				break;


			case 3:Console::WriteLine("Haz seleccionado ver inventario. Presione enter para continuar.");
				Console::ReadKey();
				Console::Clear();
				break;


			case 4:Console::WriteLine("Haz seleccionado salir. Presione enter para salir.");
				Console::ReadKey();
				Environment::Exit(0);
			default:
				break;
			}

		} while (true);
	}
	catch (const std::exception&)
	{
		
	}
	
}

