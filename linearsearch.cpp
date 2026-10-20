#include <iostream>
using namespace std;

//membuat fungsi linear search
int linearsearch (int data [], int n, int target){
    for (int i = 0; i < n; i++){
        if (data[i] == target){
            return i;
        }
    }
    return -1;
}

int main (){
    int data [] = {80, 100, 3, 40, 0, 22, 11};
    int n = 7;
    int target = 3;

    int hasil = linearsearch(data, n, target);

    if (hasil != -1){
        cout << "Data ditemukan pada indeks ke-" << hasil << endl;
    } else {
        cout << "Data tidak ditemukan" << endl;
    }
    return 0;
}