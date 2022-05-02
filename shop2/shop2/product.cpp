#include "product.h"
#include <time.h>

int Product::getId()
{ 
    static int num = time(0);
    id = num++;
    return id;
}


string* Product::toString()
{
    string* product = new string[3];
    product[0] = to_string(id);
    product[1] = name;
    product[2] = to_string(price);
    return product;
}

