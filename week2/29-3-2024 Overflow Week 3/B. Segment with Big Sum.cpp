/*
    Author: Tajwar Saiyeed
    Date: 2024-03-29 14:15:54
*/
#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define vll vector<ll>
#define fr(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    ll s;
    cin >> n >> s;
    vll a(n);
    fr(i, n) cin >> a[i];

    ll left = 0, right = 0, sum = 0, ans = INT_MAX;

    while (right < n)
    {
        sum += a[right];

        if (sum >= s)
        {
            while (sum - a[left] >= s)
            {
                sum -= a[left];
                left++;
            }
            ans = min(ans, right - left + 1);
        }

        right++;
    }

    if (ans == INT_MAX)
        cout << -1 << '\n';
    else
        cout << ans << '\n';

    return 0;
}

// Problem : https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/B