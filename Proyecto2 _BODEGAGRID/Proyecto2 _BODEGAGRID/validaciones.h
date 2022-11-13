#pragma once
class validaciones
{
public: bool ValidarPeso(double peso) {
		bool status = false;

		if (peso > 0) status = true;
		else status = false;

		return status;
	}

public: bool ValidarIngresoBahia(char fila, int columna) {
		bool ingreso = false;

		if (fila > 0 && columna > 0) ingreso = true;
		else ingreso = false;

		return ingreso;
	}
};

