# include <iostream>

using namespace std;

// #define AGE_LENGTH 4
const int AGE_LENGTH = 4;

int age[AGE_LENGTH];
float temperature[] = {31.5,24.4,21.2};

int main ()
{
    age[0] = 25;
    age[1] = 20;
    age[2] = 19;
    age[3] = 19;

    cout << "The age array has " << AGE_LENGTH << " elements" << endl;
    cout << "Age[0] = " << age[0] << endl;
    cout << "Age[1] = " << age[1] << endl;
    cout << "Age[2] = " << age[2] << endl;
    cout << "Age[3] = " << age[3] << endl;
    cout << endl;
    cout << "Temp[0] = " << temperature[0] << endl;
    cout << "Temp[1] = " << temperature[1] << endl;
    cout << "Temp[2] = " << temperature[2] << endl;

    system("pause");
        return(0);
}