#include<bits/stdc++.h>
using namespace std;
string del(string *text,int pos,int length)
{
    string first_part,second_part;
    int x;
    int len = (*text).size();
    for(int i=0;i<pos-1;i++)
        first_part = first_part+(*text)[i];
        x=pos-1+length;
        for(int i=x; i<len; i++)
            second_part = second_part + (*text)[i];
        (*text)=first_part+second_part;
}
int main()
{
    int pos,length;
    string text;
    cout<<"Enter the Text:";
    getline(cin,text);
    cout<<"Enter the position:";
    cin>>pos;
    cout<<"Enter the length:";
    cin>>length;
    del(&text,pos,length);
    cout<<text<<endl;
}
