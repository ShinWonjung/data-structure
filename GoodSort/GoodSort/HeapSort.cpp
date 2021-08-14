#include <iostream>
#include <queue>
using namespace std;
void HeapSort(int arr[], int n)
{
	priority_queue<int, vector<int>, greater<int>> heap;
	for (int i = 0; i < n; i++) {
		heap.push(arr[i]);
	}
	for (int i = 0; i < n; i++) {
		arr[i] = heap.top();
		heap.pop();
	}
}