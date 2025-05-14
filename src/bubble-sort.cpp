//
// Created by Aditya on 5/11/2025.
//
# include <iostream>
using namespace std;
# include <vector>

void bubbleSort(vector<int>& arr){
    int n =arr.size();
    for(int i = 0; i < n - 1; i++) {
        bool swapping = false;
        for (int j = 0; j < n - i; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapping = true;
            }
        }
        if(!swapping) break;
    }
}

void printArray(const vector<int>& arr ){
    for(int num : arr){
        cout << num << ", ";
    }
    cout << endl;
}
int main(){
    vector <int> data = {64, 34, 28, 12, 22, 11, 90};
    cout << "Original Array: ";
    printArray(data);
    bubbleSort(data);
    cout <<"Sorted Array; ";
    printArray(data);
    return 0;
}