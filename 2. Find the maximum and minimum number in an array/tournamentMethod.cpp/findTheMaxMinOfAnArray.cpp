// #include <iostream>

// using namespace std;

// struct Pair
// {
//     int max;
//     int min;
// };

// Pair getMinMax(int arr[], int low, int high)
// {
//     struct Pair minmax, mml, mmr;
//     int mid;

//     if (low == high)
//     {
//         minmax.max = arr[low];
//         minmax.min = arr[low];
//         return minmax;
//     }

//     if (high == low + 1)
//     {
//         if (arr[low] > arr[high])
//         {
//             minmax.max = arr[low];
//             minmax.min = arr[high];
//         }
//         else if (arr[low] < arr[high])
//         {
//             minmax.max = arr[high];
//             minmax.min = arr[low];
//         }
//         return minmax;
//     }

//     mid = (low + high) / 2;
//     mml = getMinMax(arr, low, mid);
//     mmr = getMinMax(arr, mid + 1, high);

//     if (mml.min < mmr.min)
//     {
//         minmax.min = mml.min;
//     }
//     else 
//     {
//         minmax.min = mmr.min;
//     }

//     if (mml.max > mmr.max)
//     {
//         minmax.max = mml.max;
//     }
//     else 
//     {
//         minmax.max = mmr.max;
//     }

    
//     return minmax;
// }

// int main()
// {

//     int arr[] = {1000, 11, 445, 1, 330, 3000};
//     int n = 6;

//     struct Pair minmax = getMinMax(arr, 0, n - 1);

//     cout << "The largest number is " << minmax.max << endl;
//     cout << "The smallest number is " << minmax.min << endl;

//     return 0;
// }

// #include <iostream>

// using namespace std;

// struct Pair 
// {
//     int max;
//     int min;
// };

// Pair getMinMax (int arr[], int low, int high)
// {
//     int mid;
//     struct Pair minmax, mml, mmr;
//     //if the number of elements is equal to 1
//     if(high == low)
//     {
//         minmax.max = arr[low];
//         minmax.min = arr[low];
//         return minmax;
//     }
//     //if the number of elements are equal to 2
//     if(high == low + 1)
//     {
//         if(arr[low]> arr[high])
//         {
//             minmax.max = arr[low];
//             minmax.min = arr[high]; 
//         }
//         else if(arr[low]< arr[high])
//         {
//             minmax.max = arr[high];
//             minmax.max = arr[low];
//         }
//         return minmax;
//     }
//     //if number of elements are more than 2
//     mid = (high+low)/2;
//     mml = getMinMax(arr, low, mid);
//     mmr = getMinMax(arr, mid+1, high);
//     if(mml.max > mmr.max)
//     {
//         minmax.max = mml.max;
//     }
//     else
//     {
//         minmax.max = mmr.max;
//     }
//     if(mml.min < mmr.min){
//         minmax.min =mml.min;
//     }
//     else
//     {
//         minmax.min = mmr.min;
//     }
//     return minmax;

// }

// int main ()
// {
//     int arr[] = {1000, 11, 445, 1, 330, 3000};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     struct Pair minmax = getMinMax(arr, 0, n -1);

//     cout<<"The largest number is "<<minmax.max<<endl;
//     cout<<"The smallest number is "<<minmax.min<<endl;
//     return 0;
// }


#include <iostream>
using namespace std;

struct Pair
{
    int max;
    int min;
};

Pair getMinMax(int arr[], int low, int high)
{
    int mid;
    struct Pair minmax, mml, mmr;
    if(high == low)
    {
        minmax.min = arr[low];
        minmax.max = arr[low];
        return minmax;
    }

    if(high == low + 1)
    {
        if(arr[high]>arr[low])
        {
            minmax.min = arr[low];
            minmax.max = arr[high];
        }
        else if(arr[high]<arr[low])
        {
            minmax.min = arr[high];
            minmax.max = arr[low];
        }
        return minmax;
    }

    mid = (high + low) /2;
    mml = getMinMax(arr, low, mid);
    mmr = getMinMax(arr, mid+1, high);

    if(mml.max > mmr.max)
    {
        minmax.max = mml.max;
    }
    else if(mml.max < mmr.max)
    {
        minmax.max = mmr.max;
    }

    if(mml.min > mmr.min)
    {
        minmax.min = mmr.min;
    }
    else if(mml.min < mmr.min) 
    {
        minmax.min = mml.min;
    }
    return minmax;

}

int main (){

    int arr[]= {10,11,800,26,26000,42};
    int n = sizeof(arr)/sizeof(arr[0]);

    struct Pair minmax = getMinMax(arr, 0 , n-1);

    cout<<"The largest number is "<< minmax.max << endl;
    cout<< "The smallest number is "<< minmax.min << endl;

    return 0;

}