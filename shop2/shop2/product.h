#pragma once
#include<string>
using namespace std;

class Product
{
public:
    int id;
    string name = " ";
    float price = 0;

    int getId();

    string* toString();
};
