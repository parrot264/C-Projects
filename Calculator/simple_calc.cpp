#include <iostream>
using namespace std;


int main()
{
    int num;
    int num2;
    char op;
    int sum;

    cout << "Hi Welcome to my simple calc: \n";
    cout << "First choose your first num: ";
    cin >> num;
    cout << "Now choose your second number: ";
    cin >> num2;
    cout << "Choose the op you want to do +,-,/,%,* \n";
    cin >> op;

    
    switch (op)
    {
        case '+':
            sum = num + num2;
            cout << "resault: " << sum;
            break;
        case '-':
            sum = num + num2;
            cout << "resault: " << sum;
            break;
        case '/':
            sum = num / num2;
            cout << "resault: " << sum;
            break;
        case '%':
            if (num2 != 0) {
                sum = num % num2;
                cout << "resault: " << sum;
            }
            else {
                cout << "You can't modulo by zero";
            }
            break;
        case '*':
            sum = num * num2;
            cout << "resault: " << sum;
            break;
        default:
            cout << "unrecognized operation";
            break;
    }




    

}


