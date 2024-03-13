#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {2, 1, 3, 4, 5};

    for (int i = 0; i <= 5; i += 2)
    {
        if (i + 1 < 5) //Checking whether the next element to swap is in range
        {
            swap(arr[i], arr[i + 1]);//Swapping the elements
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}