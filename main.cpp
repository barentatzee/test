//Program to calculate speed using formula speed=finalVelocity^2-initialVelocity^2 / 2a

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float acceleration, iVelocity, fVelocity, speed;
    cout << "Enter the initial velocity figure" << endl;
    cin >> iVelocity;
    cout << "Enter the acceleration rate figure" << endl;
    cin >> acceleration;
    cout << "Enter the final velocity figure" << endl;
    cin >> fVelocity;
    speed = (pow(fVelocity,2) - pow(iVelocity,2)) / (2*acceleration);
    cout << "The speed is " << speed << endl;
    return 0;
}
