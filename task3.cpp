#include <iostream>
using namespace std;


int main()
{
    int n;
    int i = 0;
    cout << "Enter a positive integer:" << endl;
    cin >> n;

    /*
        for (i = 0; i < n; i++) {
            cout << "Hello World!" << endl;
        }
    */

    /*
        while (i < n) {
            cout << "Hello World!" << endl;
            i++;
        }
    */

    do {
        cout << "Hello World!" << endl;
        i++;
    } while (i < n);

    return 0;
}
