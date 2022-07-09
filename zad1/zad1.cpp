

#include <iostream>
int findMinimum(int arr[], int n)
{
    int min;
    min = arr[0];
    for (int i = 1; i < n; ++i)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int i;
    int arr[10];
    int size;
    int min;

    std::cout << "Give number of element in the array: " << std::endl;
    std::cin >> size;


}
