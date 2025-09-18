// convert from decimal to binary

#include <iostream>
using namespace std;

int decTObin(int decN)
{

    int binaryNUM = 0;
    int power = 1;

    while (decN > 0)
    {
        int remainder = decN % 2;
        decN = decN / 2;
        binaryNUM = binaryNUM + remainder * power;
        power *= 10;
    }
    return binaryNUM;
}

int main()
{
    int decN = 55;
    cout << decTObin(decN) << endl;
    return 0;
}