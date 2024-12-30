#include <iostream>
#include "algfun.h"

using namespace std;
using namespace Algebra;

int main() {
    Funktor x = Funktor::_x_;

    
    Funktor F = sqrt(5.6 * x + 1.2);

#ifdef TRACING
    clog << "Rozpoczynam testowanie funktora F(x): sqrt(5.6 * x + 1.2)" << endl;
#endif

    for (real x_val = 0.0; x_val <= 2.0; x_val += 0.5) {
        cout << "F(" << x_val << ") = " << F(x_val) << endl;
    }

#ifdef TRACING
    clog << "Zakoñczono testowanie funktora F(x)" << endl;
#endif

    return 0;
}
