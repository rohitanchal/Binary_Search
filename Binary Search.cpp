#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size-1;
    int mid = start + (end - start) / 2;
    
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        
        if(key > arr[mid])  //move right
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;  //move left
        }
        
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int even[6] = {2,4,8,12,18};
    int odd[7] = {1,4,6,7,9,10,14};
    
    int evenindex = BinarySearch(even , 6, 12);
    
    cout<<"Index of 12 is : "<<evenindex<<endl;
    
    int oddindex = BinarySearch(odd , 7, 10);
    
    cout<<"Index of 10 is : "<<oddindex<<endl;
    
    return 0;
}
