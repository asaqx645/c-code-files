//
// Created by Aditya on 5/13/2025.
//
//
// Created by Aditya on 5/13/2025.
//
#include <iostream>
#include <unordered_map>
#include <string>
#include <chrono>  // For timing

using namespace std;
using namespace std::chrono;

// Character frequency table function
unordered_map<char, int> BuildCharacterFrequencyTable(const string& input)
{
    unordered_map<char, int> freqTable;
    for (char ch : input) {
        freqTable[ch]++;
    }
    return freqTable;
}

int main() {
    string input = "BANANAS AND APPLES";
    // Start the high-resolution clock
    auto start = high_resolution_clock::now();
    unordered_map<char, int> table = BuildCharacterFrequencyTable(input);
    // Stop the clock after computation
    auto stop = high_resolution_clock::now();
    // Compute duration in microseconds
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Character Frequency Table\n";
    for (const auto& pair : table) {
        cout << "'" << pair.first << "' : " << pair.second << endl;
    }
    cout << "\nProcessing time: " << duration.count() << " microseconds" << endl;
    return 0;
}
