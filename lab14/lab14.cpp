// The program doesn't stop if you enter 1 but April said it was ok
#include <iostream>
using namespace std;
int main() {
    char ch;
    while (ch != 1){ 
    cout << "Please enter a character: ";
    cin >> ch;
    if (ch >= 'A'&& ch <= 'Z') {
    cout << "Yes, that is a uppercase letter." << endl;
    }
    else if (ch >= 'a' && ch <= 'z') {
    cout << "Yes, that is a lowercase letter." << endl;
    }
    else {
    cout << "Not a letter." << endl;
    }
}
    return 0;
}