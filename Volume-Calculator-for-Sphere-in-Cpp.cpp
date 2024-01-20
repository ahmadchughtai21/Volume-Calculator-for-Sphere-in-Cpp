#include <iostream>
using namespace std;

int main()
{
    const float pi = 3.14;
    float volume, radius;

    cout << "Enter Radius : ";
    cin >> radius;

    volume = (4 * pi * radius * radius * radius) / 3;

    cout << "The Volume of the sphere is : " << volume;
    return 0;
}