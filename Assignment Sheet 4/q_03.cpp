#include <iostream>
using namespace std;
class Number_List
{
    private:
    int n, *arr, i, maxN, minN;
    int pivot(int arr[], int low, int high);
    void quicksort(int arr[], int low, int high);

public:
   
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

int Number_List::pivot(int arr[], int low, int high)
{
    int p = arr[high];
    int s = low - 1;
    for (int t = low; t <= high - 1; t++)
    {
        if (arr[t] < p)
        {
            swap(arr[t], arr[++s]);
        }
    }
    swap(arr[s + 1], arr[high]);
    return s + 1;
}
void Number_List::quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int p = pivot(arr, low, high);
        quicksort(arr, low, p - 1);
        quicksort(arr, p + 1, high);
    }
}

int main()
{
    Number_List nl;
    nl.createArray();
    nl.sortArray();
    nl.findMaxMin();
    return 0;
}