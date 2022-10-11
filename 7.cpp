#include <iostream>
#include <cmath>
using namespace std;


int main() {
	int N; cout << "Enter number: " << endl;
	cin >> N;
	// Считаем количество символов в числе N
	int n = 1;
	while (N % int(pow(10, n)) != N) n++;
	// Переменная для ответа
	int answer = 0;
	// "Срезаем" цифры от i до j
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
			for (int i = 2; i <= floor(sqrt(new_num)) + 1; i++) {
				if (new_num % i == 0) is_prime = false;
			}
			if (is_prime && new_num > answer) answer = new_num;
		}
	}
	cout << "The highest prime number is: " << answer << endl;
}