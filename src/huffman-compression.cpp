//
// Created by Aditya on 5/13/2025.
//
# include <iostream>
using namespace std;
# include <unordered_map>
# include <string>
//char frequency table
unordered_map<char, int> BuildCharacterFrequencyTable(const string& input)
{
  unordered_map<char, int> freqTable;
  for (char ch: input){
      freqTable[ch]++;
  }
    return freqTable;
};
int main(){
    string input = "BANANAS AND APPLES";
    unordered_map<char, int> table = BuildCharacterFrequencyTable(input);
    cout << "Character Frequency Table\n";
    for(const auto& pair : table){
        cout << "'" << pair.first << "' : " << pair.second << endl;
    }
    return 0;
}

