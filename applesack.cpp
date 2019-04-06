#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, k, sas =0;
    cin >> n >> k;
    for(sas=0;n > k;sas++)
    {
        n -= ceil(double(n)/k);
    }
    sas += n + 1;

    cout << sas << endl;
}