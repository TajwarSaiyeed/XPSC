/*
    Author: Tajwar Saiyeed
    Date: 2024-04-17 21:50:08
    File: Alternating Binary String.cpp
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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0;
        fr(i, 1, n)
        {
            if (s[i] == s[i - 1])
                cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}