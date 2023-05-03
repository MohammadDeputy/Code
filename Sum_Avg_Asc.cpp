#include <iostream>
using namespace std;
int main()
{
    int m[10], sum = 0, i, j, s;
    float avg;
    cout << "Enter 10 Elements" << endl;
    for (i = 0; i < 10; i++)
    {
        cin >> m[i];
    }
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (m[i] > m[j])
            {
                s = m[i];
                m[i] = m[j];
                m[j] = s;
            }
        }
    }
    cout << "Ascending order is " << endl;
    for (i = 0; i < 10; i++)
    {
        cout << m[i] << " " << endl;
    }
    for (i = 0; i < 10; i++)
    {
        sum += m[i];
    }
    cout << "Sum =" << sum << endl;
    avg = sum / 10.0;
    cout << "Average = " << avg << endl;

    return 0;
}