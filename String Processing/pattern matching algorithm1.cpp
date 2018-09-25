#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,i,j,loc,l;
    bool found=false;

    string text,pat;
    cout<<"Enter the Text: ";
    getline(cin,text);
    cout<<"Enter the pattern: ";
    getline(cin,pat);
    int m=text.size();
    int n=pat.size();
    for(i=0; i<text.size(); i++)
    {
       for(j=i,l=0; j<i+n; j++,l++)
       {
           if(pat[l]!=text[j])
              break;
       }
       if(j==i+n)
       {
           found=true;
           loc=i;
       }

    }
    if(found)
        cout<<"Found at position: "<<loc<<endl;
    else
        cout<<"Not found"<<endl;

    return 0;
}

