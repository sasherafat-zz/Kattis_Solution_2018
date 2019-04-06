#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int sas;
    double mohsen ,asghar ,h1 ,h2;
    cin >> sas;

    while(sas--)
    {
        cin >> mohsen >> asghar;
        h1 = 60 * (mohsen / asghar);
        h2 = 60 /  asghar;
        cout << fixed << setprecision(4);
        cout << h1 - h2 << " " << h1 << " " << h1 + h2 << endl;
    }
}