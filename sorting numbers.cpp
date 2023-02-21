//Є масив на n елементів, знайти найбільший елемент масива і якщо він- парний - відсортувати масива від малих до великих, якщо непарний - навпаки. 
//

#include <iostream>
using namespace std;


int main()
{
	/* крок 1. генерую масив випадкових чисел велечиною N */
	srand(time(NULL));
	const int N = 10;
	int mass [N];
	for (int i = 0; i < N; i++)
		mass[i] = rand();

	/* крок 2. шукаю найбільше число */
	int max = mass[0];
	for (int i = 0; i < N; i++)
		if (max < mass[i]) max = mass[i];

	
	/* крок 3. сортування масива: якщо максимум - парний */
	if (max % 2 == 0)
	{
		int temp;
		for (int j = 0; j < N; j++)
			for (int i = 0; i < (N-1); i++)
			{
				temp = mass[i];
				if (mass[i] > mass[i + 1])
				{
					mass[i] = mass[i + 1];
					mass[i + 1] = temp;
				}
			}
		cout << "\nMaximum = " << max << ". The number is even. \nAll elements sorted in ascending order are following:" << endl;
		for (int i = 0; i < N; i++)
			cout << mass[i] << " ";
	}
	else 
	{
		int temp;
		for (int j = 0; j < N; j++)
			for (int i = 0; i < (N-1); i++)
			{
				temp = mass[i];
				if (mass[i] < mass[i + 1])
				{
					mass[i] = mass[i + 1];
					mass[i + 1] = temp;
				}
			}
		cout << "\nMaximum = " << max << ". The number is odd. \nAll elements sorted in descending order are following:" << endl;
		for (int i = 0; i < N; i++)
			cout << mass[i] << " ";
	}
}

