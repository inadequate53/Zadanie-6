#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <algorithm>
#include <vector>
#include <random>
#include <math.h>
#include <time.h>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::sort;
using std::reverse;
using std::min_element;
using std::min;

int main() {
	setlocale(LC_ALL, "RUS");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int Matrix;
	cout << "Введите размер матрицы: ";
	cin >> Matrix;
	int** matrix = new int* [Matrix];
	for (int i = 0; i < Matrix; i++) {
		matrix[i] = new int[Matrix];
	}

	time_t time(time_t * timer);
	srand(time(NULL));

	for (int line = 0; line < Matrix; line++) {
		for (int column = 0; column < Matrix; column++) {
			matrix[line][column] = rand() % 10;
		}
	}

	for (int line = 0; line < Matrix; line++) {
		for (int column = 0; column < Matrix; column++) {
			cout << matrix[line][column] << " ";
		}
		cout << endl;
	}
	cout << endl;

	if (Matrix % 2 == 0) {
		int abc; // abc = грани
		abc = (Matrix / 2);
		int stolb = 1;
		for (int line = 0; line < Matrix; line++) {
			for (int column = 0; column < Matrix; column++) {
				for (int i = 1; i <= abc; i++) {
					if (column == i) {
						int N = matrix[line][column];
						matrix[line][column] = matrix[line][Matrix - i];
						matrix[line][Matrix - i] = N;
					}
				}
			}
		}

		for (int line = 0; line < Matrix; line++) {
			for (int column = 0; column < Matrix; column++) {
				cout << matrix[line][column] << " ";
			}
			cout << endl;
		}
	}
	else {
		int abc; // abc = грани
		abc = (Matrix - 1) / 2;
		int stolb = 1;
		for (int line = 0; line < Matrix; line++) {
			for (int column = 0; column < Matrix; column++) {
				for (int i = 1; i <= abc; i++) {
					if (column == i) {
						int N = matrix[line][column];
						matrix[line][column] = matrix[line][Matrix - i];
						matrix[line][Matrix - i] = N;
					}
				}
			}
		}

		for (int line = 0; line < Matrix; line++) {
			for (int column = 0; column < Matrix; column++) {
				cout << matrix[line][column] << " ";
			}
			cout << endl;
		}
	}
	system("pause");
	return 0;

}