#include <iostream>

using namespace std;


    // STEPS :
    // read num
    // set factorial = 1
    // while num > 0:
    //      factorial = factorial * num
    //      num = num - 1
    // end while


int main()
{

    /*

    int num;
    int factorial = 1;

    // take input from user
    cout << "Enter a number : ";
    cin >> num;

    // jab tak number zero nahi hojata tab tak loop chalao
    while (num > 0)
    {
        factorial *= num;
        num = num - 1;
    }

    */



    /* part (b) of the 4.34

    int terms;  // number of terms in the summation
    double e = 1.0;   // estimated value of e

    // take input for number of terms
    cout << "Enter the accuracy i.e the number of terms : ";
    cin >> terms;

    // for every term in the summation
    while (terms > 0)
    {
        int factorial = 1;
        int num = terms;

        // calculates the factorial
        while (num > 0)
        {
            factorial *= num;
            num = num - 1;
        }

        // take reciprocal of the factorial
        e += (double)1 / (double)factorial;

        // decrement terms variable
        terms = terms - 1;
    }

    // display value
    cout << "The estimated value of e : " << e << endl;


    */



// ---------------------------------------------------------------------------


    // part (c) of the 4.34
    // we are calculating e^x using e^x = 1 + x/1! + x^2/2! + .......

    int terms;  // number of terms in the summation
    double e = 1.0;   // estimated value of e
    int x;
    int i = 1;

    // take input for number of terms
    cout << "Enter the accuracy i.e the number of terms : ";
    cin >> terms;

    // take input for the exponent
    cout << "Enter x :";
    cin >> x;

    // for every term in the summation
    while (i <= terms)
    {
        int factorial = 1;
        int num = i;

        // calculates the factorial
        while (num > 0)
        {
            factorial *= num;
            num = num - 1;
        }

        // take reciprocal of the factorial
        e += (double)x / (double)factorial;

        // decrement terms variable
        terms = terms - 1;

        // increase power of x
        x *= x;

        // increment loop variable
        i = i + 1;
    }

    // display value
    cout << "The estimated value of e : " << e << endl;





    return 0;
}
