#include <iostream>

using namespace std;
void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				
			}
		}
	}
	for (i = 0; i < n; i++)
		cout << " " << arr[i];
}


int main()
{

	int arr[5];
	cout << "enter array elements:" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}
	bubbleSort(arr , 5);

}