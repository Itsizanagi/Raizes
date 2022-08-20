#include <iostream>
#include <cmatch>

using namespace std;

int main() {
    // ax²+bx+c = 0
    // Delta = b²–4.a.c
    // x = -b+-Vdelta/2.a

    int a, b, c, delta;
    double x1, x2;

    cout << "Digite o coeficiente de A: ";
    cin >> a;

    cout << "Digite o coeficiente B: ";
    cin >> b;

    cout << "Digite o coeficiente C: ";
    cin >> c;

    delta = b*b - 4*a*c;

    if(a != 0) {
       x1 = (-b+sqrt(delta))/(2*a);
       x2 = (-b-sqrt(delta))/(2*a);

    }

    cout <<"As raizes da equacao sao " << x1 << " e " << x2 << endl;

    return 0;
}
