#include <iostream>
#include <vector>
#include <string>

class Item {
public:
	std::string name;
	int quantity;

	Item(std::string n, int q) : name(n), quantity(q) {}
};

void printItems(const std::vector<Item>& items) {
	for (size_t i = 0; i < items.size(); ++i) {
    	std::cout << "Item: " << items[i].name << ", Quantity: " << items[i].quantity << std::endl;
	}
}

void addItem(std::vector<Item>& items, const std::string& name, int quantity) {
	items.push_back(Item(name, quantity));
}

void removeItem(std::vector<Item>& items, const std::string& name) {
	for (size_t i = 0; i < items.size(); ++i) {
    	if (items[i].name == name) {
        	items.erase(items.begin() + i);
        	break;
    	}
	}
}

int main() {
	std::vector<Item> inventory;
	std::string name;
	int quantity;
	int choice;

	do {
    	std::cout << "Inventory Management System" << std::endl;
    	std::cout << "1. Add Item" << std::endl;
    	std::cout << "2. Remove Item" << std::endl;
    	std::cout << "3. List Items" << std::endl;
    	std::cout << "4. Exit" << std::endl;
    	std::cout << "Enter your choice: ";
    	std::cin >> choice;

    	switch (choice) {
        	case 1:
            	std::cout << "Enter item name: ";
            	std::cin >> name;
            	std::cout << "Enter item quantity: ";
            	std::cin >> quantity;
            	addItem(inventory, name, quantity);
            	break;
        	case 2:
            	std::cout << "Enter item name to remove: ";
            	std::cin >> name;
            	removeItem(inventory, name);
            	break;
        	case 3:
            	printItems(inventory);
            	break;
        	case 4:
            	std::cout << "Exiting program." << std::endl;
            	break;
        	default:
            	std::cout << "Invalid choice. Try again." << std::endl;
            	break;
    	}
	} while (choice != 4);

	return 0;
}

// Código que simula um inventário onde pode-se adicionar itens pelo nome e quantiedade, é possível adicionar, remover e listar itens.

/*
void helloFunction2() {
	std::cout << "O numero que digitou não existe" << std::endl;
}           //SEM UTILIDADE

for (int i = 0; i < 5; ++i) {
    	// Useless loop
	}       //SEM UTILIDADE

for (int i = 0; i < 3; ++i) {
        	std::cout << "i é igual a: " << i << std::endl;
    	}
	} while (choice != 4);

	helloFunction2(); 
            //SEM UTILIDADE
*/