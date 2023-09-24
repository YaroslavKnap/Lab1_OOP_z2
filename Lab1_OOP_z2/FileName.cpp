#include <iostream>
#include <cmath>
using namespace std;

class Calculator {
public:
    // Метод для обчислення функції a[x,y,z,b]
    static double calculateA(double x, double y, double z, double b) {
        return pow(1 + y, 2) * pow(fabs(x + y), 0.3) / (pow(b, 2) + z / (1 + exp(-(x - z))) + pow(fabs(y), 0.43));
    }

    // Метод для обчислення функції b[x,y,z]
    static double calculateB(double x, double y, double z) {
        return x * (y + atan(fabs(x * x + z) / (2 * z + x + sin(y) * sin(y) + exp(-x + z) / (z + 1))));
    }
};

int main() {
    double y = 0.47 * 10;
    double z = -1.32 * 10;
    double b = 0.5;

    cout << "Tabulyuvannya funktsiy a[x,y,z,b] і b[x,y,z] za zminnoyu x:" << endl;
    cout << "x\t\ta[x,y,z,b]\tb[x,y,z]" << endl;

    double x_start = -1.0;
    double x_end = 1.0;
    double delta_x = 0.2;

    for (double x = x_start; x <= x_end; x += delta_x) {
        // Рахуємо значення функцій для  x
        double resultA = Calculator::calculateA(x, y, z, b);
        double resultB = Calculator::calculateB(x, y, z);


        cout << x << "\t\t" << resultA << "\t\t" << resultB << endl;
    }

    return 0;
}
