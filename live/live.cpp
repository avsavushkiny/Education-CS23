#include <iostream>
using namespace std;

int maim()
{
    double aa[12]{};

    for (int i = 0; i < 12; i = i + 1)
    {
        cin >> aa[i];
    }

    double result = ((aa[0] + aa[1] + aa[2] + aa[3] + aa[4] + aa[5] + aa[6] + aa[7] + aa[8] + aa[9] + aa[10] + aa[11])/12.0);
    cout << result << endl;

    return 0;
}