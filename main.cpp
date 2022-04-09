#include <iostream>
#include <math.h>
#include <string>
#define _USE_MATH_DEFINES

using namespace std;
void pause();

int main(int argc, char**argv) {


    int currentValue = 0;
    int increment = 0;
    cout << "Oh almighty user,number please! -> ";
    cin >> currentValue;

    cout << "Add the increment...? ->";
    cin >> increment;

    for (int i = 0; i < 10; ++i) {
        cout << currentValue << " ";
        currentValue += increment;

    }

 cout << currentValue << ".\n";
    pause();
    return 0;
}

void pause() {
    cout << endl;
    system("PAUSE");
}