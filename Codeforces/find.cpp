#include <bits/stdc++.h>
using namespace std;
int main()
{
    clock_t s, e;
    s = clock();
    int count = 0;
    for (int i = 0; i < 9; i++)
    {
        if (i == 4 || i == 8)
        {
            for (int j = 0; j < 8; j++)
            {
                for (int k = 0; k < 8; k++)
                {
                    if (k == 0)
                    {
                        for (int l = 0; l < 9; l++)
                        {
                            if (l == 3)
                            {
                                cout << "0197" << i << j << k << l << "104" << endl;
                                count++;
                            }
                        }
                    }
                }
            }
        }
    }
    e = clock();
    double c = (e - s) / CLOCKS_PER_SEC;
    cout << count << endl;
    cout << c << endl;
}