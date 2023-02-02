#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (a <= b)
        {
            cout << a << endl;
        }
        else if (a >= b)
        {
            cout << b << endl;
        }
    }
    return 0;
}
