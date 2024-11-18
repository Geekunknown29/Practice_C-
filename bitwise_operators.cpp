# include <iostream>
# include <iomanip>
using namespace std ;
int main () {

    int a,b,c,d ;
    a = 2 ;
    b = 3 ;
    c = 8*10^3 ;
    d = 67 ; 

    // bit wise AND
    cout << "a & b : " << (a&b) << endl ;
    cout << "c & d : " << (c&d) << endl ;
    cout << "a & d : " << (a&d)       << endl ;


    // bitwise OR
    cout << "a or b : " << (a | b) << endl ;
    cout << "b or d : " << (b | d) << endl ;
    cout << "d or c : " << (d | c) << endl ; 
    return 0 ;
}