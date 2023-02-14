// main.cpp
#include "Pharmacy.h"

void showMenu()
{
    cout << "Pharmacy Management System" << endl;
    cout << "1. Sell medicine" << endl;
    cout << "2. Sho1w transactions" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice: ";
}

int main()
{
    // Add some sample medicines
    medicines["Painkiller"] = {"Painkiller", 10, 100};
    medicines["Antibiotic"] = {"Antibiotic", 20, 50};
    medicines["Cold syrup"] = {"Cold syrup", 5, 200};

    while (true)
    {
        showMenu();
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cout << "Enter name of medicine to sell: ";
            string name;
            cin >> name;
            cout << "Enter quantity: ";
            int quantity;
            cin >> quantity;
            sellMedicine(name, quantity);
            break;
        }
        case 2:
        {
            showTransactions();
            break;
        }
        case 3:
        {
            cout << "Exiting..." << endl;
            return 0;
        }
        }
    }
}
