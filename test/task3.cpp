#include <iostream>
#include <bits/stdc++.h>

using namespace std;
vector<pair<int, int>> pairSum(int arr[], int n, int sum)
{
    vector<pair<int, int>> a;

    return a;
}
int main()
{
    int n, sum;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[n];
    cin >> sum;
    vector<pair<int, int>> a = pairSum(arr, n, sum);
    for (auto i : a)
        cout << '(' << i.first << ", " << i.second << ')' << ' ';
    return 0;
}