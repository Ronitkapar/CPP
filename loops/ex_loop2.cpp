// Find the sum of numbers from 1 to n using while loop.

#include <iostream>
using namespace std;

int main(){

    int i=1, n, sum = 0;
    
    cout<<"What's the value of n" <<endl;
    cin>> n; //n=5

    while(i<=n){
        sum +=i;
        i++;
    }cout<<"sum = "<<sum<<endl;

    return 0;
}