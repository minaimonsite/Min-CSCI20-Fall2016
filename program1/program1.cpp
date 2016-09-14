//Created by Min Ai Mon Site
//9.12.2016
//Calculates Calories expended in lifetime and the numbers of sandwiches equal to the calories expended
#include <iostream>
#include <string>
using namespace std;
int main () {
    string name = "";
    int callifetime, numSandwiches, age, calperyear;
    
    cout << "Enter User Name: ";
    cin >> name;
    cout << "Enter User Age: ";
    cin >> age;
    
    callifetime = (age*365)*2000;
    numSandwiches = callifetime/354;
    calperyear = callifetime/age;
    
    cout << "Name  " << " Age  " << " Calories expended  " << " Number of  " << " Calories per year" << endl;
    cout << "             in lifetime  " << "       sandwiches  " << " on average" << endl;
    cout << name << "    " << age << "       " << callifetime << "          " << numSandwiches << "          " << calperyear;
    
   return 0; 
}