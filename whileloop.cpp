#include <iostream>
#include <iomanip>

using namespace std ;
int main () {

    int a = 1 ;
    int flag = 0 ;
    while (flag < 7) {
        cout << "my name is : " << flag << endl  ;
        flag ++ ;/// possible entities with same work are :        flag ++ , flag +=1 , flag = flag+1
    }
    cout << flag ;
    return 0 ;
}