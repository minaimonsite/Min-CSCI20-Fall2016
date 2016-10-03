/* Min Site 
10.3.2016
csci20
*/
#include <iostream>
using namespace std;
int main () {
    int suzyAge = 25;
    int johnAge = 21;
    cout << "The equal suzyAge is less than johnAge is: " << (suzyAge < johnAge) << endl;
    
    int x = 7;
    int y = 7;
    cout << "The equation (x >= y) is: " << (x >= y) <<endl;
     
    int a = 1;
    int b = 9;
    cout << "The equation (a==b) is: " << (a == b) <<endl;
    
    int limit = 20;
    int count = 10;
    cout << "The equation ((limit*count)/2 > 0) is: "<< ((limit*count)/2 > 0) << endl;
    
    int t = -4;
    int z = 0;
    cout << "The equation (t > 5 || z < 2) is: " << (t > 5 || z < 2) << endl;

    int variable = -5;
    cout <<"The equation (!(variable >0)) is: " << (!(variable >0)) << endl ; 
    
     a = 16;
    cout << "The equation (a/4 < 8 && a >= 4) is: " << (a/4 < 8 && a >= 4) << endl;
    
     x = -2;
     y = 5;
    cout <<"The equation (x*y < 10 || y*z < 10) is: " << (x*y < 10 || y*z < 10) << endl;
    
    int j = -2;
    int k = 5;
    int l = 4;
    cout << "The equation (!(j*l < 10) || y/x * 4 < y *2) is: " << (!(j*l < 10) || y/x * 4 < y *2) << endl;

    return 0;
}