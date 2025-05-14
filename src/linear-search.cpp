//
// Created by Aditya on 5/10/2025.
//
# include <iostream>
using namespace std;
//#include <bits/stdc++.h>
# include <vector>
# include <string>

int linearSearch(vector<int>&v, int key, int i ){

        if (i == v.size()) {
            return -1;
        }
        if (v[i] == key){
            return i;
        }
    return linearSearch(v, key, i + 1);
}


int main() {
//    vector <string> best_buy = {
//            "desktop",
//            "phones",
//            "headphones",
//            "monitor",
//            "mouse"
//    };
    vector <int> v = {1, 2, 3, 4, 5, 8, 9, 11};

//    string key = "monitor";
    int key = 8;
    int i = linearSearch(v, key, 0);
    if (i != 1){
        cout << "Found at Position "
        << i + 1;

    }else{
        cout << key << "Not Found at Position";
    }
    return 0;

}