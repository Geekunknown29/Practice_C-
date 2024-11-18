#include <iostream>
#include <iomanip>
using namespace std ;
int main () {
    
    int a ;
    float b ;
    double c = 5.0 ;
    a = 3 ;
    b = 5 ;
    cout <<"value of a = " << a << endl ;
    cout << "value of b = " << b << endl ;
    cout << "value of c = " << c << endl ;
    
    cout << "a > b : " << ( a > b ) << endl ;
    cout << "a > c : " << (a > c ) << endl ;
    cout << "a < b : " << (a < b ) << endl ;
    cout << "a < c : " << (a < c ) << endl ;
    
    cout << "b >= c : " << (b >= c) << endl ;
    cout << "b <= c : " << (b <= c) << endl ;
    
    cout << "b >= c : " << (b >= c) << endl ;
    cout << "b <= c : " << (b <= c) << endl ;
    
    cout << "a == b : " << (a==b) << endl ;
    cout << "a == c : " << (a==c) << endl ;
    cout << "b == c : " << (b==c) << endl ;
    
    cout << "a != b : " << (a!=b) << endl ;
    cout << "a != c : " << (a!=c) << endl ;
    cout << "b != c : " << (b!=c) << endl ;
    return 0 ;
}
