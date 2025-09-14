// Calculate the sum of numbers from 1 to n.

#include <iostream>
using namespace std;

int sumN(int n){
    int sum = 0;
    for(int i = 0; i <= n; i++){
        sum += i;
    }
    return sum;
}

int main(){
    cout<<sumN(3)<<endl;

    return 0;
}