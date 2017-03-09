#include "chapter_7.h"
#include <cstring>
#include <iostream>

void fill_array_with_zeros(double tab[], int number)
{
	memset(tab, 0, sizeof(double) * number);
}

double harmonic (int x, int y)
{
	return 2.0 * x * y / (x + y);
}

void get_golf_result(double tab[], int number)
{
	using std::cout;
	using std::endl;
	using std::cin;
	int counter = 0;
	cout << "Type golf result " << counter << ": " << endl;
	while (counter < number && cin >> tab[counter++]) {
		cout << "Type golf result " << counter << ": " << endl;
	}
}

double calculate_average(double tab[], int number)
{
	double sum = 0;
	int i = 0;
	for (i = 0; i < number; i++) {
		sum += tab[i];
	}
	return sum / number;
}

void display_result(double tab[], int number, double average) {
	using std::cout;
	using std::endl;
	int i = 0;
	cout << "Results:" << endl;
	for (i = 0; i < number; i++) {
		cout << tab[i] << " ";
	}
	cout << endl;
	cout << "average: " << average << endl;
}

void dipslay_struct_fileds(pudlo arg)
{
	using std::cout;
	using std::endl;
	cout << "Struct fields:\n" << "producent: " << arg.producent << endl;
	cout << "wysokosc: " << arg.wysokosc << endl;
	cout << "szerokosc: " << arg.szerokosc << endl;
	cout << "dlugosc: " << arg.dlugosc << endl;
	cout << "objetosc: " << arg.objetosc << endl;
}

void calculate_capacity(pudlo * arg)
{
	arg->objetosc = arg->wysokosc * arg-> wysokosc * arg->dlugosc;
}