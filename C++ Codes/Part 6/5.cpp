#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n << " is an even number" << endl;
        return 0;
    }
    cout << n << " is a odd number" << endl;
    return 0;
}