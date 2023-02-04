#include <iostream>
using namespace std;

int main()
{
    int n;
    int i;

    cout << "Введите количество чисел: ";
    cin >> n;

    int arr[n];

    cout << "Введите " << n << " целых чисел: ";
    for (i = 0; i < n; ++i)
        cin >> arr[i];

    for (i = 0; i < n; ++i)
        arr[i] += 1;

    for (i = 0; i < n; ++i)
        cout << arr[i] << " ";

    cout << endl;
    return 0;
}
