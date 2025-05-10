#include <iostream>
using namespace std;

class Student {
private:
    string imya;
    int vik;
    double serBal;

public:
    void setImya(string i) {
        imya = i;
    }

    void setVik(int v) {
        vik = v;
    }

    void setSerBal(double b) {
        serBal = b;
    }

    string getImya() {
        return imya;
    }

    int getVik() {
        return vik;
    }

    double getSerBal() {
        return serBal;
    }

    void info() {
        cout << "Imya: " << imya << endl;
        cout << "Vik: " << vik << endl;
        cout << "Seredniy bal: " << serBal << endl;
    }
};

int main() {
    Student s;
    string name;
    int age;
    double bal;

    cout << "Vvedit imya studenta: ";
    cin >> name;
    s.setImya(name);

    cout << "Vvedit vik: ";
    cin >> age;
    s.setVik(age);

    cout << "Vvedit seredniy bal: ";
    cin >> bal;
    s.setSerBal(bal);

    cout << "\nInformatsiya pro studenta:\n";
    s.info();

    return 0;
}
