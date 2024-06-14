#include <iostream>

using namespace std;

int main()
{
    // STEPS :
    // 1. Take three int values from user i.e a,b and c.
    // 2. Use Pythagorus theorem and check all possible combination
    // 3. Display the result

    int a,b,c;   // sides of a triangle

    // take input from user
    cout << "Enter a,b and c respectively (seperated by spaces): ";
    cin >> a >> b >> c;


    if ((a*a == b*b + c*c) or (b*b == a*a + c*c) or (c*c == a*a + b*b))
        cout << "a,b and c are sides of a right angle triangle.\n";
    else
        cout << "a,b and c does not represent sides of a right angle triangle.\n";


    return 0;
}
