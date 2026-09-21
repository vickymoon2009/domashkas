#include "Car.h"
using namespace std;
Car::Car()
{
    brand = "Unknown";
    currentSpeed = 0;
    maxSpeed = 0;
    fuel = 0;
    engineStarted = false;
}
Car::Car(string br, int maxSp, double f)
{
    brand = br;
    currentSpeed = 0;
    maxSpeed = maxSp;
    fuel = f;
    engineStarted = false;
}
void Car::StartEngine()
{
    engineStarted = true;

    cout << "Engine started!" << endl;
}
void Car::IncreaseSpeed(int value)
{
    if (!engineStarted)
    {
        cout << "Engine is not started!" << endl;
        return;
    }

    if (fuel <= 0)
    {
        cout << "No fuel!" << endl;
        return;
    }

    if (currentSpeed + value > maxSpeed)
    {
        currentSpeed = maxSpeed;
    }
    else
    {
        currentSpeed += value;
    }

    fuel -= 1;

    if (fuel < 0)
    {
        fuel = 0;
    }
}
void Car::DecreaseSpeed(int value)
{
    currentSpeed -= value;

    if (currentSpeed < 0)
    {
        currentSpeed = 0;
    }
}
void Car::Refuel(double amount)
{
    fuel += amount;
}

void Car::PrintInfo()
{
    cout << "Brand: " << brand << endl;
    cout << "Current speed: " << currentSpeed << " km/h" << endl;
    cout << "Maximum speed: " << maxSpeed << " km/h" << endl;
    cout << "Fuel: " << fuel << " l" << endl;

    if (engineStarted)
        cout << "Engine: started" << endl;
    else
        cout << "Engine: stopped" << endl;
}