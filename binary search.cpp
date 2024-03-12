#include <iostream>
using namespace std;

void binarysearch(int arr[] ,int  key , int n)
{
	int start = 0;
	int end = n;
	while (start <= end)
	{
		int mid = (start+end) / 2;
		if (arr[mid] == key)
		{
			cout << "key found at:" << mid << endl;
			return;
		}

		else if(arr[mid]>key)
		{
			end = mid - 1;
			
		}
		else
		{
			start = mid + 1;
		}

	}
	cout << "not found!!";
}
  
int main()
{
	int value;
	int n = 5;
	int arr[5];
	cout << "enter a sorted array :" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << "enter the value to search " << endl;
	cin >> value;
	binarysearch(arr, value, n);
}
