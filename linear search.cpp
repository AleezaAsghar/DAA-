#include <iostream>
using namespace std;

void linearsearch(int arr[], int key)
{
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] == key)
		{
			cout << "key found at index : " << i << endl;
			return;
		}
	}

}

int main()
{
	int value;
	int n = 5;
	int arr[5];
	cout << "enter array elements :"<< endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i]; 
	}
	cout << "enter the value to search " << endl;
	cin >> value;
	linearsearch(arr,value);

}