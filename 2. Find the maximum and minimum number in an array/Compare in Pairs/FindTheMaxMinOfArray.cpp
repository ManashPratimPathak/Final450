//comparing method

#include<iostream>

using namespace std;

struct Pair
{
    int min;
    int max;
};

struct Pair getMinMax(int arr[], int size)
{
    int i=0;
    struct Pair minmax;

    //if the size of array is even then
    // we have to compare the first two element and set them as maxima and minima
    if(size%2==0)
    {
        if(arr[i]>arr[i+1])
        {
            minmax.max = arr[i];
            minmax.min = arr[i+1];
        }
        else
        {
            minmax.max = arr[i+1];
            minmax.min = arr[i];
        }

        //set the index for loop as i = 2;
        i = 2;
    }
    else
    {
        minmax.max = arr[i];
        minmax.min = arr[i];
    }

    //now we have to compair the consecutive two number with min and min 
    while(i < size-1) 
    // since i and size-1 would be use as index of array for the following loop hence we are taking size-1, as index starts from 0
    {
        if(arr[i+1]>arr[i])
        {
            if(arr[i+1]>minmax.max)
            {
                minmax.max = arr[i+1];
            }
            if(arr[i]<minmax.min)
            {
                minmax.min = arr[i];
            }
        }
        else 
        {
            if(arr[i]> minmax.max)
            {
                minmax.max = arr[i];
            }

            if(arr[i+1]<minmax.min)
            {
                minmax.min = arr[i+1];
            }
        }

        i+=2; //as we are comparing two element at the same time in the loop.  
    }
    return minmax;
}

int main ()
{ 
    int a[]={ 1000, 11, 445, 1, 330, 3000 };
    int n = sizeof(a)/sizeof(a[0]);
    struct Pair minmax;
    minmax = getMinMax(a, n);

    cout<<"The largest number is "<< minmax.max<<endl;
    cout<<"The smallest number is "<<minmax.min<<endl;
    return 0;
}