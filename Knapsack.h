//
// Created by Alexander on 05.12.2015.
//
#ifndef KDZ_KNAPSACK_H
#define KDZ_KNAPSACK_H

#endif //KDZ_KNAPSACK_H
#include <vector>
using namespace std;
struct Item {
    int weight;
    int price;
    double pricePerWeight;
    Item(int w, int p);
};
class Knapsack {
    vector<Item> items;
public:
    int MaxWeight;
    int weight;
    int price;
    Knapsack(int _capacity);
    bool AddItem(Item item);
    void Clear();
};
