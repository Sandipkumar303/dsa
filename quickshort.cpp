#include<iostream>
using namespace std;
int divided(int arr[], int low, int high)
{
 int pv=arr[low];
 int i=low+1;
 int j=high;
 int temp;

do
{
    while (arr[i]<pv)
    {
        i++;
    }
    while (arr[j]>pv)
    {
        j--;
    }
    if(i<j)
    {
        temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
    }
    
} while (i<j);


    temp=arr[j];
    arr[j]=arr[low];
    arr[low]=temp;
    return j;
}
void qksort(int arr[],int low ,int high)
{
    int pivot;
    if(low<high)
    {
        pivot=divided(arr,low,high);
        qksort(arr,low,pivot-1);
        qksort(arr,pivot+1,high);
    }
}



int main()
{
    int arr[]={9,12,58,75,2,10,8};
    int s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<s; i++)
    {
      cout<<arr[i]<<"\t";
    }
    qksort(arr,0,s-1);

    cout<<"  \n after applying quick sort \n";
  for(int i=0; i<s; i++)
  {
    cout<<arr[i]<<"\t";
  }
}