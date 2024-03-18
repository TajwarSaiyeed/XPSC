/*
    Author: Tajwar Saiyeed
    Date: 2024-03-18 23:24:31
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, t;
    cin >> s >> t;

    int cnt = 0;

    for (int a = 0; a <= s; a++)
    {
        for (int b = 0; b <= s; b++)
        {
            for (int c = 0; c <= s; c++)
            {
                if ((a + b + c) <= s && (a * b * c) <= t)
                {
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}

// Problem : https://atcoder.jp/contests/abc214/tasks/abc214_b
// Submission : https://vjudge.net/solution/49967693
// Atcoder : https://atcoder.jp/contests/abc214/submissions/51428191