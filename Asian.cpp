#include "Functions.h"
#include <tuple>
using namespace std;
// (const int& num_sims, const double& S, const double& K, const double& r, const double& v, const double& T, const double d, const double steps)
int main () {
  tuple<double, double, double, double, double, double, double, double> AsianCalculations = asianOption(10000, 100, 100, 0.001, 0.2, 1.0, 0.01, 252);
  cout << "Call Price :" << get<0>(AsianCalculations) << "\n";
  cout << "Call Price STD:" << get<1>(AsianCalculations) << "\n"; 

  cout << "\n";

  cout << "Call Price CV:" << get<2>(AsianCalculations) << "\n";
  cout << "Call Price CV STD:" << get<3>(AsianCalculations) << "\n";

  cout << "\n";

  cout << "Put Price:" << get<4>(AsianCalculations) << "\n";  
  cout << "Put Price Std:" << get<5>(AsianCalculations) << "\n"; 

  cout << "\n";

  cout << "Put Price CV:" << get<6>(AsianCalculations) << "\n"; 
  cout << "Put Price CV STD:" << get<7>(AsianCalculations) << "\n";
}
