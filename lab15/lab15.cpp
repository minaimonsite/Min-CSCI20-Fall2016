#include <iostream>
#include <string>
using namespace std;

int main () {
    string menu [10] ;
    int x = 0;
    menu [0] = "Mote Hinn Garr";
    menu [1] = "Laphat Thoat";
    menu [2] = "Hta Minn Kyaw";
    menu [3] = "Ginn Thoat";
    menu [4] = "White rice";
    menu [5] = "Kyay Oo";
    menu [6] = "Kyay Oo Si Chat";
    menu [7] = "Nan Yoe Pound Si Chat";
    menu [8] = "Pizza";
    menu [9] = "Buu Thee Kyaw";
    for (int i=0; i < 10 ; ++i){
        cout << menu[i] << endl;
    }
    do {
    cout << "Enter a number from 1-10 to order and enter -1 to exit:" << endl;
    cin >> x;
        cout << "The number " << x << " on the menu is ";
        cout << menu [x] << endl;
    }while (x != -1);
    return 0;
}#include <iostream>
#include <string>
using namespace std;

int main () {
    string menu [10] ;
    int order [10];
    int x = 0;
    menu [0] = "Mote Hinn Garr";
    menu [1] = "Laphat Thoat";
    menu [2] = "Hta Minn Kyaw";
    menu [3] = "Ginn Thoat";
    menu [4] = "White rice";
    menu [5] = "Kyay Oo";
    menu [6] = "Kyay Oo Si Chat";
    menu [7] = "Nan Yoe Pound Si Chat";
    menu [8] = "Pizza";
    menu [9] = "Buu Thee Kyaw";
    for (int i=0; i < 10 ; ++i){
        cout << menu[i] << endl;
    }
    do {
    cout << "Enter a number from 1-10 to order and enter -1 to exit:" << endl;
    cin >> x;
        cout << "The number " << x << " on the menu is ";
        cout << menu [x] << endl;
    }while (x != -1);
    return 0;
}