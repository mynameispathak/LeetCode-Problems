#include <iostream>
#include <bits\stdc++.h>
using namespace std;

std::pair<int, int> find_nos_dict(int *arr, int s)
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
            cout << m[arr[i]];
        }
    }
    return std::make_pair(-1, -1);
}
/*void find_nos(int *arr, int *&l, int *&r, int s)
    {
        while (*l < *r)
        {
            int summ = *l + *r;
            if (summ == s)
            {
                cout << " address of l, r : " << l << "," << r << endl;
                return;
            }
            else if (summ < s)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        cout << " address of l, r : " << l << "," << r << endl;
    }*/

int main()
{
    int sum = 13;
    int A[] = {-4, -1, 1, 3, 5, 6, 8, 11};
    int size = sizeof(A);
    //int left = 0;
    //int right = sizeof(A) - 1;
    int *left = A;
    int *right = A + 7;
    std::pair<int, int> p = find_nos_dict(A, sum);
    //find_nos(A, left, right, sum);
    cout << p.first << " + " << p.second << endl;
    //cout << " address of left, right : " << left << "," << right << endl;

    //cout << "The pair is : " << *left << " + " << *right;
    return 0;
}