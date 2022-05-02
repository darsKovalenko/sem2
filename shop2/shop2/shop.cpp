#include<iostream>
#include "shop.h"
using namespace std;

string** Shop::getProducts()
{
    for (int i = 0; i < PRODUCTS_NUM - counter; i++)
    {
        list[i] = products[i].toString();
    }
    return list;
}

void Shop::printProducts()
{
    for (int i = 0; i < (PRODUCTS_NUM - counter); i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << list[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void Shop::sortedProducts()
{
    for (int i = 0; i < PRODUCTS_NUM - 1 - counter; i++)
    {
        for (int j = 0; j < PRODUCTS_NUM - i - 1 - counter; j++)
        {
            if (products[j].price > products[j + 1].price)
            {
                swap(products[j], products[j + 1]);
            }
        }
    }
}

int u;
string** Shop::findProduct(string product)
{
    u = 0;
    for (int i = 0; i < PRODUCTS_NUM; i++)
    {
        if (list[i][1] == product)
        {
            productList[u] = list[i];
            u++;
        }
    }
    if (u == 0)
    {
        cout << "Такого продукта нет" << endl;
    }
    return productList;
}

void Shop::printProduct(string** productList)
{
    for (int i = 0; i < u; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << productList[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

Product* Shop::buy(int id)
{
    int j = 0;
    Product* newProducts = new Product[PRODUCTS_NUM - counter];
    for (int i = 0; i < PRODUCTS_NUM; i++)
    {
        if (products[i].id == id)
        {
            money += products[i].price;
            ++counter;
        }
        else
        {
            newProducts[j++] = products[i];
        }
    }
    if (j == PRODUCTS_NUM - counter)
    {
        cout << "Продукта с таким ID нет. " << endl;
    }
    products = newProducts;
    return products;
}


Product* Shop::buy(string name)
{
    Product* newProduct = new Product[PRODUCTS_NUM - counter];
    int j = 0;
    int pr;

    sortedProducts();
    for (int i = 0; i < PRODUCTS_NUM; i++)
    {
        if (products[i].name == name)
        {
            pr = products[i].id;
            money += products[i].price;
            ++counter;
            break;
        }
    }
    for (int i = 0; i < PRODUCTS_NUM; i++)
    {
        if (products[i].id != pr)
        {
            newProduct[j++] = products[i];
        }
    }
    products = newProduct;

    return products;

}

float Shop::getMoney() { return money; }

int Shop::getCounter() { return counter; }

