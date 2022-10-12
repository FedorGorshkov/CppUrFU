#include <iostream>
#include <cmath>
using namespace std;


int main() {
	int N; cout << "Enter number: " << endl;
	cin >> N;
	int n = 1;
	while (N % int(pow(10, n)) != N) n++;
	int answer = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			int new_num = 0; int new_N = N; 
			int k = 0; int l = 0;
			while (new_N > 0) {
				int figure = new_N % 10;
				if (i <= k && k <= j) {
					new_num += figure * pow(10, l);
					l++;
				}
				k++;
				new_N /= 10;
			}
			bool is_prime = true;
			for (int m = 2; m <= floor(sqrt(new_num)) + 1; m++) {
				if (new_num % m == 0) is_prime = false;
			}
			if (is_prime && new_num > answer) answer = new_num;
		}
	}
	cout << "The highest prime number is: " << answer << endl;
}