#ifndef TRABAJADOR_H
#define TRABAJADOR_H



class trabajador {
public:
	trabajador (string nomTrabajador, int cedula, int cantHorasMes, float precioPorHora, char categoria, int aniosantiguedad)
	
	this->nomTrabajador=nomTrabajador;
	this->cedula=cedula;
	this->cantHorasMes=cantHorasMes;
	this->precioPorHora=precioPorHora;
	this->categoria=categoria;
	this->aniosAntiguedad=aniosAntiguedad;
	
	
}

	~trabajador(){
}

void salarioBruto(int cantHorasMes, float precioPorHora{
	salarioBruto=cantHorasMes*precioPorHora
}





double salarioBruto(){
	double resultado;
	
	
	
	if (categoria == "e"){
		resultado = salarioBruto()*0.05;
	}
	
	if(categoria =="b"){
		resultado = salarioBruto()*0.03;
	}
	if(categoria =="r"){
		resultado = salarioBruto()*0.01;
	}
	if(categoria =="p"){
		resultado = salarioBruto();
	}
	return resultado;
}
	
	double horasExtra()[
	int horasExtra;
	double precioPorHora;
	int precioHoraExtra= precioPorHora+(precioPorHora*0.50);
	
	
	if (horasTrabajadas >48){
	horasExtra=horasTrabajadas-48;
	precioPorHora=horasExtra*precioPorHoraExtra;
	
	
	
private:
	
	string nomTrabajador;
	int cedula;
	char categoria;
	int cantHorasMes;
	int aniosantiguedad;
	float precioPorHora;
	int horasExtra;
	double salario;
	int hora;
	

	float horasExtra(){
		float salario=salarioBruto();
		if(horas>48){
			salario+=(cantHorasMes-48)*(hora+(hora*0.5))
				
				return salario;
		}
	}
	double categoria(){
		double saldo=salarioBr
	}
};

#endif
	
#include <iostream>
#include <vector>
	using namespace std;
	
	class Planilla {
	public:
		void incluirTrabajador(Trabajador trabajador) {
			trabajadores.push_back(trabajador);
		}
		
		void mostrarTrabajadores() {
			for (Trabajador t : trabajadores) {
				cout << t.toString() << endl;
			}
		}
		
		float promedioSalarioNeto() {
			float total = 0;
			for (Trabajador t : trabajadores) {
				total += t.salarioNeto();
			}
			return total / trabajadores.size();
		}
		
		Trabajador trabajadorConMayorSueldo() {
			Trabajador maxTrabajador = trabajadores[0];
			for (Trabajador t : trabajadores) {
				if (t.salarioNeto() > maxTrabajador.salarioNeto()) {
					maxTrabajador = t;
				}
			}
			return maxTrabajador;
		}
		
		int contarTrabajadoresExcelentes() {
			int count = 0;
			for (Trabajador t : trabajadores) {
				if (t.toString().find("Categoria: e") != string::npos) {
					count++;
				}
			}
			return count;
		}
		
	private:
			vector<Trabajador> trabajadores;
	};
	
	
	int main() {
		string nomTrabajador1, nomTrabajador2;
		int cedula1, cedula2, cantHorasMes1, cantHorasMes2, aniosAntiguedad1, aniosAntiguedad2;
		float precioPorHora1, precioPorHora2;
		char categoria1, categoria2;
		
		// Ingreso de datos para el primer trabajador
		cout << "Ingrese los datos del primer trabajador:\n";
		cout << "Nombre: ";
		cin >> nomTrabajador1;
		cout << "Cedula: ";
		cin >> cedula1;
		cout << "Cantidad de Horas por Mes: ";
		cin >> cantHorasMes1;
		cout << "Precio por Hora: ";
		cin >> precioPorHora1;
		cout << "Categoria (e/b/r/p): ";
		cin >> categoria1;
		cout << "Anios de Antiguedad: ";
		cin >> aniosAntiguedad1;
		
		Trabajador trabajador1(nomTrabajador1, cedula1, cantHorasMes1, precioPorHora1, categoria1, aniosAntiguedad1);
		
		// Ingreso de datos para el segundo trabajador
		cout << "Ingrese los datos del segundo trabajador:\n";
		cout << "Nombre: ";
		cin >> nomTrabajador2;
		cout << "Cedula: ";
		cin >> cedula2;
		cout << "Cantidad de Horas por Mes: ";
		cin >> cantHorasMes2;
		cout << "Precio por Hora: ";
		cin >> precioPorHora2;
		cout << "Categoria (e/b/r/p): ";
		cin >> categoria2;
		cout << "Anios de Antiguedad: ";
		cin >> aniosAntiguedad2;
		
		Trabajador trabajador2(nomTrabajador2, cedula2, cantHorasMes2, precioPorHora2, categoria2, aniosAntiguedad2);
		
		// Mostrar atributos del primer trabajador
		cout << "\nPrimer Trabajador:\n";
		cout << trabajador1.toString() << endl;
		
		// Prueba de métodos del primer trabajador
		cout << "Horas Extra: " << trabajador1.horasExtra() << endl;
		cout << "Salario Bruto: " << trabajador1.salarioBruto() << endl;
		cout << "Rebajos: " << trabajador1.rebajos() << endl;
		cout << "Incentivos: " << trabajador1.incentivos() << endl;
		cout << "Salario Neto: " << trabajador1.salarioNeto() << endl;
		
		// Modificar precio por hora de ambos trabajadores
		trabajador1.setPrecioPorHora(precioPorHora1 + 1000);
		trabajador2.setPrecioPorHora(precioPorHora2 + 1000);
		
		// Determinar el trabajador con mayor salario neto
		if (trabajador1.salarioNeto() > trabajador2.salarioNeto()) {
			cout << "\nEl primer trabajador tiene el mayor salario neto.\n";
		} else {
			cout << "\nEl segundo trabajador tiene el mayor salario neto.\n";
		}
		
		// Instanciar Planilla y agregar trabajadores
		Planilla planilla;
		planilla.incluirTrabajador(trabajador1);
		planilla.incluirTrabajador(trabajador2);
		
		// Mostrar todos los trabajadores
		cout << "\nTrabajadores en la Planilla:\n";
		planilla.mostrarTrabajadores();
		
		// Calcular y mostrar promedio de salarios netos
		cout << "Promedio de Salarios Netos: " << planilla.promedioSalarioNeto() << endl;
		
		// Determinar el trabajador con mayor sueldo
		Trabajador maxSueldo = planilla.trabajadorConMayorSueldo();
		cout << "Trabajador con Mayor Sueldo: " << maxSueldo.toString() << endl;
		
		// Contar trabajadores con categoría "excelente"
		cout << "Cantidad de Trabajadores con Categoría 'excelente': " << planilla.contarTrabajadoresExcelentes() << endl;
		
		return 0;
	}

	//Isaac Rodriguez - Brittany Barrantes - Cesar Mora

