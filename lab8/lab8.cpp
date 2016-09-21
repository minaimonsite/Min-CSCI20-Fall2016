#include <iostream> // Created by Min Site
using namespace std; // Kilograms to pound convert
double toPound (double kilo)
{
    double pound = kilo * 2.2;
    return pound;
}
double toKilo (double pound)
{
    double kilo = pound / 2.2;
    return kilo;
}

int main ()
{
    double kilo = 0;
    double pound = 0;
    cout << "Enter Kilograms: " <<endl;
    cin >> kilo;
    cout << kilo << " Kilograms is equal to " << toPound (kilo) << " pounds" << endl;
    
    cout << "Enter Pounds: " << endl;
    cin >> pound;
    cout << pound << "Pounds is equal to " << toKilo(pound) << " kilograms";
    return 0;
}