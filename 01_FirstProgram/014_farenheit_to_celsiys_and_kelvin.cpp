//Functionsand Prototypes - Converting Temperatures
//In this exercise you will create a program that will be used to convert Fahrenheit temperatures to Celsius and Kelvin temperatures through the use of two functions.
//
//For this program, assume that temperature will be represented as a double value.
//
//Begin by defining the function prototypes for the functions fahrenheit_to_celsiusand fahrenheit_to_kelvin which are both passed a double valueand return a double value.
//
//Now, at the bottom of the file, write the full definitions of both functions.
//
//The function fahrenheit_to_celsius is passed a Fahrenheit temperatureand returns a rounded Celsius temperature.You may use the <cmath> function round in order to round the return value.The formula to convert Fahrenheit to Celsius is(5.0 / 9.0) * (temperature - 32).
//
//The function fahrenheit_to_kelvin is passed a Fahrenheit temperature and returns a rounded Kelvin temperature.The formula to convert Fahrenheit to Kelvin is(5.0 / 9.0) * (temperature - 32) + 273.
//
//Remember the rules of PEMDAS when defining the body of your functions.
//
//Now, from the temperature_conversion function, declareand initialize the variables celsius_temperatureand kelvin_temperature by calling the appropriate functions which you have just definedand passing the variable fahrenheit_temperature.
//
//You do not need to declare or initialize fahrenheit_temperature as it is already available to you as a parameter of the temperature_conversion function.



#include <iostream>
#include <cmath>
using namespace std;


//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR FUNCTION PROTOTYPES BELOW THIS LINE----

double fahrenheit_temperature{ 96 };

double fahrenheit_to_celsius(double temp);
double fahrenheit_to_kelvin(double temp);



//----WRITE YOUR FUNCTION PROTOTYPES ABOVE THIS LINE----
//----DO NOT MODIFY THE CODE BELOW THIS LINE----

void farenheit_to_cel_and_kel() {

    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR FUNCTION CALLS BELOW THIS LINE----
    double celsius_temperature{ 0 };
    double kelvin_temperature{ 0 };

    celsius_temperature = fahrenheit_to_celsius(fahrenheit_temperature);
    kelvin_temperature = fahrenheit_to_kelvin(fahrenheit_temperature);


    //----WRITE YOUR FUNCTION CALLS ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----

    cout << "The fahrenheit temperature " << fahrenheit_temperature << " degrees is equivalent to " << celsius_temperature << " degrees celsius and " << kelvin_temperature << " degrees kelvin.";
}

double fahrenheit_to_celsius(double temperature) {
    return round((5.0 / 9.0) * (temperature - 32));
}
double fahrenheit_to_kelvin(double temperature) {
    return round((5.0 / 9.0) * (temperature - 32) + 273);
}