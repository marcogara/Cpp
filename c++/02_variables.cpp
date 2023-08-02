# include <iostream>
# include <string>

using namespace std;

int a,b = 5; 

int main ()
{

    bool my_flag = false;   // singe line comment

    /* Multi 
        line comments
    */  

    a= 7;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "flag = " << my_flag << endl;
    cout << ("\n");
    my_flag = true; 
    cout << "a+b = " << a+b << endl;
    cout << "b-a = " << b-a << endl;
    cout << "flag = " << my_flag << endl;

    int test_int = 1223; 
    cout << test_int << endl;

    unsigned int positive;
    positive = b-a;
    cout << "b-a (unsigned) = " << positive << endl;



    cout << ("\n");


    cout << "Hello there! " << endl;

    cout << ("\n");
    system("pause");
        return(0);
}