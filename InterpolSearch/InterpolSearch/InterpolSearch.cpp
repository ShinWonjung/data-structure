#include <iostream>

int ISearch(int ar[], int first, int last, int target)
{
	int mid;

	if (ar[first] > target || ar[last] < target)
		return -1;

	mid = ((double)(target - ar[first]) / (ar[last] - ar[first]) * (last - first)) + first;

	if (ar[mid] == target)
		return mid;
	else if (target < ar[mid])
		return ISearch(ar, first, mid - 1, target);
	else
		return ISearch(ar, mid + 1, last, target);
}

int main()
{
	int arr[] = { 1,3,5,7,9 };
	int idx;

	idx = ISearch(arr, 0, sizeof(arr) / sizeof(int) - 1, 7);
	if (idx == -1)
		std::cout << "Å½»ö ½ÇÆÐ\n";
	else
		std::cout << "Å¸°Ù ÀúÀå ÀÎµ¦½º: " << idx << '\n';

	idx = ISearch(arr, 0, sizeof(arr) / sizeof(int) - 1, 10);
	if (idx == -1)
		std::cout << "Å½»ö ½ÇÆÐ\n";
	else
		std::cout << "Å¸°Ù ÀúÀå ÀÎµ¦½º: " << idx << '\n';

	return 0;
}