#include < iostream >
using namespace std;

void selectionSort11(int arr[]) {
	for (int i = 0; i < 4; i++) {
		int min = i;

		for (int j = i + 1; j < 5; j++) {
			if (arr[j] < arr[min]) {

				min = j;
			}
		}
		if (min != i) {
			int temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;

		}
	}
}