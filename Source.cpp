#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    string x;
    double a;
    cout << "Salary for This Month" << endl;
    cout << "Employee Name: "; cin >> x;
    cout << "Gross Salary: Rp "; cin >> a;
    int f = a / 5;
    cout << "Tax (20%): Rp " << f << endl;
    int p = 300000;
    int q = 700000;
    cout << "Installment: Rp " << p << endl;
    cout << "Insurance: Rp " << q << endl;
    int h = a - f - p - q;
    cout << "Net Salary: " << h << endl;
    return 0;
}