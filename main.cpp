#include <iostream>
#include <algorithm>
#include "Knapsack.h"
using namespace std;
void PackWithGreedyAlgorithm(Knapsack &knapsack, vector<Item> &items) {
    sort(items.begin(), items.end(), [](const Item &i, const Item &j) {
        return i.pricePerWeight > j.pricePerWeight;
    });
    for (int k = 0; k < items.size() && knapsack.weight < knapsack.MaxWeight; ++k) {
        knapsack.AddItem(items[k]);
    }
}
void PackWithDynamicAlgorithm(Knapsack &knapsack, vector<Item> &items) {
}
int main() {
    vector<Item> items = vector<Item>();
    items.push_back(Item(3,55));
    items.push_back(Item(2,80));
    items.push_back(Item(4,60));
    items.push_back(Item(1,45));
    items.push_back(Item(3,105));
    items.push_back(Item(1,50));
    Knapsack knapsack = Knapsack(10);
    PackWithGreedyAlgorithm(knapsack, items);
    return 0;
}