//Calculates BMI and Displays a weight status
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//Functions to Input Height and Weight Data from User
float getdata( float & Weight, float & Height )
    {
        cout << "Input your Weight " << endl;
        cin >> Weight;
        cout << "Input your Height " << endl;
        cin >> Height;
        cout << endl;
        return ( Weight + Height );
    }


//Function to Calculate BMI using input
float calcBMI( float & Weight, float & Height )
    {
        //Fixed-point notation, 3 digits after the decimal point
        cout.setf(ios::fixed);
        cout.precision(3);
        return Weight/(pow(Height, 2));
    }

//Void Function to Output Fitness Results
void displayFitnessResults( float BMI )
    {
        cout << "Your Fitness Result are: ";
        if ( BMI < 18.5 )
            {
                cout << "Underweight " << endl;
            }
        if ( BMI >= 18.5 && BMI <= 24.9 )
            {
                cout << "Healthy " << endl;
            }
        if ( BMI >= 25.0 && BMI <= 29.9 )
            {
                cout << "Overweight " << endl;
            }
        if ( BMI >= 30.0 )
            {
                cout << "Obese " << endl;
            }

    }
//Main Function
int main ()
{
    //Declaring Assigning Variables
    float Weight, Height, BMI;

    //Assigning Variables to values
    getdata( Weight, Height );
    BMI = calcBMI(Weight, Height);


    cout << "Your BMI is " << BMI <<endl;
    displayFitnessResults(BMI);

    return 0;
}
