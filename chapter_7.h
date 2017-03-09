#ifndef CHAPTER_7_H
#define CHAPTER_7_H

struct pudlo {
	char producent[40];
	float wysokosc;
	float szerokosc;
	float dlugosc;
	float objetosc;
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
#endif
