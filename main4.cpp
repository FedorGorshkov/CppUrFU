//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int factorial(int num) {
//    int res = 1;
//    for (int i = 2; i <= num; i++) res *= i;
//    return res;
//}
//
//int my_pow (int num, int step) {
//    int res = 1;
//    for (int i = 0; i < step; i++) res *= num;
//    return res;
//}
//
//
//double my_sin(double num, int E) {
//    double a = num; double res = a;
//    bool odd = true; int i = 2;
//    while (abs(a) >= double(double(1)/my_pow(10, E))) {
//        a = pow(num, 2*i - 1) / factorial(2*i-1);
//        res = odd ? res - a : res + a;
//        odd = !odd; i++;
//    }
//    return res;
//}
//
//int main() {
//    double x; int E;
//    cout << "Enter x and E (10^-(...)):" << endl;
//    cin >> x >> E;
//    cout << "My res: " << my_sin(x, E) << "\nCmath res: " << sin(x) << endl;
//    return 0;
//}