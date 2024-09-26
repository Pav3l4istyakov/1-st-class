#include <iostream>
#include <vector>
#include <string>

class HouseholdItem {
private:
    std::string name;
    std::string category;
    double price;

public:
    HouseholdItem(std::string n, std::string c, double p) : name(n), category(c), price(p) {}

    void display() const {
        std::cout << "Item Name: " << name << ", Category: " << category << ", Price: " << price << std::endl;
    }
};

int main() {
    std::vector<HouseholdItem> items;
    std::string name, category;
    double price;
    char more;

    do {
        std::cout << "Enter item name: ";
        std::getline(std::cin, name);
        std::cout << "Enter item category: ";
        std::getline(std::cin, category);
        std::cout << "Enter item price: ";
        std::cin >> price;
        std::cin.ignore(); 

        items.emplace_back(name, category, price);

        std::cout << "Do you want to add another item? (y/n): ";
        std::cin >> more;
        std::cin.ignore(); 
    } while (more == 'y' || more == 'Y');

    std::cout << "\nCatalog of Household Items:\n";
    for (const auto& item : items) {
        item.display();
    }

    return 0;
}