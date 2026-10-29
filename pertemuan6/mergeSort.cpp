#include <iostream>
#include <vector>

using namespace std;
void merge(vector<int>& data, int left, int mid, int right) {
    vector<int> temp;
    int i = left;
    int j = mid + 1;

    while (i <= mid && j <= right) {
        if (data[i] <= data[j]) {
            temp.push_back(data[i]);
            i++;
        } else {
            temp.push_back(data[j]);
            j++;
        }
    }

    while (i <= mid) {
        temp.push_back(data[i]);
        i++;
    }

    while (j <= right) {
        temp.push_back(data[j]);
        j++;
    }

    for (int k = 0; k < temp.size(); k++) {
        data[left + k] = temp[k];
    }
}

void mergeSort(vector<int>& data, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(data, left, mid);
        mergeSort(data, mid + 1, right);
        merge(data, left, mid, right);
    }
}

int main() {
    vector<int> data = {5, 2, 4, 1, 3};
    int n = data.size();

    mergeSort(data, 0, n - 1);

    cout << "Hasil merge sort: ";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    return 0;
}
