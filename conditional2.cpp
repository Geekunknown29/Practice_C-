#include <iostream>
#include <iomanip>

using namespace std ;

int main() {

    int age ;
    char uni ;

    cout << "enter your age : " ;
    cin >> age ;
    cout << "enter your universit's name  : " ;
    cin >> uni ;


    if(age >0){
        cout << "1st if condition worked";
    
    }
    if (age > 10) {
        cout << "2nd if statement worked " ;
    }
    return 0;
}
