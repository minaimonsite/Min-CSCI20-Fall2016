#include <iostream>
using namespace std;
class Converter {
    double D; 
    public:
        Converter();
        Converter(double dist);
        void Setdistance(double dist);
        
        double Getmiles();
        double Getmeters();
        double Getyards();
        double Getfeet();
        double Getinches();
        
    
        
};
Converter::Converter(){
    D=0;
}
Converter::Converter(double dist){
    D=dist;
}
void Converter::Setdistance(double dist){
    D=dist;
    return;
}
double Converter::Getinches(){
    cout << "Enter the amount of inches (in decemal) to be converted: " <<endl;
    cin >> D;
    cout <<D << " inches is equal to " <<D/63360<< " miles, "<<D/39.3701<< " meters, "<<D/36 << " yards, " <<D/12<< " feet" <<endl;
}
double Converter::Getfeet(){
    cout << "Enter the amount of feet (in decemal) to be converted: " << endl;
    cin >>D;
    cout <<D << " feet is equal to "<<D/5280 << " miles, " <<D/3.28084<<" meters, "<<D/3<<" yards, "<<D*12<<" inches " << endl;
}
double Converter::Getmeters(){
    cout << "Enter the amount of meters (in decemal) to be converted: " << endl;
    cin >>D;
    cout <<D << " meters is equal to "<<D/1609.34<<" miles, "<<D*1.09361<<" yards, "<< D*3.28084<<" feet, "<<D*39.3701<<" inches" << endl;
}
double Converter::Getyards(){
    cout << "Enter the amount of yards (in decemal) to be converted: " << endl;
    cin >>D;
    cout <<D<< " yards is equal to "<<D/1760<<" miles, "<<D/1.09361<<" meters, "<<D*3<<" feet, "<<D*36<<" inches " << endl;
}
double Converter::Getmiles(){
    cout << "Enter the amout of miles (in decemal) to be converted: "<<endl;
    cin >> D;
    cout <<D <<" miles is equal to "<<D*1609.34<<" meters, "<<D*1760<<" yards, "<<D*5280 <<" feet, " <<D*63360 <<" inches "<< endl;
}
int main (){
    Converter dst1;
    dst1.Getmiles();
    dst1.Getmeters();
    dst1.Getyards();
    dst1.Getfeet();
    dst1.Getinches();
    return 0;
}