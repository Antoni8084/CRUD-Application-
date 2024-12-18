#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Define a structure for an Item
struct Item {
    int id;
    string name;
    double price;

    void display() const {
        cout << "ID: " << id << ", Name: " << name << ", Price: $" << price << endl;
    }
};

// Function prototype
void createItem(vector<Item>& items);

int main() {
    vector<Item> items;
    int choice;

    do {
        cout << "\n--- Menu ---\n";
        cout << "1. Create Item\n";
        cout << "2. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                createItem(items);
                break;
            case 2:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 2);

    return 0;
}

void createItem(vector<Item>& items) {
    Item newItem;

    cout << "\nEnter Item ID: ";
    cin >> newItem.id;
    cin.ignore();
    cout << "Enter Item Name: ";
    getline(cin, newItem.name);
    cout << "Enter Item Price: ";
    cin >> newItem.price;

    items.push_back(newItem);
    cout << "Item created successfully!\n";
}