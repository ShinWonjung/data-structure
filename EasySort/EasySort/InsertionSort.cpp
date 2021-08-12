#include <iostream>
using namespace std;
void InsertSort(int arr[], int n)
{
	int insData;

	for (int i = 1; i < n; i++) {
		insData = arr[i];
		int j;
		for (j = i - 1; j >= 0; j--) {
			if (arr[j] > insData) arr[j + 1] = arr[j];
			else break;
		}
		arr[j + 1] = insData;
	}
}