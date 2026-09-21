#include <iostream>
#include "Carr.h"
using namespace std;

int main()
{
    Car car("BMW", 250, 50);
    car.PrintInfo();
    cout << endl;
    car.StartEngine();
    car.IncreaseSpeed(50);
    car.IncreaseSpeed(50);
    car.PrintInfo();
    cout << endl;
    car.DecreaseSpeed(30);
    car.PrintInfo();
    cout << endl;
    car.Refuel(20);
    car.PrintInfo();
    return 0;
}