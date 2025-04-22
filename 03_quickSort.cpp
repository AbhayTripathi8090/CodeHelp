#include<iostream>
#include<vector>
using namespace std;

void quickSort(vector<int>& v, int start, int end) { 
    if(start >= end) return;

    int pivot = end;
    int i = start - 1;
    int j = start;

    while(j < pivot) {
        if(v[j] < v[pivot]) {
            i++;
            swap(v[i], v[j]);
        }
        j++;
    }

    i++;
    swap(v[i], v[pivot]);

    quickSort(v, start, i - 1);
    quickSort(v, i + 1, end);
}

int main() {
    vector<int> v = {20, 40, 30, 50, 10};
    int start = 0;
    int end = v.size() - 1;

    cout << "Before" << endl;
    for(int i : v) {
        cout << i << " ";
    }
    cout << endl;

    quickSort(v, start, end);

    cout << "After" << endl;
    for(int i : v) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
