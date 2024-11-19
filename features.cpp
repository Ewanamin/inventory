#include <iostream>
#include <vector>
#include <conio.h>
#include <iomanip>
#include <cctype>
#include "inventory.hpp"
using namespace std;

Inventory items; //declaration for inventory class to use its methods
// these are for add_product func
int product_id;
string product_name;
double product_price;
string mfgD;
string expD;

int option; // for func add_product_successful
char status, statusUp; // for func interface

int remove_option; //for remove_product option
// these are for switch case inside remove_product_prompt func
int id;
string remove_name;




void remove_product_unsuccessful() {
    cout << "================================================================================================================================================================================================================\n\n";
    cout << "================================================================================================================================================================================================================\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                       PRODUCT REMOVED UNSUCESSFULLY.                                                                                         |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|       PRESS ANY KEY TO GO BACK TO THE MAIN MENU.                                                                                                                                                             |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "================================================================================================================================================================================================================\n";
    
    _getch();
    main_menu();
}

void remove_product_successful() {
    cout << "================================================================================================================================================================================================================\n\n";
    cout << "================================================================================================================================================================================================================\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                       PRODUCT REMOVED SUCESSFULLY.                                                                                           |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|       PRESS ANY KEY TO GO BACK TO THE MAIN MENU.                                                                                                                                                             |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "================================================================================================================================================================================================================\n";
    
    _getch();
    main_menu();
}

bool Inventory::removeById(int id) {
    for (int i = 0; i < products.size(); ++i) {
        if (products[i].ID == id) {
            products.erase(products.begin() + i);
            remove_product_successful();
            return true;
        }
    }
    return false;
}

bool Inventory::removeByName(string& name) {
    for (int i = 0; i < products.size(); ++i) {
        if (products[i].name == name) {
            products.erase(products.begin() + i);
            remove_product_successful();
            return true;
        }
    }
    return false;
}


void remove_product_prompt() {
    cout << "How do want to remove the product?\n" << "1 - ID\n" << "2 - Name\n\n";
    cin >> remove_option;

    switch (remove_option)
    {
    case 1:
        cout << "Enter Product ID: ";
        cin >> id;
        if(!items.removeById(id)) {
            remove_product_unsuccessful();
        }
        break;
    
    case 2:
        cout << "Enter Product ID: ";
        cin >> remove_name;
        if(!items.removeByName(remove_name)) {
            remove_product_unsuccessful();
        }
        break;

    default: 
        cout << "Select valid option.";
        break;
    }
}

void Inventory::show_products() {
    if (products.empty()) {
        cout << "|       No products available in the inventory.                                                |\n";
        return;
    }

    for (int i = 0; i < products.size(); ++i) {
        cout << "|  " << setw(10) << products[i].ID << "  |  "
             << setw(20) << products[i].name << "  |  "
             << setw(10) <<"PHP"<< fixed << setprecision(2) << products[i].price << "  |  "
             << setw(12) << products[i].MfgDate << "  |  "
             << setw(12) << products[i].Expiry << "  |\n";
    }
}

void Inventory::add_product(int id, string& name, double price, string& MfgDate, string& Expiry) {
    Product newProduct = {id, name, price, MfgDate, Expiry};
    products.push_back(newProduct);

}

void add_product_successful() {
    cout << "================================================================================================================================================================================================================\n\n";
    cout << "================================================================================================================================================================================================================\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                       PRODUCT ADDED SUCESSFULLY.                                                                                             |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|       PRESS ANY KEY TO GO BACK TO THE MAIN MENU.                                                                                                                                                             |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "|                                                                                                                                                                                                              |\n";
    cout << "================================================================================================================================================================================================================\n";
    
    _getch();
    main_menu();
}


void add_product_prompt() {
    cout << "Enter product id: ";
    cin >> product_id;
    cout << "Enter product name: ";
    cin >> product_name;
    cout << "Enter price in PHP: ";
    cin >> product_price;
    cout << "Enter manufactured date (mm/dd/yyyy): ";
    cin >> mfgD;
    cout << "Enter expiration date (mm/dd/yyyy): ";
    cin >> expD;


    items.add_product(product_id, product_name, product_price, mfgD, expD);

    add_product_successful();
}



void main_menu() {
    system("cls"); 
    cout << setw(110) << "MAIN MENU\n"; 
    cout << "================================================================================================================================================================================================================\n\n";
    cout << "=================================================================================================" << "  " << "=================================================================================================\n";
    cout << "|                                                                                               |" << "  " << "|                                                                                               |\n";
    cout << "|                                                                                               |" << "  " << "|                                           PRODUCT LIST                                        |\n";
    cout << "|    [1 - Add Product]                                                                          |" << "  " << "|                                                                                               |\n";
    cout << "|    [2 - Remove Product]                                                                       |" << "  " << "=================================================================================================\n";
    cout << "|    [3 - Modify Product]                                                                       |\n";
    cout << "|    [4 - Filter List]                                                                          |" << "  " << "===============" << " " << "=========================" << " " << "=================" << " " << "==================" << " " << "===================\n";
    cout << "|    [5 - Unfilter List]                                                                        |" << "  " << "|             |" << " " << "|                       |" << " " << "|               |" << " " << "|                |" << " " << "|                 |\n";
    cout << "|    [6 - Sort Products Ascending]                                                              |" << "  " << "|      ID     |" << " " << "|          NAME         |" << " " << "|     PRICE     |" << " " << "|    Mfg. Date   |" << " " << "|   EXPIRY DATE   |\n";
    cout << "|    [7 - Sort Products Descending]                                                             |" << "  " << "|             |" << " " << "|                       |" << " " << "|               |" << " " << "|                |" << " " << "|                 |\n";
    cout << "|    [0 - Back]                                                                                 |" << "  " << "===============" << " " << "=========================" << " " << "=================" << " " << "==================" << " " << "===================\n";
    cout << "|                                                                                               |\n";
    cout << "|                                                                                               |" << "  " << "==================================================================================================\n";
    cout << "|    Select an option:                                                                          |" << "  ";
    items.show_products(); 
    cout << "=================================================================================================" << "  " << "==================================================================================================\n";
    cin >> option;
    switch (option)
    {
    case 1:
        add_product_prompt();
        break;
    
    case 2: 
        remove_product_prompt();
        break;

    case 3: 

        break;

    case 4: 

        break;

    case 5: 

        break;

    case 6: 

        break;

    case 7: 

        break;

    case 0: 
        interface();
        break;
    
    default:
        cout << "Invalid option";
        break;
    }
}

void interface() {
   cout << setw(110) << "INVENTORY\n"; 
   cout << "================================================================================================================================================================================================================";
   cout << "\n\n\nType S to start | E to exit.\n\n";
   cin >> status;
   statusUp = toupper(status);

   switch (statusUp)
   {
   case 'S':
      main_menu();
      break;
   
   case 'E':
      cout << "Exiting the program...";
      break;
      
   default:
      cout << "Invalid selection";
      break;
   }
}