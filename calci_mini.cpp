#include<iostream>
#include<iomanip>
#include<cstring>
#include<bits/stdc++.h>

using namespace std ;
int main() {
    int n;
    cout<<"this is a simple calci which is capable of doing some basic tasks"<<endl ;
    cout<<"Enter no of operations";
    cin>>n;
    
    while(n--){
    int a, b, d;
    string op;
    cin >> a >> op >> b ; 
    if (op == "+"){
        d = a+b;
        cout<<"here is your desired outcome : "<< d <<endl ;
    }
    else if (op == "-"){
        d = a-b;
        cout<<"here is your desired outcome : "<< d <<endl ;
    }
    else if (op == "*"){
        d = a*b;
        cout<<"here is your desired outcome : "<< d <<endl ;
    }
    else if (op == "/"){
        d = a/b;
        cout<<"here is your desired outcome : "<< d <<endl ;
    }
    else if(op == "power" or op == "^"){
        d = pow(a,b);
        cout<<"here is your desired outcome : "<< d <<endl ;
    }
    else{
        cout<< "Enter valid Char";
    }
    }
}
