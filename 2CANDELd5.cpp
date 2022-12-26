#include <iostream>
using namespace std;

int maxDays(int arr[],int n)
{
    int max=0;
    for(int i=0; i<n; i++)
    {
        if(max>arr[i])
        {
            continue;
        }
        else
            max = arr[i];
    }
    return max;
}
int main()
{
    int n;
    cout<<"Enter the size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements: "<<endl;
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }

    cout<<"Number of Days: "<<maxDays(arr,n);
}