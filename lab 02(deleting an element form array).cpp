#include<iostream>
using namespace std;

int main()
{
    int arr[20] = {10, 20, 30, 40, 50};
    int position = 3;

    for (int i = position; i < 5; i++)
    {
        arr[i] = arr[i + 1];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
