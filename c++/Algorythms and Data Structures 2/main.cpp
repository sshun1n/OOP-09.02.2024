
// main inclusions
#include <iostream>
#include <fstream>

// headers
#include "functions.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "RU"); system("chcp 1251"); system("cls");
	int iter, temp, function;

	cout << "������� ����������� �������: "; cin >> iter; int* array = InputArray(iter);

	cout << "[1] ���������������� �����\n[2] ����� � ��������\n[3] �������� �����\n[4] ������ ������ ��������� ������\n[5] ����� ������������ ��-�\n\n����: "; cin >> function; system("cls");

	if (function == 1) { Print(array, iter); cout << "\n\n������� ������� ��� ������ : "; cin >> temp; cout << "ID �������� ��������: " << Search(array, temp, iter) << '\n'; }

	if (function == 2) { Print(array, iter); cout << "\n\n������� ������� ��� ������ : "; cin >> temp; cout << "ID �������� ��������: " << BarierSearch(array, temp, iter) << '\n'; }

	if (function == 3) { 
		int subFunction;

		cout << "[1] ������������ �����\n[2] ������������� �����\n\n����: "; cin >> subFunction; system("cls");

		if (subFunction == 1) { Print(array, iter); cout << "\n\n������� ������� ��� ������ : "; cin >> temp; cout << "ID �������� ��������: " << BinarySearch(array, 0, iter, temp) << '\n'; }

		if (subFunction == 2) { Print(array, iter); cout << "\n\n������� ������� ��� ������ : "; cin >> temp; cout << "ID �������� ��������: " << IndexBinarySearch(array, 0, iter, temp) << '\n'; }
	
	}

	if (function == 4) {
		ofstream file("C:/Users/sshunin/Desktop/table.csv");
		for (long int i = 2; i < 25; i++) {
			int num = pow(2, i);
			int* array1 = InputArrayAuto(num);

			file << num << "; " << IndexBinarySearch(array1, 0, num, -1) << '\n';
		}

	}

	if (function == 5) { 
		float _iter;
		cout << "������� ����������� �������: "; cin >> _iter;

		vector<int> arr = InputArray(_iter);
		Print(arr);
		cout << "\n����������� �������: " << findMissingItem(arr);

	}

	cout << '\n'; system("pause");
	return main();
}