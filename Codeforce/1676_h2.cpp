#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <cmath>
using namespace std;

int pairCount(vector<int> arr)
{
    int count = 0;
    if (arr.size() > 1)
    {
        int mid = arr.size() / 2;
        size_t const half_size = arr.size() / 2;
        vector<int> L(arr.begin(), arr.begin() + half_size);
        vector<int> R(arr.begin() + half_size, arr.end());
        count += pairCount(L);
        count += pairCount(R);
        int i = 0;
        int j = 0;
        int k = 0;
        int temp = 0;
        int prev = -1;
        while (i < L.size() && j < R.size())
        {
            if (L[i] < R[j])
            {
                if (L[i] != prev)
                {
                    temp += temp;
                }
                arr[k] = L[i];
                i++;
            }
            else
            {
                if (L[i] != prev)
                {
                    temp += temp;
                }
                temp++;
                prev = L[i];
                arr[k] = R[j];
                j++;
            }
            k++;
        }
        count += temp;
        while (i < L.size())
        {
            if (L[i] != prev)
            {
                count += temp;
            }
            arr[k] = L[i];
            i++;
            k++;
        }
        while (j < R.size())
        {
            arr[k] = R[j];
            j++;
            k++;
        }
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int count = pairCount(arr);
        cout << count << endl;
    }

    return 0;
}