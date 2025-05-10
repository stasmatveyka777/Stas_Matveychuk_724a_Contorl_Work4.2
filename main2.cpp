#include <iostream>
#include <cmath>
using namespace std;

class Trykutnyk {
private:
    double a, b, c;

public:
    void setStorony(double x, double y, double z) {
        a = x;
        b = y;
        c = z;
    }

    double perymetr() {
        return a + b + c;
    }

    double ploshcha() {
        double p = perymetr() / 2;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }

    bool pryamokutnyy() {
        double maxSt = max(a, max(b, c));
        double x, y;

        if (maxSt == a) {
            x = b; y = c;
        } else if (maxSt == b) {
            x = a; y = c;
        } else {
            x = a; y = b;
        }

        return abs(maxSt * maxSt - (x * x + y * y)) < 1e-6;
    }

    void info() {
        cout << "Storony: " << a << ", " << b << ", " << c << endl;
        cout << "Perymetr: " << perymetr() << endl;
        cout << "Ploshcha: " << ploshcha() << endl;
        if (pryamokutnyy()) {
            cout << "Trykutnyk ye pryamokutnym." << endl;
        } else {
            cout << "Trykutnyk ne ye pryamokutnym." << endl;
        }
    }
};

int main() {
    Trykutnyk t;
    double a, b, c;

    cout << "Vvedit 3 storony trykutnyka:\n";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        t.setStorony(a, b, c);
        t.info();
    } else {
        cout << "Taky trykutnyk ne isnuye (porusheno nerivnist troh storin)." << endl;
    }

    return 0;
}
