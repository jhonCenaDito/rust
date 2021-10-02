// Using DSU to count number of connected component

#include<bits/stdc++.h>
using namespace std;

int get(vector<int> &parent, int a)
{
    return parent[a] = (parent[a] == a ? a : get(parent, parent[a]));
}

void Union(vector<int> &parent, vector<int> &rank, int a, int b)
{
    a = get(parent, a);
    b = get(parent, b);

    if(parent[a] == parent[b])
        rank[a]++;
    if(parent[a] > parent[b])
        parent[b] = a;
    else
        parent[a] = b;
}


int minimumSwapsToSort(vector<int>& nums)
{
    int n = nums.size();
    vector<int> temp = nums; // store and sort the array
    sort(temp.begin(), temp.end());

    unordered_map<int, int> sorted;
    int idx = 0;
    for(int x : temp)
        sorted[x] = idx++;

    vector<int> parent(n, 0);
    iota(parent.begin(), parent.end(), 0); // Working based on index
    vector<int> rank(n, 0);

    for(int i = 0; i < n; i++)
    {
        int reqIdx = sorted[nums[i]];
        Union(parent, rank, i, reqIdx); // sending idx for union
    }

    int connectedComponent = 0;
    for(int i = 0; i < n; i++)
    {
        if(i == parent[i])
            connectedComponent++;
    }

    return n - connectedComponent;
}



int main()
{
    int n;
    cin >> n;
    vector<int> nums(n, 0);
    for(int &x : nums)
    {
        cin >> x;
    }

    cout << minimumSwapsToSort(nums);
    return 0;
}