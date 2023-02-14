// pharmacy.cpp
#include <iostream>
#include <map>
#include <vector>
#include "pharmacy.h"

map<string, Medicine> medicines;
vector<Transaction> transactions;

void sellMedicine(string name, int quantity)
{
    auto it = medicines.find(name);
    if (it == medicines.end())
    {
        cout << "Medicine not found" << endl;
        return;
    }
    Medicine &medicine = it->second;
    if (medicine.quantity < quantity)
    {
        cout << "Not enough quantity" << endl;
        return;
    }
    medicine.quantity -= quantity;
    int cost = medicine.price * quantity;
    cout << "Sold " << quantity << " of " << medicine.name << " for " << cost << " Euros" << endl;
    transactions.push_back({medicine.name, quantity, cost});
}

void showTransactions()
{
    cout << "Transactions:" << endl;
    for (Transaction &t : transactions)
    {
        cout << t.name << " " << t.quantity << " " << t.cost << endl;
    }
}