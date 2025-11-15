#include <iostream>
using namespace std;

int sum1(int a, int b)
{
    return a + b;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << sum1(a, b) << endl;
    return 0;
}
