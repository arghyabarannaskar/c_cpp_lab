#include <bits/stdc++.h>
using namespace std;
class Number_List
{
    int n, *arr, i, maxN, minN;

public:
    int pivot(int arr[], int x, int y)
    {
        int p = arr[y];
        int s = x - 1;
        for (int t = x; t <= y - 1; t++)
        {
            if (arr[t] < p)
            {
                swap(arr[t], arr[++s]);
            }
        }
        swap(arr[s + 1], arr[y]);
        return s + 1;
    }
    void quicksort(int arr[], int x, int y)
    {
        if (x < y)
        {
            int p = pivot(arr, x, y);
            quicksort(arr, x, p - 1);
            quicksort(arr, p + 1, y);
        }
    }
    void createArray()
    {
        cout << "Size of list: ";
        cin >> n;
        arr = new int[n];
        cout << "Enter numbers : " << endl;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }
    void sortArray()
    {
        quicksort(arr, 0, n - 1);
        cout << "Sorted Array :" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void findMaxMin()
    {
        maxN = arr[n - 1];
        minN = arr[0];
        cout << "Maximum number : " << maxN << endl;
        cout << "Minimum number : " << minN << endl;
    }
};
int main()
{
    Number_List nl;
    nl.createArray();
    nl.sortArray();
    nl.findMaxMin();
    return 0;
}