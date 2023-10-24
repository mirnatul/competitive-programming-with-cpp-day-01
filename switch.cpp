#include <iostream>
using namespace std;

int main() {
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    char button;
    cout << "Input a character: ";
    cin >> button;

    // if (button == 'a') {
    //     cout << "print a" << endl;
    // } else if (button == 'b') {
    //     cout << "print b" << endl;
    // } else if (button == 'c') {
    //     cout << "print c" << endl;
    // } else if (button == 'd') {
    //     cout << "print d" << endl;
    // } else if (button == 'e') {
    //     cout << "print e" << endl;
    // } else {
    //     cout << "print f<<endl";
    // }
    switch (button) {
        case 'a':
            cout << "print a" << endl;
            break;
        case 'b':
            cout << "print b" << endl;
            break;
        case 'c':
            cout << "print c" << endl;
            break;
        case 'd':
            cout << "print d" << endl;
            break;
        case 'e':
            cout << "print e" << endl;
            break;
        default:
            cout << "print f" << endl;
            break;
    }

    return 0;
}