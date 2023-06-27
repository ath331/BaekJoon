#include <iostream>
using namespace std;

int main() {
    int burgers[3];
    int beverages[2];
    int cheapest_burger = 9999;
    int cheapest_beverage = 9999;
    for(int i = 0; i < 3; i++) {
        cin >> burgers[i];
        if(burgers[i] < cheapest_burger)
            cheapest_burger = burgers[i];
    }
    for(int i = 0; i < 2; i++)
    {
        cin >> beverages[i];
        if(beverages[i] < cheapest_beverage)
            cheapest_beverage = beverages[i];
    }
    cout << cheapest_beverage+ cheapest_burger - 50;
}