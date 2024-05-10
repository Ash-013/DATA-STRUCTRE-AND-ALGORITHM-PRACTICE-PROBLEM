#include <bits/stdc++.h>
using namespace std;

// TWO SUM : BRUTE FORCE APPROACH

void t0(vector<int> arr, int target)
{

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << i << " " << j << endl;
                ;
                break;
            }
        }
    }
}

// OPTIMIZED TIME COMPLEXITY nlogn;
void t1(vector<int> arr, int target)
{

    vector<pair<int, int>> v;
    for (int i = 0; i < arr.size(); i++)
    {
        v.push_back({arr[i], i});
    }
    sort(v.begin(), v.end());

    int m, n;
    m = 0;
    n = arr.size() - 1;

    while (m < n)
    {
        if (v[m].first + v[n].first == target)
        {
            cout << v[m].second << " " << v[n].second << endl;
        }
        if (v[m].first + v[n].first > target)
        {
            n--;
        }
        else
        {
            m++;
        }
    }
}

// Time complexity O(n)

void t2(vector<int> arr, int target)
{

    unordered_map<int, int> u;

    for (int i = 0; i < arr.size(); i++)
    {
        int c = target - arr[i];
        if (u.find(c) != u.end())
        {
            cout << u[c] << " " << i << endl;
        }
        u[arr[i]] = i;
    }
}

int main(void)
{
 
vector<int> arr = {2,7,11,15};
int target = 9;
t1(arr,target);
t2(arr,target);
t0(arr,target);





}