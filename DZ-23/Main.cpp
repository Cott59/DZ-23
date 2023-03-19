#include <iostream>
#include<cstdlib>
#include<ctime>

void three_max(int& num1, int& num2, int& num3) {
	int max = num1;
	if (num2 > max)
		max = num2;
	if (num3 > max)
		max = num3;
	num1 = max;
	num2 = max;
	num3 = max;
}

int& prime_negatif(int arr[], const int length) {
	int min = 0;
	for (int i = 0; i < length; i++)
		if (arr[i] < min)
			return arr[i];
	if (min == 0)
		return arr[0];
}

void null_points(int arr1[], int arr2[], const int length1, const int length2) {
	for (int i = 0; i < length1; i++)
		for (int j = 0; j < length2; j++)
			if (*(arr1 + i) == *(arr2 + j))
				*(arr2 + j) = 0;

}


int main() {
	setlocale(LC_ALL, "Russian");
	std::cout << " Задача 1 \n";
	int a = 3, b = 5, c = 14;
	int& refa = a; int& refb = b; int& refc = c;
	three_max(refa, refb, refc);
	std::cout << a << ' ' << b << ' ' << c;
	std::cout << "\n\n";

	std::cout << " Задача 2 \n";
	const int size1 = 15;
	int arr1[size1]{ 10,15,-4,25,-12,11,30,27,21,2,8,18,29,1,-7 };
	std::cout << " Изначальный массив \n";
	for (int i = 0; i < size1; i++)
		std::cout << arr1[i] << ' ';
	std::cout << '\n';
	std::cout <<" Адрес первого отрицательного элемента : "<< & prime_negatif(arr1, size1) << '\n';
	std::cout << "\n\n";

	std::cout << " Задача 3 \n";
	std::cout << " Массив 1: \n";
	for (int i = 0; i < size1; i++)
		std::cout << arr1[i] << ' ';
	std::cout << "\n";
	std::cout << " Массив 2: \n";
	const int size2 = 15;
	int arr2[size2];
	srand(time(NULL));
	for (int i = 0; i < size2; i++) {
		arr2[i] = rand() % 46 - 15;
		std::cout << arr2[i] << ' ';
	}
	std::cout << '\n';
	null_points(arr1, arr2, size1, size2);
	std::cout << " Измененный Массив 2: \n";
	for (int i = 0; i < size2; i++) 
		std::cout << arr2[i] << ' ';
	std::cout << '\n';




	return 0;
}



