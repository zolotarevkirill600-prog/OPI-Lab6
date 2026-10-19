#include <iostream>
using namespace std;

int main()
{
    int A, B, C;

    cout << "Enter A: ";
    cin >> A;

    cout << "Enter B: ";
    cin >> B;

    cout << "Enter C: ";
    cin >> C;

    cout << boolalpha
        << ((A == B || A == C || B == C) ? true : false)
        << endl;

    return 0;
}