#include <iostream>
#include <math.h>
#include <string>
#define _USE_MATH_DEFINES

using namespace std;
void pause();

int main(int argc, char**argv) {


    int currentValue = 0;
    cout << "Oh almighty user";
    cin >> currentValue;

    if (currentValue < 1) {
        cout << "blah blah";

        pause();
        return 0;
    }

    pause();
    return 0;
}

void pause() {
    cout << endl;
    system("PAUSE");
}