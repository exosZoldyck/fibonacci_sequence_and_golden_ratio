#include <iostream>
using namespace std;

int main()
{
    double num1 = 1, num2 = 1, sum = 1, ratio = 0;
    int limiter, i = 0;

    reInput:
    if (cout << "Limit: " && !(cin >> limiter)) {
        cin.clear();
        cin.get();

        cout << "INPUT ERROR!\n\n"; goto reInput;
    }

    while (i < limiter) {
        num2 = num1;
        num1 = sum;

        sum = num1 + num2;
        cout << endl << num1 << " + " << num2 << " = " << sum << endl;

        ratio = sum / num1;
        cout << sum << " / " << num2 << " = " << ratio << endl;

        i++;
    }
}