#include<bits/stdc++.h>
using namespace std;
void ins(string *text,int pos,string *pattern)
{
    string first_part,second_part;
    int len = (*text).size();
    for(int i=0; i<pos-1; i++)
        first_part = first_part+ (*text)[i];

    for(int i=pos-1; i< len;i++)
        second_part = second_part+ (*text)[i];

    *(text) = first_part + *(pattern) + second_part;

}
int main()
{
    int pos;
    string text,pattern;
    cout<<"Enter the Text:";
    getline(cin,text);
    cout<<"Enter the substring:";
    getline(cin,pattern);
    cout<<"Enter the position:";
    cin>>pos;
    ins(&text,pos,&pattern);
    cout<<text<<endl;
}
