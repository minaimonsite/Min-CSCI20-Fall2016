#include <iostream>
#include <string>
using namespace std;
int main () {
struct MonsterStruct {
    string Name;
    string Head;
    string Eyes;
    string Ears;
    string Nose;
    string Mouth;
};
    MonsterStruct monster1;
    MonsterStruct monster2;
    MonsterStruct monster3;
    MonsterStruct monster4;
    
    monster1.Name = "";
    monster1.Head = "";
    monster1.Eyes = "";
    monster1.Ears = "";
    monster1.Nose = "";
    monster1.Mouth = "";
    
    cout << "Enter Your Monster's Name: " << endl;
    cin >> monster1.Name;
    cout << "Head: " << endl;
    cin >> monster1.Head;
    cout << "Eyes: " << endl;
    cin >> monster1.Eyes;
    cout << "Ears: " << endl;
    cin >> monster1.Ears;
    cout << "Nose: " << endl;
    cin >> monster1.Nose;
    cout << "Mouth: " << endl;
    cin >> monster1.Mouth;
    
    cout << monster1.Name << " : " << ", " << monster1.Head << ", " << monster1.Eyes << ", " << monster1.Ears << ", " << monster1.Nose << ", " << monster1.Mouth << endl;
    
    monster2.Name = "";
    monster2.Head = "";
    monster2.Eyes = "";
    monster2.Ears = "";
    monster2.Nose = "";
    monster2.Mouth = "";
    
    cout << "Enter Second Monster's Name: " << endl;
    cin >> monster2.Name;
    cout << "Head: " << endl;
    cin >> monster2.Head;
    cout << "Eyes: " << endl;
    cin >> monster2.Eyes;
    cout << "Ears: " << endl;
    cin >> monster2.Ears;
    cout << "Nose: " << endl;
    cin >> monster2.Nose;
    cout << "Mouth: " << endl;
    cin >> monster2.Mouth;
    
    cout << monster2.Name << " : " << ", " << monster2.Head << ", " << monster2.Eyes << ", " << monster2.Ears << ", " << monster2.Nose << ", " << monster2.Mouth << endl;
    
    monster3.Name = "Baron";
    monster3.Head = "3 headed";
    monster3.Eyes = "8 eyes";
    monster3.Ears = "None";
    monster3.Nose = "None";
    monster3.Mouth = "Big Mouth";
    
     cout << monster3.Name << " : " << ", " << monster3.Head << ", " << monster3.Eyes << ", " << monster3.Ears << ", " << monster3.Nose << ", " << monster3.Mouth << endl;
    
    return 0;

}