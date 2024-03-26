#include <iostream>
#include <string>
using namespace std;
void start()
{
    string input_choice = "yes";
    while (input_choice == "yes")
    {
        int temp_choice = 5;
        int num1, num2;
        cout << "Enter the values for the two numbers -> " << endl;
        cin >> num1;
        cin >> num2;
        while (temp_choice > 4 || temp_choice < 1)
        {
            cout << "Press One of the following choices: -\n1 -> Addition \n2 -> Subtraction \n3 -> Multiplication \n4 -> Division " << endl;
            cin >> temp_choice;
        }
        switch (temp_choice)
        {
        case 1:
            cout << num1 + num2 << endl;
            break;
        case 2:
            cout << num1 - num2 << endl;
            break;
        case 3:
            cout << num1 * num2 << endl;
            break;
        case 4:
            cout << num1 / num2 << endl;
            break;
        default:
            break;
        }
        cout << "Enter the words yes to run again [CASE SENSITIVE] " << endl;
        cin >> input_choice;
    }
    cout << "it was fun while it lasted ";
}
int main()
{
    start();
}