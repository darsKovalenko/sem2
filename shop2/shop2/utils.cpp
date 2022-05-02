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
    cout << "������� ID ��������: " << endl;
    cin >> id;
    return id;
}

string getName()
{
    string name;
    cout << "������� �������� ��������: " << endl;
    cin >> name;
    return name;
}

void menu()
{
    cout << "��������, ��� ������ �������: " << endl
        << "1. ���������� ��������" << endl
        << "2. ������� �������" << endl
        << "3. ������ �������" << endl
        << "4. ���������� ���-�� �����" << endl
        << "5. ���������� ���-�� ��������� �������" << endl
        << "6. �������, �� ��������" << endl;
}


