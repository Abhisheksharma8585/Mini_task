#include <iostream>
using namespace std;

class CBSE_PERCENTAGE_MAKER
{
private:
    // variable
    float total = 0;
    int total_marks;
    int No_subject;
    int subject[5];
    float grand_total;

public:
    // Getter Function
    void getter()
    {
        cout << "How many marks is each paper (100, 80): ";
        cin >> total_marks;
        cout << "How many Subject are there in total (Ex-5,6,7,8): ";
        cin >> No_subject;

        for (int i = 0; i < 5; i++)
        {
            cout << "Enter s" << i + 1 << " marks: ";
            cin >> subject[i];
        }
        for (int i = 0; i < 5; i++)
        {
            total = total + subject[i];
        }
        calculation();
    }

    // Calculation function
    void calculation()
    {
        grand_total = total / No_subject;
        display();
    }

    // Display Function
    void display()
    {
        cout << "You Total Precentage is= " << grand_total << "%";
        cout << endl;
    }
};

int main()
{
    cout << "======== WELCOME TO THE CBSE PERCENTAGE MAKER ========" << endl;
    CBSE_PERCENTAGE_MAKER sms;  // Object Creating 
    sms.getter();     // function Calling         

    cout << "Thanks You";
}