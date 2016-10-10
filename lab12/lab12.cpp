/* Min Site
   Csci20 Lab3.3
   10.10.2016
*/
#include <iostream>
#include <string>
using namespace std;
int main () {
    int game;
    int ps;
    int pc;
    int moba;
    cout << "What game do you play? (type 1 for console or 2 for pc) "<< endl;
    cin >> game;
    switch (game) {
        case 1:
        cout << "Is it X-box or PlayStation? (type 1 for X-box and 2 for PlayStationd)" << endl;
        cin >> ps;
        switch (ps) {
            case 1: 
            cout << "Try Fifa 17 XD";
            break;
            case 2:
            cout << "X-box is way better";
            break;
        }
        break;
        case 2:
        cout <<"Do you play online moba games or first person shooter ? (type 1 for moba or 2 for first person shooter)" << endl;
        cin >> pc;
        switch (pc) {
            case 1:
            cout << "Do you play League of legend or Dota2 ? (type 1 for LoL or 2 for Dota2)"<<endl;
            cin >> moba;
            switch (moba) {
                case 1:
                cout << "So do I (Adc main)" << endl;
                break;
                case 2:
                cout << "I like LoL better than Dota2" << endl;
                break;
            }
            break;
            case 2:
            cout << "I like moba games better" << endl;
            break;
        }
        break;
        default:
        cout << "Invalid answer" <<endl;
    }
    return 0;
}