#include <iostream>
#include <iomanip>

using namespace std ;
int main(){
    int a;
    cout << "program to check the eligibility criteria for pension scheme " << endl ;
    cout << "enter your age : ";
    cin >> a ;
    

switch (a){
    case(a < 10):
    cout<< "too small"<< endl ;
    break
    
    case(11<=a<=17):
    cout<<"still not eligible, will be eligible soon to work"<< endl ;
    break

    case (18<=a<30):
    cout<<"its your age to work riht now? why you worrying about pension?"<<endl;
    break

    case (31<=a<50):
    cout<<"youre eligible for 30% pension"<<endl;
    break

    case (a>51):
    cout<<"youre eligible for full pension"<<endl;
    break
}

}