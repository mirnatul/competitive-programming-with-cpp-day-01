#include <iostream>
using namespace std;

int main() {
    int i = 1;
    //  1  +  2+1=3   =   4
    i = i++ + ++i;
    cout << i << endl;  // 4

    return 0;
}