#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    cout << "Enter operator for performing operation on operands" << endl;
    char op;
    cin >> op;
    for(int i=0;i<1;i++)
    {
        if (op == '+')
        {
            cout << a + b << endl;
        }
        else if (op == '-')
        {
            cout << a - b << endl;
        }
        else if (op == '*')
        {
            cout << a * b << endl;
        }
        else if (op == '/')
        {
            cout << a / b << endl;
        }
    }
    {
        cout << "Enter valid operator" << endl;
    }
    return 0;
}