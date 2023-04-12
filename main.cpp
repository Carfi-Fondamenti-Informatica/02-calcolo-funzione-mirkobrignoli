#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float a = 0, b = 0,x = 0,y = 0,z = 0;
    cout << "inserisci i 4 valori \n";
    cin >> a >> b >> x >> y;

    if(x < 0 && y > 0){
        z = a*x - b*y;
    }
    else if(x >= 0 && y <= 0){
        z = a*pow(x,2) - b*y;
    }
    else {
        z = a*x + b*pow(y,2);
    }
    cout << "Il risultato e': " << z << endl;
    return 0;
}
