// Find the sum of all the odd numbers from 1 to n.

#include <iostream>
using namespace std;

int main(){
    
    int sum = 0, n;

    cout<<"What's n?? "<<endl;
    cin>> n;

    for(int i = 1; i <= n ; i++ ){
        if(i % 2 != 0){
            sum +=i;
        }
    }cout<<"sum = "<<sum<<endl;

    return 0;
}