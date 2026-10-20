#include <iostream>
using namespace std;

int binarySearch(int data[], int n, int target) {
    int l = 0, r = n - 1;

    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (data[mid] == target) return mid;
        else if (data[mid] < target) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

int main() {
    int n;
    cout << "Jumlah data: ";
    cin >> n;

    int data[100];
    cout << "Masukkan " << n << " nilai (terurut ascending):\n";
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }

    int target;
    cout << "Nilai yang dicari: ";
    cin >> target;

    int hasil = binarySearch(data, n, target);

    if (hasil != -1) {
        cout << "Data ditemukan pada indeks: " << hasil << endl;
    } else {
        cout << "Data tidak ditemukan" << endl;
    }

    return 0;
}