#include <cstdlib>
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	char x;
	int liczba;
	int max_liczba = 0;
	int numer_max_liczby = 0;
	int min_liczba = 101;
	int numer_min_liczby = 0;
	srand(time(NULL));

	do
	{
		for (int i = 1; i <= 25; i++)
		{
			liczba = rand() % 100 + 1;
			cout << "Liczba " << i << " - " << liczba << endl;

			if (max_liczba < liczba)
			{
				max_liczba = liczba;
				numer_max_liczby = i;
			}

			if (min_liczba > liczba)
			{
				min_liczba = liczba;
				numer_min_liczby = i;
			}

		}

		cout << "\nNajwieksza  liczba jest liczba nr. " << numer_max_liczby << ", i wynosi ona: " << max_liczba << endl;
		cout << "Najmniejsza  liczba jest liczba nr. " << numer_min_liczby << ", i wynosi ona: " << min_liczba << endl;

		max_liczba = 0;
		numer_max_liczby = 0;
		min_liczba = 101;
		numer_min_liczby = 0;

		cout << "\nAby powtorzyc program nacisnij R" << endl;
		x = _getch();

	} while (x == 'r');

}


