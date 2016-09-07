#include <iostream>
using namespace std;
int main () 
{ 
    int input = 0;
    int change = 0;
    int quarters = 0;
    int dime = 0;
    int nickel = 0;
    int penny = 0;
    cout << "Enter your amount in cents ";
    cin >> input;
    
    quarters = input / 25;
    change = input % 25;
    
    dime = change / 10;
    change = change % 10;
    
    nickel = change / 5;
    change = change % 5;
    
    penny = change / 1;
    
    cout << "Quaters " << quarters << endl << "Dimes " << dime << endl;
    cout << "Nickels " << nickel << endl << "Penny " << penny;
    return 0;
    
}