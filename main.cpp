#include <iostream>
#include <tgmath.h>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main()
{
    float average, balance, balance2, withdraw, deposit, intrest, rate, dt, bt,
        wt, it;

    cout << "Enter the starting balance on the account:";
    cin >> balance;
    bt = balance;
    cout << "Enter the anual intrest rate on the account (e.g. .04):";
    cin >> rate;

    for (int a = 1; a < 4; a = a + 1)
    {
        cout << "Month " << a << endl;
        //deposits
        cout << "Total deposits for this month:    $";
        cin >> deposit;
        while (deposit < 0)
        {
            cout << "Can't deposit negative number:    $";
            cin >> deposit;
            cout << endl;
        }
        //withdrawals
        cout << "Total withdrawals for this month: $";
        cin >> withdraw;
        while (withdraw < 0)
        {
            cout << "Can't withdraw negative number: $";
            cin >> withdraw;
            cout << endl;
        }
        //Calculations
        balance2 = balance + deposit - withdraw;
        average = (balance + balance2) * 0.5;
        intrest = average * rate / 12;
        balance = balance2 + intrest;
        //intrest
        cout << fixed;
        cout << setprecision(2);
        cout << "Intrest received this month $" << intrest << endl;
        cout << "Ending monthly balance $" << balance << endl
             << endl;
        dt = dt + deposit;
        wt = wt + withdraw;
        it = it + intrest;
    }
    //Statement

    cout << "Quarterly Savings Account Statement" << endl;
    cout << "starting balance:    $" << bt << endl;
    cout << "Total deposits:    + $" << dt << endl;
    cout << "Total withdraw:    - $" << wt << endl;
    cout << "intrest:           + $" << it << endl;
    cout << endl;
    cout << "                       ___________" << endl;
    cout << "Ending balance:      $" << balance << endl;

    return 0;
}
