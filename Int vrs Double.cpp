  /*
 * Coding around with mixed ints and doubles
 */
 #include <iostream>
 using namespace std;

 int main() {
    int i = 3;
    double d;
    d = i;            // 3 -> 3.0, d = 3.0
    cout << "here's d: " << d << endl;
    d = 88;           // 88 -> 88.0, d = 88.0
    cout << "here's d: " << d << endl;
    double nought = 0; // 0 = 0.0
    cout << "here's nought: " << nought << endl;

    d = 55.66;
    cout << "here's d: " << d << endl;
    i = d;
    cout << "here's i: " << i << endl;

          return 0;
}
