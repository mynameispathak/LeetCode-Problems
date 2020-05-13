#include <iostream>
#include <bits\stdc++.h>
using namespace std;

std::pair<int, int> find_nos_dict(vector<int> &arr, int s)
{
    int result;
    std::map<int, bool> m;
    for (int i = 0; i < int(sizeof(arr)); i++)
    {
        result = s - arr[i];
        if (m[result] == true)
            return std::make_pair(arr[i], result);
        else
        {
            m[arr[i]] = true;
        }
    }
    return std::make_pair(-1, -1);
}

int main()
{
    int sum = 13;
    vector<int> A = {-4, -1, 1, 3, 5, 6, 8, 11};
    int size = sizeof(A);

    std::pair<int, int> p = find_nos_dict(A, sum);

    cout << sum << " = " << p.first << " + " << p.second << endl;

    return 0;
}