#include <iostream>
#include <algorithm>
using namespace std;

//fungsi untuk membagi data berdasarkan pivot
int partition (int data[], int low, int high) {
    int pivot = data[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (data[j] < pivot) {
            i++;
            swap(data[i], data[j]);
        }
    }
    swap(data[i + 1], data[high]);
    return i + 1;
}

//fungsi untuk mengurutkan bagan kiri dan kanan dari pivot
void quickSort(int data[], int low, int high) {
    if (low < high) {
        int pi = partition(data, low, high);
        quickSort(data, low, pi - 1);
        quickSort(data, pi + 1, high);
    }
}

int main(){
    int data[]= {5,2,4,1,3};
    int n = 5;

    quickSort (data, 0, n-1);

    cout <<"hasil quick sort: ";
    for (int i=0; i<n;i++){
        cout<<data [i]<<" ";
    }
}