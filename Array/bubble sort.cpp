#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,temp;
    int size_;
    cout<<"Enter the size of array: ";
    cin>>size_;
    int ara[size_];
    cout<<"Enter element for aray: ";
    for(int i=0; i<size_; i++)
        scanf("%d",&ara[i]);
    for(k=0; k<size_; k++)
    {
    for(i=0; i<size_; i++)
    {
        if(ara[i]>ara[i+1])
        {
         temp=ara[i];
         ara[i]=ara[i+1];
         ara[i+1]=temp;
        }

    }
    }
    for(j=0;j<10;j++)
    {
        printf("%d\n",ara[j]);
    }
}
