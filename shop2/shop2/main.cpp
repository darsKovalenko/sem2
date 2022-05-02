#include <iostream>
#include"product.h"
#include"shop.h"
#include"utils.h"
using namespace std;

int main()
{
    srand(time(0));
    setlocale(LC_ALL, "rus");

    Shop shop;

    enum action
    {
        showProducts = 1,
        getProduct,
        buyId,
        buyName,
        getMoney,
        getCounter,
        close
    };

    while (true)
    {
        menu();

        int num;
        cin >> num;

        switch (num)
        {
        case showProducts: shop.getProducts(); shop.printProducts(); break;

        case getProduct: cout << "Что хотите посмотреть? " << endl;
                         shop.printProduct(shop.findProduct(getName())); break;

        case buyId: shop.buy(getID()); break;

        case buyName: shop.buy(getName()); break;

        case getMoney: cout << "Количество заработанных денег: " << shop.getMoney() << endl; break;

        case getCounter: cout << "Количество проданных товарова: " << shop.getCounter() << endl; break;

        case close: exit(0); break;

        default:  cout << "упс, такой опции нет, попробуйте еще раз" << endl; break;
        }
    }
    return 0;
}