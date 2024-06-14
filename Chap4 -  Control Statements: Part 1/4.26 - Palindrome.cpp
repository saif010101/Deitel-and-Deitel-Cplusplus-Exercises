#include <iostream>

using namespace std;


int main()
{
    // a = first_digit
    // b = second_digit
    // d = second_last_digit
    // e = last_digit

    int a,e,b,d;
    int num;

    // ask user for input
    cout << "Enter number : ";
    cin >> num;

    // seperate last digit
    e = num % 10;

    // seperate first digit
    a = num / 10000;


    // check if first and last digit match
    if (a == e)
    {
        // remove first and last digit
        num = num / 10;
        num = num % 1000;

        // seperate second last digit
        d = num % 10;

        // seperate second digit
        b = num / 100;


        if (b == d)
        {
            cout << "It is a palindrome number.\n";
        }

        else
        {
            cout << "It is not a palindrome number.\n";
        }

    }

    // agar pehla or akhri digit match na karein to
    else
    {
       cout << "It is not a palindrome number.\n";
    }

    return 0;
}
