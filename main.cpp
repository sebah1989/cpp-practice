#include <iostream>
#include "chapter_7.h"

void keep_asking_for_harmonic_1() {
	using std::cin;
	using std::cout;
	using std::endl;
	int x = 0;
	int y = 0;
	do {
		if (x && y) {
			cout << "Calculated harmonic: " << endl;
			cout << harmonic(x,y) << endl;
		}

		cout << "Give x and y to calculate harmonic (0 ends program)" << std::endl;
	}
	while ((cin >> x) && (cin >> y) && x != 0 && y != 0 );
}

void collect_and_display_golf_result_2()
{
	int TAB_SIZE = 10;
	double tab[TAB_SIZE];
	fill_array_with_zeros(tab, TAB_SIZE);
	get_golf_result(tab, TAB_SIZE);
	display_result(tab, TAB_SIZE, calculate_average(tab, TAB_SIZE));
}

void struct_fun_3()
{
	pudlo pud {"Honda", 10, 10, 15};
	calculate_capacity(&pud);
	dipslay_struct_fileds(pud);
}

void lottery_4()
{
	using std::cout;
	using std::cin;
	unsigned int numbers1;
	unsigned int picks1;
	unsigned int numbers2;
	unsigned int picks2;
	cout << "Give the highest lottery 1 number: ";
	cin >> numbers1;
	cout << "Give number of lottery 1 picks: ";
	cin >> picks1;
	cout << "Give the highest lottery 2 number: ";
	cin >> numbers2;
	cout << "Give number of lottery 2 picks: ";
	cin >> picks2;
	cout << "Calculated combo probability = " << (1 / (
		calculate_probability(numbers1, picks1) * calculate_probability(numbers2, picks2)));
}

void factorial_5()
{
	using std::cout;
	using std::cin;
	using std::endl;
	int number;
	cout << "Type number to calculate: ";
	cin >> number;
	cout << "Calculated factorial = " << factorial(5) << endl;
}

int main(void) {
	factorial_5();
}