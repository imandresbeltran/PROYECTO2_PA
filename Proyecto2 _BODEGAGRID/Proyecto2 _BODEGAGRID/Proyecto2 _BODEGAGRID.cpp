#include "pch.h"
#include <exception>
using namespace std;
using namespace System;

int main(array<System::String ^> ^args)
{
	int opcion;
	
	try
	{
		do
		{
			Console::WriteLine("Elija una opcion:");
			Console::WriteLine("1. Crear Bahía.\n2. Ver Bahía.\n3. Ver inventario.\n4. Salir.");
			opcion = int::Parse(Console::ReadLine());
			switch (opcion)
			{
			case 1:Console::WriteLine("Haz seleccionado crear bahía. Presione enter para continuar.");
				Console::ReadKey();
				Console::Clear();
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
