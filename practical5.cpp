
#include<iostream>
using namespace std;
int n;
#define size 20
template<class T>
void sell(T A[size])
{
    int i,j,min;
    T temp;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(A[j]<A[min])
            min=j;
        }
        temp=A[i];
        A[i]=A[min];
        A[min]=temp;
    }
    cout<<"\nSorted array:";
    for(i=0;i<n;i++)
    {
        cout<<" "<<A[i];
    }
}

int main()
{
    int A[size];
    float B[size];
    int i;
   
    cout<<"\nEnter total no of int elements:";
    cin>>n;
    cout<<"\nEnter int elements:";
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    sell(A);
   
    cout<<"\nEnter total no of float elements:";
    cin>>n;
    cout<<"\nEnter float elements:";
    for(i=0;i<n;i++)
    {
        cin>>B[i];
    }
    sell(B);
}

// Enter total no of int elements:3

// Enter int elements:12
// 23
// 453

// Sorted array: 12 23 453
// Enter total no of float elements:2

// Enter float elements:45.3
// 63.

// Sorted array: 45.3 63