#include <iostream>
#include <string>
using namespace std;
int main () {
    string username = "";
    string status = "";
    double wages = 0.0;
    double taxWithheld = 0.0;
    double taxOwed;
    double agi;
        
    cout << "Enter your name: " << endl;
   getline (cin, username);
    cout << "Enter your filing status: " << endl;
    cin >> status;
    cout << "Enter wages: " << endl;
    cin >> wages;
    cout << "Enter the amount of tax withheld: " << endl;
    cin >> taxWithheld;
    
    if (status=="single"){
        agi = wages-10000;
    }
    else{
        agi = wages - 20000;
    }
    
    if (agi<=0){
        taxOwed = 0;
    }
    
    if (status=="single" && wages<=8925){
        taxOwed = agi*0.1;
    }
    else if (wages<=36250){
        taxOwed = 892.50+(0.15*(agi-8925));
    }
    else if (wages<=87850){
        taxOwed = 4991.25+(0.25*(agi-36250));
    }
    else if (wages>87850){
        taxOwed = 17891.25+(0.28*(agi-87850));
    }
    
    if (status=="married" && wages<=17850){
        taxOwed = agi*0.1;
    }
    else if (wages<=72500){
        taxOwed = 1785+(0.15*(agi-17850));
    }
    else if (wages>=72501){
        taxOwed = 9982.50 +(0.28*(agi-72500));
    }

    cout << "Name: " << username << endl;
    cout << "Total Gross Adjusted income: " << agi << endl;
    cout << "Total tax: " << taxOwed << endl;
    if (taxOwed>0){
        cout <<username <<" is entitled to a refund of: " << taxWithheld-taxOwed << "$" << endl;
    }
    else{
        cout << "Total Tax Owed: " << taxOwed-taxWithheld;
    }
    return 0;
}