//
// Created by Alexander on 05.12.2015.
//

#include "Knapsack.h"
Item::Item(int w, int p) {
    this->price = p;
    this->weight = w;
    this->pricePerWeight = p / w;
}
Knapsack::Knapsack(int _weight) {
    this->items = vector<Item>();
    this->MaxWeight = _weight;
    this->price = 0;
    this->weight = 0;
}
bool Knapsack::AddItem(Item item) {
    if (this->weight + item.weight > this->MaxWeight) {
        return false;
    }
    this->items.push_back(item);
    this->weight += item.weight;
    this->price += item.price;
    return true;
}
void Knapsack::Clear() {
    this->items.clear();
    this->price = 0;
    this->weight = 0;
}