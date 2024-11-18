#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;
int main()
{

    int a, b;
    int k = 0;

    char op;

    cout << "write your operation here : ";
    cin >> a >> op >> b;

    switch (op)
    {
    case '+':
        k = a + b;
        break;

    case '-':
        k = a - b;
        break;

    case '*':
        k = a * b;
        break;

    case '/':
        if (b != 0)
        {
            k = a / b;
        }
        else
        {
            cout << "denominator is zero";
            return 1;
        }

        break;

    default:
        cout << "enter a valid operator";
    }

    cout << "answer to the desired operator is  : " << k;
    return 0;
}