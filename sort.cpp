#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int array[10] = { 5, 2, 3, 1, 7, 8, 4, 6, 9, 0 };
	// Index1 - начальное значение индекса;
	for (int Index1 = 0; Index1 < 10 - 1; ++Index1) {
		// minIndex - сюда записывается индекс наименьшего значения, которое было найдено в этой итерации
		// Начнём с того, что наименьший элемент - первый элемент, т.е. с индексом 0
		int minIndex = Index1;
		// Ищем элемент поменьше в другой части массива
		for (int Index2 = Index1 + 1; Index2 < 10; ++Index2) {
			if (array[Index2] < array[minIndex])
				// Если нашли такой элемент, то запоминаем его
				minIndex = Index2;
		};
		// Меняем его местами с тем, что обнаружили ранее
		std::swap(array[Index1], array[minIndex]); //
	};
	// Вывод отсортированного массива на экран
	for (int index = 0; index < 10; ++index)
		std::cout << array[index] << ' ';

	return 0;
};