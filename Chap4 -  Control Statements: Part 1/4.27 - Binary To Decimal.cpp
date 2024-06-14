#include <iostream>

using namespace std;

int main()
{
    int num;
    int sum = 0;    // to add the weightage of each digit
    int j = 1;

    // get input from user
    cout << "Please enter a number in binary : ";
    cin >> num;




    // jab tak number zero se bara hai
    while (num > 0)
    {
        // get right most digit
        int rm_digit = num % 10;


        // perform operations on that digit
        sum = sum + rm_digit * j;


        // remove last digit
        num = num / 10;
        // multiply j by 2
        j = j * 2;
    }

    // display the decimal equivalent
    cout << "The value of num in base10 = " << sum << endl;

    return 0;
}
