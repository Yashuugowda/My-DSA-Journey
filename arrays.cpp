#include<iostream>
using namespace std;
int main()
{
    int size;

    cout << "Enter the size: ";
    cin >> size;

    if (size < 2)
    {
        cout << "At least 2 elements are required.";
        return 0;
    }

    int arr[size];

    // Input
    for (int temp = 0; temp < size; temp++)
    {
        cout << "Enter element: ";
        cin >> arr[temp];
    }

    int large = INT_MIN;
    int second = INT_MIN;

    // Find largest and second largest
    for (int temp = 0; temp < size; temp++)
    {
        if (arr[temp] > large)
        {
            second = large;
            large = arr[temp];
        }
        else if (arr[temp] > second && arr[temp] != large)
        {
            second = arr[temp];
        }
    }

    cout << "Largest: " << large << endl;

    if (second == INT_MIN)
    {
        cout << "No distinct second largest element." << endl;
    }
    else
    {
        cout << "Second Largest: " << second << endl;
    }

    return 0;
}