// Check if the given number is prime or not.

#include <iostream>
using namespace std;

int main(){
    bool isprime = true;
    int n = 11;
    for(int i = 2; i <= n - 1; i++){
        if(n % i == 0){
            isprime = false;
            break;
        }
    }
    if (isprime && n > 1){
        cout << "It is a prime number!\n";
    } else {
        cout << "It is not a prime number!\n";
    }
    return 0;
}