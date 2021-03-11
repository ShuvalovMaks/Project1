#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int array[10] = { 5, 2, 3, 1, 7, 8, 4, 6, 9, 0 };
	// Index1 - ��������� �������� �������;
	for (int Index1 = 0; Index1 < 10 - 1; ++Index1) {
		// minIndex - ���� ������������ ������ ����������� ��������, ������� ���� ������� � ���� ��������
		// ����� � ����, ��� ���������� ������� - ������ �������, �.�. � �������� 0
		int minIndex = Index1;
		// ���� ������� �������� � ������ ����� �������
		for (int Index2 = Index1 + 1; Index2 < 10; ++Index2) {
			if (array[Index2] < array[minIndex])
				// ���� ����� ����� �������, �� ���������� ���
				minIndex = Index2;
		};
		// ������ ��� ������� � ���, ��� ���������� �����
		std::swap(array[Index1], array[minIndex]); //
	};
	// ����� ���������������� ������� �� �����
	for (int index = 0; index < 10; ++index)
		std::cout << array[index] << ' ';

	return 0;
};