#include <iostream>
using namespace std;
class TemperatureConverter {

    public: 
        TemperatureConverter ();
        TemperatureConverter (double kelvin);
        double SetTempFromCelcius ( double celcius);
        double SetTempFromFahrenheit (double fahrenheit);
        void SetTempFromKelvin (double kelvin);
        void PrintTemps ();
        
        double GetTempAsCelcius () ;
        double GetTempAsFahrenheit () ;
        double GetTempFromKelvin () const;   
       
        private :
        double tempKfromC;
        double tempKfromF;
        double tempK;
        double tempC;
        double tempF;


};
TemperatureConverter::TemperatureConverter() {
    tempK = 0;

    return;
}
TemperatureConverter::TemperatureConverter(double kelvin) {
    tempK = kelvin;
    return;
}
void TemperatureConverter::SetTempFromKelvin(double kelvin) {
    tempK = kelvin;
    return;
}
double TemperatureConverter::SetTempFromCelcius (double celcius) {
    tempC = celcius;
    return tempKfromC = celcius + 273.15;
}
double TemperatureConverter::SetTempFromFahrenheit (double fahrenheit) {
    tempF = fahrenheit;
    return tempKfromF = (5 * (tempF -32)/9) + 273.15;
}
double TemperatureConverter::GetTempFromKelvin () const {
    return tempK;
}
double TemperatureConverter::GetTempAsCelcius () {
    return tempC = tempK - 273.15;
} 
double TemperatureConverter::GetTempAsFahrenheit () {
    return tempF = (9.0 / 5) * (tempK - 273.15) + 32;
}
void TemperatureConverter::PrintTemps () {
    cout << "Temperature in Kelvin: " << tempK << endl;
    cout << "Temperature in Kelvin from Celcius: " << tempKfromC << endl;
    cout << "Temperature in Kelvin from Fahrenheit: " << tempKfromF << endl;
    return;
}
int main ()
{
    TemperatureConverter temp1;
    TemperatureConverter temp2(274);
    
    temp1.PrintTemps();
    temp2.PrintTemps();
    
    temp1.SetTempFromKelvin(400.15);
    cout << temp1.GetTempFromKelvin() <<endl;
    temp1.PrintTemps();
    
    temp2.SetTempFromCelcius(32);
    cout << temp2.GetTempAsCelcius() << endl;
    temp2.PrintTemps();
    
    temp2.SetTempFromFahrenheit(32);
    cout << temp2.GetTempAsFahrenheit() << endl;
    temp2.PrintTemps();
    
    return 0;
}



