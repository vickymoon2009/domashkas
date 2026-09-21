#pragma once
#include <iostream>
#include <string>
using namespace std;
class Car
{
private:
    string brand;
    int currentSpeed;
    int maxSpeed;
    double fuel;
    bool engineStarted;

public:
    Car();
    Car(string br, int maxSp, double f);
    void StartEngine();
    void IncreaseSpeed(int value);
    void DecreaseSpeed(int value);
    void Refuel(double amount);
    void PrintInfo();
};