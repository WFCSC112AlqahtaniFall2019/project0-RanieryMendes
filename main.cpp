#include <iostream>

using namespace std;

int main() {


    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    cout << "Hello, User!!" << endl;

    cout << "Please, enter six integer numbers" << endl;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    cin >> f;
    cout << endl;

    cout << "Your equations are: " << endl << endl << a << "X + " << b << "Y = " << c << endl;
    cout << d << "X - " << e << "Y = " << f << endl << endl;


    bool answer = true;

    for (int i = -10; i < 11; ++i) {
        for (int j = -10; j < 11; ++j) {

            if (((a * i) + (b * j) == c) && (d * i) - (e * j) == f) {

                cout << "Solution to your equation is: X = ";
                cout << i << "  Y = " << j << endl;
                answer = false;
                break;

            }

        }
    }
    if (answer) {
        cout << "No solution was found within the range -10 to 10" << endl;
    }


    return 0;

}