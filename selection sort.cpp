#include <iostream>
using namespace std;


void selectionsort(int arr[])
{
	int n = 5;

	for (int i = 0; i < n ; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				swap(arr[j], arr[i]);
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i]<<" ";
	}
}
int main()
{
	int arr[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}
	selectionsort(arr);
}