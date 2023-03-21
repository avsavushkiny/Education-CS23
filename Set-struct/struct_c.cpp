#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
    string t;
};

int main() {
    Point p1 = {1, 2};
    Point p2 = {3, 4};
    // Access struct members using the dot notation
    cout << sizeof(p1) << " " << sizeof(p1.t);

    return 0;
}
