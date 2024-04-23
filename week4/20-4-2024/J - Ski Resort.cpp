/*
    Author: Tajwar Saiyeed
    Date: 2024-04-20 22:28:28
    File: J - Ski Resort.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define p1 cout << '1'
#define p0 cout << '0'
#define nl cout << '\n'
#define vll vector<ll>
#define vi vector<int>
#define vs vector<string>
#define fr(i, ivalue, n) for (int i = ivalue; i < n; i++)
#define nfr(i, ivalue, n) for (int i = ivalue; i > n; i--)
#define srtG(vll) sort(a.begin(), a.end(), greater<ll>())
#define mps map<string, int>
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n, k, q;
        cin >> n >> k >> q;
        vll a(n);
        fr(i, 0, n)
        {
            cin >> a[i];
        }

        ll sum = 0, cnt = 0;

        fr(i, 0, n)
        {
            if (a[i] > q)
            {
                cnt = 0;
            }
            else
            {
                cnt++;
            }

            if (cnt >= k)
            {
                sum += cnt - k + 1;
            }
        }

        cout << sum << '\n';
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1840/C
// Solution : https://vjudge.net/solution/50794964