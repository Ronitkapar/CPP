// Convert binary number into decimal number

#include <iostream>
#include <cmath>
using namespace std;

int binTOdeci(int binary)
{

    int power = 0;
    int deci = 0;
    while (binary > 0)
    {

        int remainder = binary % 10;
        deci += remainder * pow(2, power);
        binary /= 10;
        power += 1;
    }
    return deci;
}

int main()
{
    int binary = 100110;
    cout << binTOdeci(binary)<< endl;
    return 0;
}