# include <iostream>
# include <iomanip>
# include <cstring>
using namespace std ; 
int main () {

    int n, flag, sum, i;
    
    cout << "input n : " ;
    cin >> n ;

    flag = 0;
    i = 0;
    sum = 0;
    for ( i = 0 ;i<=n ;i = i+1) {
        if (i %2 == 0 ) {
            cout << "i" << i << endl ;
            sum = sum+i ;
            cout << "sum : " << sum << endl ;
        }
    }

    return 0 ;
}