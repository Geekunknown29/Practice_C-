#include <iostream >
#include <iomanip>
# include <cstring>

using namespace std ;
int main () {

    string str = "";
    int N ;
    cout << "give a value to N : " ;
    cin >> N ;

    int flag = 0;
    int sum = 0 ;
    while (flag < N) {
        cout << "flag is : " <<flag <<endl; 
        cout <<"sum is : " <<  sum << endl ;
        
        flag += 1 ;
        sum = sum +flag ;
 

    }


    cout <<"your answer must be  : "<< sum ;


    return 0;
}