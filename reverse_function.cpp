#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    string s("Hello");

    reverse(a, a + 5);
    reverse(s.begin(), s.end());

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    cout << s;
    return 0;
}