//  #include <iostream>
//  using namespace std;

//  int main(){
//      int a = 5;
//      if(a>=0){
//          cout<<"It is Positive number" <<endl;
//      } else{
//          cout<<"It is Negative number" <<endl;
//      }

//      return 0;
//  }


//  #include <iostream>
//  using namespace std;

//  int main(){
//      int a;

//     cout<<"ENTER THE NUMBER"<<endl;
//      cin>> a;

//      if(a>=0){
//          cout<<"It is Positive number" <<endl;
//      } else{
//          cout<<"It is Negative number" <<endl;
//      }

//      return 0;
//  }



// // TO DIFFERENCTATE BETWEEN WHO IS ELIGABLE TO VOTE

// #include <iostream>
// using namespace std;

// int main(){
//     int age;
//     cout<<"ENTER YOUR AGE " <<endl;
//     cin>> age;
//     if(age>=18){
//     cout<<"YOU ARE ELIGABLE TO VOTE" <<endl;
//     }else{
//         cout<<"YOU ARE NOT ELIGABLE TO VOTE"<<endl;
//     }
//     return 0;
// }

// // TO FIND WHEATHER THE NUMBER IS ODD OR EVEN
// #include <iostream>
// using namespace std;

// int main(){

//     int a;
//     cout<<"ENTER YOUR NUMBER "<<endl;
//     cin>>a;
     
//     if(a%2==0){
//         cout<<"IT IS EVEN NUMBER"<<endl;
//     }else{
//         cout<<"IT IS ODD NUMBER" <<endl;
//     }
//     return 0;
// }


// TO DETERMINE IF THE GIVEN CHARACTER IS UPPWECASE OR LOWERCASE:

#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter the character: "<<endl;
    cin>>ch;

    if(ch>= 'a' && ch<='z'){
        cout<<"LOWER"<<endl;
    }else{
        cout<<"UPPER"<<endl;
        }
    return 0;
}
