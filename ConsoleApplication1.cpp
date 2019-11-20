#include "pch.h"
#include <iostream>
#include <locale.h>
#include <vector>
#include <string>
#include <time.h>

using namespace std;

void buble_sort(int *array, int array_size, unsigned int start_time)
{
	int buffer;
	for (int i = 0; i < array_size - 1; i++)
	{
		for (int j = 0; j < array_size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				buffer = array[j];
				array[j] = array[j + 1];
				array[j + 1] = buffer;
				//swap(array[j], array[j + 1]);
			}
		}
	}
	unsigned int end_time = clock();
	unsigned int search_time = end_time - start_time;
	/*for (int i = 0; i < array_size; i++)
	{
		cout << array[i] << " ";
	}
	*/
	cout<<"Время работы проги, cек: "<< search_time/1000;
};

int main()
{
	setlocale(LC_ALL, "");

	unsigned int start_time = clock();
	
	int num = 0;

	cout << "Введите необходимый размер массива\n";

	cin >> num;

	int *p_darr = new int[num]; 

	srand(time(0));

	for (int i = 0; i < num; i++) 
	{
		
		p_darr[i] =rand()% 100000;

		//cout << "Value of " << i << " element is " << p_darr[i] << endl;
	}

	buble_sort(p_darr, num, start_time);
	
	delete[] p_darr;

	return 0;
}


