// pharmacy.h
#ifndef PHARMACY_H
#define PHARMACY_H

#include <iostream>
#include <map>
#include <vector>

using namespace std;

struct Medicine
{
    string name;
    int price;
    int quantity;
};

struct Transaction
{
    string name;
    int quantity;
    int cost;
};

extern map<string, Medicine> medicines;
extern vector<Transaction> transactions;

void sellMedicine(string name, int quantity);
void showTransactions();

#endif
