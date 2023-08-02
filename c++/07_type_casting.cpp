# include <iostream>
# include <cstdint>

using namespace std;

float flt = -7.44f;
int32_t sgn ;
uint32_t unsgn;

int main ()
{

    sgn = flt;
    unsgn = sgn;

    cout << "float: " << flt << endl;
    cout << "int32: " << sgn << endl;
    cout << "uint32: " << unsgn << endl;
    cout << endl;

    int fahrenheit = 100; 
    int celsius; 

    celsius = ((float)5 / 9.0) * (fahrenheit -32);

    cout << "Fahrenheit: " << fahrenheit << endl; 
    cout << " Celsius: " << celsius << endl;
    cout << endl;

    float weight = 10.99;

    cout << "Float               : " << weight << endl;
    cout << "Integer part        : " << (int)weight << endl;
    cout << "Fractional part     : " << (weight - (int)weight )* 10000 << endl;    

    system("pause");
        return(0);
}