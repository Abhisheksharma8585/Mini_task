#include <iostream>
using namespace std;

int main()
{
    float A;
    float B;
    char operation;

    while (true)
    {
        cout << "Value of A is: ";
        cin >> A;
        cout << "Value of B is: ";
        cin >> B;
        cout << "Enter your operation eg(+,-,*,/):";
        cin >> operation;

        switch (operation)
        {
        case '+':
            cout << "Sum is: " << A + B;
            break;
        case '-':
            cout << "Subtraction is: " << A - B;
            break;
        case '*':
            cout << "Product is: " << A * B;
            break;
        case '/':
            cout << "Division is: " << A / B;
            break;
        case 5:
            cout << "Exiting program...\n";
            return 0;
        default:
            cout << "Invalid choice! Please try again.\n";
        }
        cout << endl;
    }

    cout << "Thanks You";
}