//
// Created by Aditya on 5/15/2025.
//
# include <iostream> // input output
# include <vector> // dynamic arrays
# include <algorithm> // sort()
using namespace std;

int linearSearch(vector<int>& arr, int key){
    for(int i = 0; i < arr.size(); ++i){
        if (arr[i] == key) return i;
    }
    return -1;
}

int binarySearch(vector<int>& arr, int key){
    int left = 0, right = arr.size() -1;
    while (left <= right){
        int mid = left + (right - left)/ 2;
        if (arr[mid]==key)
            return mid;
        else
            if(arr[mid]< key)
                left = mid + 1;
            else
                right = mid - 1;
    }

    return -1;
}

int main() {
    vector <int> data = {9, 5, 3, 8, 1, 40, 55, 987, 5, 7, 88};
    int key = 987;
    int i = linearSearch(data, key);
    cout << "Linear Search " << (i != 1 ? "Found at Index " + to_string(i) : "Not Found") << endl;
    sort(data.begin(), data.end());
    int binaryIndex = binarySearch(data, key);
    cout << "Binary Search " << (binaryIndex != 1 ? "Found at Index " + to_string(binaryIndex) : "Not Found") << endl;
    return 0;
}