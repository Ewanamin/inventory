
#include <vector>
#include <string>
using namespace std;

struct Product {
    
    int ID;
    string name;
    double price;
    string MfgDate;
    string Expiry;
};


class Inventory {

private:
    vector<Product> products;

public:
    void add_product(int id, string& name, double price, string& MfgDate, string& Expiry);
    void show_products();
    bool removeById(int id);
    bool removeByName(string& name);
};

void interface();
void main_menu();
void add_product_prompt(); 
void remove_product_prompt();
void modify_product();
void filter_list();
void unfilter_list();
void ascending();
void descending();
void add_product_successful();
void remove_product_successful();
void remove_product_unsuccessful();
