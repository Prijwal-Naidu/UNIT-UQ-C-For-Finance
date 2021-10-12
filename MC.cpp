#include "Functions.h"
#include <tuple>
using namespace std;


int main () {
  // const int& num_sims, const double& S, const double& K, const double& r, const double& v, const double& T, const double d
  tuple<double, double, double, double, double, double,double> callCalculations = monte_carlo_call_price(100000, 100, 100, 0.001, 0.2, 1, 0.001);

  cout << "Price:" << get<0>(callCalculations) << "\n";
  cout << "Delta:" << get<1>(callCalculations) << "\n";
  cout << "Gamma:" << get<2>(callCalculations) << "\n";
  cout << "Vega:" << get<3>(callCalculations) << "\n";
  cout << "Theta:" << get<4>(callCalculations) << "\n";
  cout << "Rho:" << get<5>(callCalculations) << "\n";
  cout << "d:" << get<6>(callCalculations) << "\n";

  cout << "\n";

  tuple<double, double, double, double, double, double,double> putCalculations = monte_carlo_put_price(100000, 100, 100, 0.001, 0.2, 1, 0.001);

  cout << "Price:" << get<0>(putCalculations) << "\n";
  cout << "Delta:" << get<1>(putCalculations) << "\n";
  cout << "Gamma:" << get<2>(putCalculations) << "\n";
  cout << "Vega:" << get<3>(putCalculations) << "\n";
  cout << "Theta:" << get<4>(putCalculations) << "\n";
  cout << "Rho:" << get<5>(putCalculations) << "\n";
  cout << "d:" << get<6>(putCalculations) << "\n";
}

