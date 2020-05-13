#include <iostream>
#include <bits\stdc++.h>
using namespace std;

void find_nos(int *arr, int *&l, int *&r, int s)
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
}

int main()
{
    int sum = 13;
    int A[] = {-4, -1, 1, 3, 5, 6, 8, 11};
    int size = sizeof(A);

    int *left = A;
    int *right = A + 7;

    find_nos(A, left, right, sum);

    cout << " address of left, right : " << left << "," << right << endl;

    cout << "The pair is : " << sum << " = " << *left << " + " << *right;
    return 0;
}