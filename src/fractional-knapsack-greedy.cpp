//
// Created by Aditya on 5/19/2025.
//
# include <iostream> // input output
# include <vector> // dynamic arrays
# include <algorithm> // sort()
# include <iomanip>
using namespace std;

struct Item {
    int value;
    int weight;
    double fraction;

    Item(int v, int w): value(v), weight(w), fraction(1.0){}
    double ratio() const{ // ratio of every object inside knapsack
        return (double)value/weight;
    }
};

void valueToWeightRatioSort(vector<Item>& items){
    sort(items.begin(), items.end(), [](const Item& a, const Item& b){
             return a.ratio() > b.ratio();
    }
    );
}

double fractionalKnapsack(vector<Item>& items, int capacity){
    valueToWeightRatioSort(items);
    double totalValue = 0.0;
    for (Item& item: items){
        if(capacity >= item.weight){
            capacity -= item.weight;
            totalValue += item.value;
            item.fraction = 1.0;
        }else{
            item.fraction = (double)capacity / item.weight;
            totalValue += item.fraction * item.value;
            break;
        }
    }
    return totalValue;
}

int main(){
    vector<Item> items = {
            {60, 10},
            {100, 20},
            {120, 30}
    };
    int knapsackCapacity = 100;
    double maxValue = fractionalKnapsack(items, knapsackCapacity);
    cout << fixed << setprecision(2);
    cout << "Maximum Value of Knapsack: " << maxValue << endl;
    cout << "\n Item Breakdown (fraction included): \n";
    for (const Item& item: items){
        cout << "Value: " << item.value;
        cout << "Weight: " << item.weight
        << ", Fractions Taken: " << item.fraction << endl;
    }


}

