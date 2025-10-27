#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.1416;

double distance(double, double, double, double);
double radius(double, double, double, double);
double circumference(double);
double area(double);

int main() {
    double centerX, centerY, pointX, pointY;
    cout << "Koordinat x titik pusat: ";
    cin >> centerX;
    cout << "Koordinat y titik pusat: ";
    cin >> centerY;
    cout << "Koordinat x titik pada lingkaran: ";
    cin >>  pointX;
    cout << "Koordinat y titik pada lingkaran: ";
    cin >> pointY; 

    double r = radius(centerX, centerY, pointX, pointY);
    double d = 2 * r;
    double c = circumference(r);
    double a = area(r);

    cout << "Jari-jari: " << r << endl;
    cout << "Diameter: " << d << endl;
    cout << "Keliling: " << c << endl;
    cout << "Luas: " << a << endl;

    return 0;
}
double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
} 
double radius(double xc, double yc, double xp, double yp) {
    return distance(xc, yc, xp, yp);
}
double circumference(double r) {
    return 2 * PI * r;
}
double area(double r) {
    return PI * pow(r, 2);
}
