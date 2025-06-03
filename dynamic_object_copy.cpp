#include <bits/stdc++.h>
using namespace std;

class Cricketer
{
public:
    string country;
    int jersey_no;

    Cricketer(string country, int jersey_no)
    {
        this->country = country;
        this->jersey_no = jersey_no;
    }
};

int main()
{

    Cricketer *dhoni = new Cricketer("india", 100);
    Cricketer *kohli = new Cricketer("india", 12);

    *dhoni = *kohli;

    delete kohli;

    cout << dhoni->jersey_no;

    return 0;
}