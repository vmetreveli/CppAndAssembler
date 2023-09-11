#include <iostream>

using namespace std;

extern "C" int IntegerAddSub(int a, int b, int c, int d);

static void PrintResult(const char *msg, int a, int b, int c, int d, int result) {
    const char nl = '\n';
    cout << msg << nl;
    cout << "a = " << a << nl;
    cout << "b = " << b << nl;
    cout << "c = " << c << nl;
    cout << "d = " << d << nl;
    cout << "result = " << result << nl;
    cout << nl;
}

int main() {

    cout << "Main" << endl;
    int a, b, c, d, result;
    a = 10;
    b = 20;
    c = 30;
    d = 18;
    result = IntegerAddSub(a, b, c, d);
    PrintResult("Test 1", a, b, c, d, result);
    a = 101;
    b = 34;
    c = -190;
    d = 25;
    result = IntegerAddSub(a, b, c, d);
    PrintResult("Test 2", a, b, c, d, result);


    return 0;
}


