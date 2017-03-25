#ifndef CHAPTER_7_H
#define CHAPTER_7_H

const int SLEN = 30;

struct pudlo {
	char producent[40];
	float wysokosc;
	float szerokosc;
	float dlugosc;
	float objetosc;
};

struct Expenses {
	double expenses[4];
};

struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

void fill_array_with_zeros(double tab[], int number);
double harmonic(int x, int y);
void get_golf_result(double * tab, int number);
double calculate_average(double tab[], int number);
void display_result(double tab[], int number, double average);
void dipslay_struct_fileds(pudlo arg);
void calculate_capacity(pudlo * arg);
double calculate_probability(unsigned int numbers, unsigned int picks);
int factorial(int number);
int fill_array(double tab[], int number);
void show_array(double tab[], int number);
void reverse_array(double tab[], int number);
double * fill_array(double * begin, double * end);
void show_array(double * begin, double * end);
void reverse_array(double * begin, double * end);
void fill_array(const char * seasons[], double expenses[], int size);
void show_array(const char * seasons[], double expenses[], int size);
void fill_array(const char * seasons[], Expenses & exp, int size);
void show_array(const char * seasons[], Expenses exp, int size);
int getinfo(student pa[], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);
double add(double arg1, double arg2);
double multiply(double arg1, double arg2);
double calculate(double arg1, double arg2, double (*ptr)(double arg1, double arg2));

#endif
