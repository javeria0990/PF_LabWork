#include <iostream>
using namespace std;

void balanceRecharge(float &total, float toRecharge)
{
    total=total-toRecharge;
    cout << "Recharge successful! Remaining Balance is :" <<total<< endl;
}

int main()
{
    float original, recharge;
    cout << "enter total balance:\n";
    cin >> original;
    cout << "enter amount to recharge:\n";
    cin >> recharge;
    balanceRecharge(original, recharge);
    cout << "original Balance in main function after transaction is :" << original;
    return 0;
}