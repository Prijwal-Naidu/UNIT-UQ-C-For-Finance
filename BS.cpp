#include "Functions.h"

using namespace std;



int main() {
    // 100, 100, 0.001, 0.2, 1.0,
    // First we create the parameter list
    double S = 100;  // Spot price
    double K = 100;  // Strike price
    double r = 0.001;   // Risk-free rate (0.1%)
    double v = 0.2;    // Volatility of the underlying (20%)
    double T = 1.0;    // One year until expiry

    // Then we calculate the call/put values
    double call = call_price(S, K, r, v, T);
    double put = put_price(S, K, r, v, T);

    // Finally we output the parameters and prices
    cout << "Underlying:      " << S << endl;
    cout << "Strike:          " << K << endl;
    cout << "Risk-Free Rate:  " << r << endl;
    cout << "Volatility:      " << v << endl;
    cout << "Maturity:        " << T << endl;
    cout << " " << endl;
    cout << "Call Price:      " << call << endl;
    cout << "Put Price:       " << put << endl;

    return 0;
}