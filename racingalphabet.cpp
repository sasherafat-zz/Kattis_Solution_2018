#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <iomanip>
using namespace std;

long double Pis = 3.141592653589793238462643383279502884197169399375105820974944592307816406286;
string amir028 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ '";
int mashdosein(char a)
{
    for (int i = 0; i < 28; i++)
    {
        if (a == amir028[i])
        {
            return i;
        }
    }
    return 0;
}
int main()
{
    int n, x = 0, mohsen = 0 , sas = 0, help;

    cin >> n;
    while (n--)
    {
        string abas = "";
        getline(cin, abas);
        if (abas == "")
        {
            getline(cin, abas);
        }
        for (mohsen = 0; abas[mohsen]; mohsen++);
    //  mohsen += 1;
        sas = mashdosein(abas[0]);
        for (int i = 0; i < mohsen; i++)
        {
            help = mashdosein(abas[i]);
            x += min(abs(sas - help), 28 - abs(sas - help));
            sas = help;
        }
        cout << fixed << setprecision(10);
        cout << ((x * Pis) / 7) + mohsen << endl;
            x = 0;
    }
    return 0;
}
