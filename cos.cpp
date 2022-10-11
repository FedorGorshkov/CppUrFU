//#include <iostream>
//#include <cmath>
//using namespace std;
//
//long double my_cos(double x, int E) {
//	long double res = 1; unsigned int i = 2;
//	long double elem = (x * x) / 2;
//	while (abs(elem) > (1 / pow(10, E + 1))) {
//		res = (i % 2 == 0) ? res - elem : res + elem;
//		elem *= (x * x) / ((2 * i - 1) * 2 * i);
//		i += 1;
//	}
//	return res;
//	
//}
//
//int main() {
//	double x; int E;
//	cout << "Enter number (in radians) and error (10^(-input)):" << endl;
//	cin >> x >> E;
//	cout << "My result: " << my_cos(x, E) << endl;
//	cout << "Cmath result: " << cos(x) << endl;
//}