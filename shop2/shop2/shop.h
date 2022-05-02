#include<string>
#include"product.h"
#include"utils.h"
using namespace std;
int PRODUCTS_NUM = 10;

class Shop
{
private:
    Product* products = generateProducts();
    string** list = new string*[PRODUCTS_NUM];
    string** productList = new string*[10];

    float money = 0;
    int counter = 0;

public:
    string** getProducts();
    void printProducts();
    void sortedProducts();
    string** findProduct(string product);
    void printProduct(string** productList);
    Product* buy(int id);
    Product* buy(string name);
    float getMoney();
    int getCounter();
};
