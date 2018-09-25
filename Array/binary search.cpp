#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size_;
    cout<<"Enter the size of array: ";
    cin>>size_;
    int ara[size_];
    cout<<"Enter element for araay: ";
    for(int i=0; i<size_; i++)
        scanf("%d",&ara[i]);
    int data,beg=0,END=size_-1,mid;
    printf("Enter the number which you want to search:");
    while(scanf("%d",&data)!=EOF)
    {
        int beg = 0,END = size_-1, mid;
        while(beg <= END)
        {
            mid=int((beg+END)/2);
            if(data<ara[mid])
            {
                END=mid-1;
            }
            else
                beg=mid+1;
            if(ara[mid]==data)
                break;
        }
        if(ara[mid]==data)
        {
            cout<<"Found at "<<mid+1<<endl;
        }
        else
            cout<<"Not found"<<endl;
    }
    return 0;
}
