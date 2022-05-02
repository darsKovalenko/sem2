#include <iostream>
#include "product.h"
#include "shop.h"

using namespace std;

Product* generateProducts()
{
    string list[] = { "milk", "apples", "stone", "pilaf", "cow", "potato", "pen", "phone", "water", "stickers" };
    Product* products = new Product[PRODUCTS_NUM];
    for (int i = 0; i < PRODUCTS_NUM; i++)
    {
        products[i].getId();
        products[i].name = list[rand() % 10];
        products[i].price = rand() % 1000;
    }
    return products;
}

int getID()
{
    int id;
    cout << "Введите ID продукта: " << endl;
    cin >> id;
    return id;
}

string getName()
{
    string name;
    cout << "Введите название продукта: " << endl;
    cin >> name;
    return name;
}

void menu()
{
    cout << "Выберите, что хотите сделать: " << endl
        << "1. Посмотреть продукты" << endl
        << "2. Выбрать продукт" << endl
        << "3. Купить продукт" << endl
        << "4. Посмотреть кол-во денег" << endl
        << "5. Посмотреть кол-во проданных товаров" << endl
        << "6. Спасибо, до свидания" << endl;
}


