#include <iostream> 
using namespace std;


void insertionsort(int arr[])
{
	int key;
	for (int i = 1; i < 5; i++)
	{
		key = arr[i];
		int j = i - 1;
		while (arr[j]>key && j>=0)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	 }

	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";

	}



}

int main()
{

	int arr[5];
	cout << "enter array elements" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}
	insertionsort(arr);

	
}