// TiposDeDados.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <climits>
using namespace std;

int main()
{
	cout << "Estrutura de Dados - Fatec (2026/2)" << endl;

	
	cout << "Tipos Numericos\n";
	cout << "===============\n";
	
	int i = 10;
	short s = 18;
	long l = 200000;
	float f = 1.97F;
	double  d = 4.73;
	cout << "Inteiros\n";
	cout << "  int i = " << i << " ocupa " << sizeof(i) << " bytes\n";
	cout << "short s = " << s << " ocupa " << sizeof(s) << " bytes\n";
	cout << "long  l = " << l << " ocupa " << sizeof(l) << " bytes\n\n";
	cout << "Ponto Flutuante (Reais)\n";
	cout << " float f = " << f << " ocupa " << sizeof(f) << " bytes\n";
	cout << "double d = " << d << " ocupa " << sizeof(d) << " bytes\n";

	cout << "\nTipo logico (boolean)\n";
	cout << "====================\n";
	bool flFacil = false;
	cout << "bool flFacil = " << flFacil << " ocupa " << sizeof(flFacil) << " bytes\n";

	cout << "\nTipo caracter\n";
	cout << "=============\n";
	char letra = 'Z';
	cout << "char letra = " << letra << " ocupa " << sizeof(letra) << " bytes\n";

	cout << "\nTipo string\n";
	cout << "===========\n";
	string texto = "Estrutura de Dados vai ser moleza!";
	cout << "string texto = \"" << texto << "\" ocupa " << sizeof(texto) << " bytes\n";

	cout << "\nPonteiros\n";
	cout << "===========\n";
	string* ponteiro = &texto;
	cout << "Para a variavel 'texto' do exemplo acima: string* ponteiro = &texto\nO endereco da memoria onde o valor foi armazenado (ponteiro)  = " << ponteiro << endl;
	cout << "O valor armazenado no local indicado pelo ponteiro e *ponteiro = \"" << *ponteiro << "\"";

	cout << endl << endl;

	cout << "Qualquer tecla para continuar...";
	system("pause"); // somente no Windows
	system("cls");

	cout << "Entrada de Dados" << endl;
	cout << "================" << endl;
	string nome = "";
	int idade = 0;
	int dias = 0;
	int horas = 0;
	int minutos = 0;

	cout << "Digite seu nome: ";
	cin >> nome;
	cout << "Digite sua idade: ";
	cin >> idade;
	dias = idade * 365;
	horas = dias * 24;
	minutos = horas  * 60;
	cout << "Sua idade em dias e: " << dias << endl;
	cout << "Sua idade em horas e: " << horas << endl;
	cout << "Sua idade em minutos e: " << minutos << endl;

	cout << "int  max = " << static_cast<long long>(INT_MAX) + 1 << "\n";
	cout << "int  min = " << static_cast<long long>(INT_MIN) - 1 << "\n";
	cout << "short max = " << SHRT_MAX + 11 << "\n";


	//double resultado = 0;
	double tempc = 28;
	double tempf = tempc * 1.80 + 32;
	double tempk = tempc + 273.15;
	cout << "28 graus celsius em Fahrenheit: " << tempf << "\n";
	cout << "28 graus celsius em Kelvin: " << tempk << "\n";

	long seg = 0;
	cout << "Digite uma quantidade em segundos: ";
	cin >> seg;
	long segpmin = 60;
	long segphr = 3600;
	long segpdia = 86400;

	long diasSegundos = seg / segpdia;
	long restodia = seg % segpdia;

	long horasSegundos = restodia / segphr;
	long restohr = restodia % segphr;

	long min = restohr / segpmin;
	long segrestantes = restohr % segpmin;

	cout << "dias: " << diasSegundos << "\n";
	cout << "horas: " << horasSegundos << "\n";
	cout << "minutos: " << min << "\n";

	int varTop = 44;
	int* pvarTop = &varTop;
	cout << "Endereco da variavel Top: " << pvarTop << "\n";
	cout << "Valor da variavel Top: " << *pvarTop << "\n";
	cout << "novo valor da variavel Top: " << 2 * *pvarTop << "\n";

	cout << "Qualquer tecla para sair...";
	system("pause"); // somente no Windows


}


