#include <iostream>
using namespace std;

void merge(int arr[], int first, int mid, int last) {
    int i = first;
    int j = mid + 1;
    int k = 0; // Corrected index for arr2
    int l = last;
    int arr2[10];

    while (i <= mid && j <= l) {
        if (arr[i] < arr[j]) {
            arr2[k] = arr[i];
            i++;
        }
        else {
            arr2[k] = arr[j];
            j++;
        }
        k++;
    }

    while (i <= mid) {
        arr2[k] = arr[i];
        i++;
        k++;
    }

    while (j <= l) {
        arr2[k] = arr[j];
        j++;
        k++;
    }

    // Copy sorted elements from arr2 back to arr
    for (int index = 0; index < k; index++) {
        arr[ index] = arr2[index];
    }
}

void mergesort(int arr[], int first, int last) {
    if (first < last) {
        int mid = (first + last) / 2;
        mergesort(arr, first, mid);
        mergesort(arr, mid + 1, last);
        merge(arr, first, mid, last);
    }
}

void printarray(int arr[]) {
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[10];
    cout << "Enter array elements:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    mergesort(arr, 0, 9);

    cout << "Sorted array:" << endl;
    printarray(arr);

    return 0;
}
 n