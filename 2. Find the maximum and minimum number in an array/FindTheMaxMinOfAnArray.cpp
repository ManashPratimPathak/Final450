// #include <iostream>

// using namespace std;

// struct Pair
// {
//     int max;
//     int min;
// };

// Pair getMinMax(int arr[], int size)
// {
//     struct Pair minmax;
//     if (size == 1)
//     {
//         minmax.max = arr[0];
//         minmax.min = arr[0];
//         return minmax;
//     }

//     if (arr[0] > arr[1])
//     {
//         minmax.max = arr[0];
//         minmax.min = arr[1];
//     }
//     else if (arr[0] < arr[1])
//     {
//         minmax.max = arr[1];
//         minmax.min = arr[0];
//     }
//     for (int i = 2; i < size; i++)
//     {
//         if (arr[i] > minmax.max)
//         {
//             minmax.max = arr[i];
//         }
//         else if(arr[i] < minmax.min)
//         {
//             minmax.min = arr[i];
//         }
//     }
//     return minmax;
// }

// int main()
// {
//     int arr[] = {200, 11, 12, 56, 77};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     struct Pair minmax = getMinMax(arr, n);

//     cout << "The largest number is " << minmax.max << endl;
//     cout << "The smallest number is " << minmax.min << endl;

//     return 0;
// }

#include <iostream>

using namespace std;

struct Pair
{
    int min ;
    int max ;
};

Pair getMinMax (int arr[], int size)
{   
    struct Pair minmax;
    if(size == 1)
    {
        minmax.max = arr[0];
        minmax.min = arr[0];
        return minmax;
    }

        if(arr[0]>arr[1])
        {
            minmax.max = arr[0];
            minmax.min = arr[1];
        }
        else
        {
            minmax.max = arr[1];
            minmax.min = arr[0];
        }

        for(int i = 2; i < size; i++)
        {
            if(arr[i] > minmax.max)
            {
                minmax.max = arr[i];   
            }
            else if(arr[i] < minmax.min)
            {
                minmax.min = arr[i];
            }
        }
        return minmax;
    

}

int main ()
{
    int arr[] = {10, 11, 800, 26, 26000, 42};
    int n = sizeof(arr)/ sizeof(arr[0]);

    struct Pair minmax = getMinMax (arr, n);

    cout<< "The largest number in the array is "<< minmax.max << endl;
    cout<< "The smallest number in the array is "<< minmax.min << endl;
}