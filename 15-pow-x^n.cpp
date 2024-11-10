#include <iostream>
using namespace std;

double myPow(double x, int n)
{
    //------------- corner cases -----------
    if (n == 0)
        return 1.0;
    if (x == 0)
        return 0.0;
    if (x == 1)
        return 1.0;
    if (x == -1 && n % 2 == 0)
        return +1.0;
    if (x == -1 && n % 2 != 0)
        return -1.0;

    long binaryForm = n;
    if (binaryForm < 0)
    { // here we are handling a situation- if the value of x is negetive then we have to convert the negetive into pisitive first. means here er made the value of x as 1/x and the power as negetive, which is already negative means final answer is positive.
        x = 1 / x;
        binaryForm = -binaryForm;
    }
    double ans = 1; // here we are taking double data type because it is the final answer that we have to retirn at the end of the function and the return type of the function we choose as double , so thats why i made the type of ans as double.
    while (binaryForm > 0)
    {
        if (binaryForm % 2 == 1)
        {
            ans *= x;
        }
        x *= x;
        binaryForm /= 2;
    }
    return ans;
}

int main()
{
    int x = 3, n = 5;
    cout << myPow(x, n);
    return 0;
}