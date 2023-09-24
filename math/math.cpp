#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double sum = 0;
    int k;
    int a, x, factorial = 1;
    do
    {
        cout << "Enter two numbers (a, x): ";
        cin >> a >> x;

    } while (a == 0 || x == 0);
    do {
        cout << "Enter a non-negative integer k: ";
        cin >> k;
    } while (k <= 0);

    if (k < 0) {
        cout << "Error! Factorial of a negative number doesn't exist." << endl;
    }
    else {
        for (int i = 1; i <= k; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << k << " = " << factorial << endl;
    }

    for (int i = 0; i <= k; i++) {
        sum += cosl(pow(a, i) + pow(x, i)) / factorial;
    }

    cout << "Sum = " << sum << endl;
}

