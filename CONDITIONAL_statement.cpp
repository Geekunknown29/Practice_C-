#include <iostream>
#include <iomanip>
using namespace std ;
int main () {

    int age ;
    char uni ;

    cout <<"what is your age : " ;
    cin >> age ;

    cout << "what is your university's name : " ;
    cin >> uni ;

    if (age < 18) {
        cout << "you're a minor. "<< endl ;
        
        if (uni !='V') {
            cout << "why arent  you studing further " << endl ;

        } else {
        cout << "youre good to go " << endl ;
        }
    }else if (age >= 18){
        cout << "youre not a minor" << endl ;
        
        if (uni =='V') {
            cout << "youre on right Path!!!"<< endl ;
        } else if (bool(uni) != 0) {
            cout << "good to go !!!"<< endl ;
        }else {
            cout << "why is it so ?" << endl ;
        
        }
    
    }else {
        cout << "youre not eligible"<< endl ;
    
    }
    return 0 ;
    
}