#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int main(int argc, char **argv) {
    int i = 43;
    int &r1 = i;
    float f = 6.53;
    const int &r2 = f;
    r1 = 0;
    cout << "i is  " << &i << '\n';
    cout << "r1 is " << &r1 << '\n';
    cout << "f is  " << &f << '\n';
    cout << "r2 is " << &r2 << '\n';
    return 0;
}