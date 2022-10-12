//#include <iostream>
//using namespace std;
//
//int main() {
//    int num; cin >> num; int prev = -1;
//    int greater = -1; bool flag = true;
//    while (num != 0) {
//        int figure = num % 10;
//        if (prev == -1)  {
//            prev = figure;
//            num /= 10;
//            continue;
//        }
//        num /= 10;
//        if (greater == -1) {
//            greater = figure >= prev ? 1 : 0;
//            prev = figure;
//        }
//        else if ((greater == 1 && figure < prev) || (greater == 0 && figure > prev)) {
//            flag = false;
//            break;
//        }
//    }
//    cout << (flag ? "Monotonnaya" : "Nemonotonnaya");
//}