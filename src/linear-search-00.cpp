//
// Created by Aditya on 5/10/2025.
//
#include <iostream>
#include <vector>
using namespace std;

// Recursive Linear Search
int linearSearch(vector<int>& v, int key, int i) {
    if (i == v.size()) return -1;     // Base case: not found
    if (v[i] == key) return i;        // Match found
    return linearSearch(v, key, i+1); // Recursive call
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 8, 9, 11};
    int key = 11;
    int i = linearSearch(v, key, 0);

    if (i != -1) {
        cout << "Found at Position: " << i + 1 << endl;
    } else {
        cout << key << " Not Found" << endl;
    }

    return 0;
}