#include <iostream>
#include <queue>
using namespace std;
void RadixSort(int arr[], int num, int maxLen)
{
	queue<int>buckets[10];
	int bi;
	int pos;
	int di;
	int divfac = 1;
	int radix;

	for (pos = 0; pos < maxLen; pos++)
	{
		for (di = 0; di < num; di++)
		{
			radix = (arr[di] / divfac) % 10;
			buckets[radix].push(arr[di]);
		}
	}

	for (bi = 0, di = 0; bi < 10; bi++)
	{
		while (!buckets[bi].empty())
		{
			arr[di++] = buckets[bi].front();
			buckets[bi].pop();
		}

		divfac *= 10;
	}
}