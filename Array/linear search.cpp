#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool chk=false;
    int n,k;
    scanf("%d",&n);
    int ara[n];
    for(k=0;k<n;k++)
        scanf("%d",&ara[k]);

    int loc;
    cout<<"Enter the number you want to find:";
    int item;
    cin>>item;
    for(k=0;k<n;k++)
    {
        if(item==ara[k]){
         loc=k;
         chk=true;
        }

    }
    if(chk)
        cout<<"Found at position: "<<loc+1<<endl;
    else
        cout<<"Not found"<<endl;

    return 0;
}
