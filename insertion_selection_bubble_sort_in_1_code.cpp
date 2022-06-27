#include <iostream>
using namespace std;
void bubblesort(int* a,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            swap(a[j],a[j+1]);
            
        }
    }
}

void selectionsort(int* a, int n)
{
    for(int i=0;i<n-1;i++)
    {
        int smallest=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[smallest])
            {
                swap(a[j],a[smallest]);
            }
        }
    }
}

void insertionsort(int* a,int n)
{
    for(int i=1;i<n;i++)
    {
        int temp=a[i];
        for(int j=i-1;j>=0;j--)
        {
            if(a[j]>temp)
            {
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main()
{
    int a[7]={23,45,6,1,67,89,93
    int choice;
    cout<<"WELCOME TO SORTING ALGORITHMS\n";
    cout<<"enter 1 for Bubble sort___enter 2 for selectionsort___enter 3 for insertionsort\n";
    cin>>choice;
    switch(choice)
    {
        case 1:
    {
    bubblesort(a,7);
    for(int i=0;i<7;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    break;
    }
    
    case 2:
    {
    selectionsort(a,7);
    for(int i=0;i<7;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    break;
    }
    
    case 3:
    {
    insertionsort(a,7);
    for(int i=0;i<7;i++)
     cout<<a[i]<<" "; 
     break;
    }
    
    default:
    cout<<"wrong choice";
    }
    
    
}