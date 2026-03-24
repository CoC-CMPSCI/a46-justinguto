#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string status, gender, major;
    double scholarship = 10000.0;
    double factor = 0.1;
    double finalScholarship;

    cin >> status >> gender >> major;

    if (status == "student")
    {
        factor = 0.2;

        if (gender == "female")
        {
            factor = 1.0;

            if (major == "cs")
            {
                factor = 3.0;
            }
        }
        else
        {
            if (major == "cs")
            {
                factor = 2.0;
            }
        }
    }
    else
    {
        if (major == "cs")
        {
            factor = 0.5;
        }
    }

    finalScholarship = scholarship * factor;

   cout << fixed << setprecision(1) << factor << " ";
cout << fixed << setprecision(2) << finalScholarship << endl;

    return 0;
}
