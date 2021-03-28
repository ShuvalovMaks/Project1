#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
using std::cout;
using std::cin;

int main() {
	// Ввод массива и его размер осуществляется с клавиатуры;
	size_t size;

	std::cout
		<< "Enter size of array ";
	std::cin
		>> size;

	std::vector<int> array(size);

	std::cout
		<< "Enter "
		<< size
		<< " value's (press Enter after each value) ";

	for (size_t i = 0; i < size; i++) {

		std::cin
			>> array[i];
	}
	// Index1 - начальное значение индекса;
	for (int Index1 = 0; Index1 < size - 1; ++Index1) {
		// minIndex - сюда записывается индекс наименьшего значения, которое было найдено в этой итерации
		// Начнём с того, что наименьший элемент - первый элемент, т.е. с индексом 0
		int minIndex = Index1;
		// Ищем элемент поменьше в другой части массива
		for (int Index2 = Index1 + 1; Index2 < size; ++Index2) {
			if (array[Index2] < array[minIndex])
				// Если нашли такой элемент, то запоминаем его
				minIndex = Index2;
		};
		// Меняем его местами с тем, что обнаружили ранее
		std::swap(array[Index1], array[minIndex]); //
	};
	// Вывод отсортированного массива на экран
	for (int index = 0; index < size; ++index)
		std::cout << array[index] << ' ';

	return 0;
};
