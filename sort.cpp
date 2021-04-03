#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
using std::cout;
using std::cin;

void mysort(int inSizeArray, int* inArray) {
	
	for (int Index1 = 0; Index1 < inSizeArray - 1; ++Index1) {
		
		int minIndex = Index1;
		
		for (int Index2 = Index1 + 1; Index2 < inSizeArray; ++Index2) {
			if (inArray[Index2] < inArray[minIndex])
				
				minIndex = Index2;
		};
		
		std::swap(inArray[Index1], inArray[minIndex]);
	};
}
int main() {
	// Ввод массива и его размер осуществляется с клавиатуры;
	size_t size;

	std::cout
		<< "Enter size of array ";
	std::cin
		>> size;

	std::vector<int> myarray(size);

	std::cout
		<< "Enter "
		<< size
		<< " value's (press Enter after each value) ";

	for (size_t i = 0; i < size; i++) {

		std::cin
			>> myarray[i];
	}
	mysort(size, data(myarray));
	// Вывод отсортированного массива на экран
	for (int index = 0; index < size; ++index)
		std::cout << myarray[index] << ' ';

	return 0;
};
