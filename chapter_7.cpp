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

double calculate_probability(unsigned numbers, unsigned picks)
{
	double result = 1.0;
	unsigned n;
	unsigned p;
	for (n = numbers, p = picks; p > 0; n--, p--) {
		result = result * n / p;
	}
	return result;
}

int factorial(int number)
{
	if (number == 0) {
		return 1;
	} else if (number > 0) {
		return number * factorial(number - 1);
	}
}

int fill_array(double tab[], int number)
{
	using std::cout;
	using std::cin;
	int i;
	for (i = 0; i < number; i++) {
		cout << "Type number: ";
		if (!(cin >> tab[i])) {
			break;
		}
	}
	return i;
}

void show_array(double tab[], int number)
{
	using std::cout;
	using std::endl;
	for (int i = 0; i < number; i++) {
		cout << "Element " << i + 1 << " has value " << tab[i] << endl; 
	}
}

void reverse_array(double tab[], int number)
{
	double tmp;
	for(int i = 0; i < (number / 2); i++) {
		tmp = tab[i];
		tab[i] = tab[number - i - 1];
		tab[number - i - 1] = tmp;
	}
}

double * fill_array(double * begin, double * end)
{
	using std::cout;
	using std::cin;
	double * current;
	for (current = begin; current < end; current++) {
		cout << "Type number: ";
		if (!(cin >> *current)) {
			break;
		}
	}
	return current;
}

void show_array(double * begin, double * end)
{
	using std::cout;
	using std::endl;
	int counter = 1;
	for (double * current = begin; current < end; current++, counter++) {
		cout << "Element " << counter << " has value " << *current << endl; 
	}
}

void reverse_array(double * begin, double * end)
{
	double tmp;
	int counter = 0;
	for(double * current = begin; counter < ((end - begin) / 2); current++, counter++) {
		tmp = *current;
		*current = *(end - 1 - counter);
		*(end - 1 - counter) = tmp;
	}
}

void fill_array(const char * seasons[], double expenses[], int size)
{
	using std::cout;
	using std::endl;
	using std::cin;
	for (int i = 0; i < size; i++) {
		cout << "Type expenses for period: " << seasons[i] << endl;
		cin >> expenses[i];
	}
}

void show_array(const char * seasons[], double expenses[], int size)
{
	using std::cout;
	using std::cin;
	using std::endl;
	double total = 0.0;
	cout << "Expenses: " << endl;
	for (int i = 0; i < size; i++) {
		cout << seasons[i] << ": " << expenses[i] << "zł" << endl;
		total += expenses[i];
	}
	cout << "Total year expenses: " << total << "zł" << endl;
}

void fill_array(const char * seasons[], Expenses & exp, int size)
{
	using std::cout;
	using std::endl;
	using std::cin;
	for (int i = 0; i < size; i++) {
		cout << "Type expenses for period: " << seasons[i] << endl;
		cin >> exp.expenses[i];
	}
}
void show_array(const char * seasons[], Expenses exp, int size)
{
	using std::cout;
	using std::cin;
	using std::endl;
	double total = 0.0;
	cout << "Expenses: " << endl;
	for (int i = 0; i < size; i++) {
		cout << seasons[i] << ": " << exp.expenses[i] << "zł" << endl;
		total += exp.expenses[i];
	}
	cout << "Total year expenses: " << total << "zł" << endl;
}

int getinfo(student pa[], int n)
{
	using std::cout;
	using std::cin;
	char name[256];
	int i;
	for (i = 0; i < n; i++) {
		cout << "Type fullname: ";
		cin.getline(pa[i].fullname, SLEN);
		if (strcmp(pa[i].fullname, "") == 0) {
			break;
		}
		cout << "Type hobby: ";
		cin.getline(pa[i].hobby, SLEN);
		cout << "Type ooplevel: ";
		cin >> pa[i].ooplevel;
		while (cin.get() != '\n') {
			continue;
		}
	}
	return i;
}

void display1(student st)
{
	using std::cout;
	using std::endl;
	cout << "Student (passed by copy):" << endl;
	cout << "\tfullname " << st.fullname << endl;
	cout << "\thobby " << st.hobby << endl;
	cout << "\tooplevel " << st.ooplevel << endl;
}

void display2(const student * ps)
{
	using std::cout;
	using std::endl;
	cout << "Student (passed by pointer):" << endl;
	cout << "\tfullname " << ps->fullname << endl;
	cout << "\thobby " << ps->hobby << endl;
	cout << "\tooplevel " << ps->ooplevel << endl;
}

void display3(const student pa[], int n)
{
	using std::cout;
	cout << "Passed students in array:\n";
	for (int i = 0; i < n; i++) {
		display2(&pa[i]);
	}
}

double add(double arg1, double arg2)
{
	return arg1 + arg2;
}

double multiply(double arg1, double arg2)
{
	return arg1 * arg2;
}

double calculate(double arg1, double arg2, double (*ptr)(double, double))
{
	return ptr(arg1, arg2);
}