#include<bits/stdc++.h>
using namespace std;
void replace_(string *text,string *pat1,string *pat2)
{
    int k,i,j,loc,l;
    string temp;

    int m = (*text).size();
    int n = (*pat1).size();

     for(i=0; i<m; i++)
    {

       for(j=i,l=0; j<i+n; j++,l++)
       {
           if((*pat1)[l]!= (*text)[j])
              break;
       }
       if(j==i+n)
       {
           temp = temp + (*pat2);
           i+=n;
       }

           temp = temp + (*text)[i];

    }
    (*text) = temp;

}

int main()
{


    string text,pat1,pat2;
    cout<<"Enter the Text: ";
    getline(cin,text);
    cout<<"Enter the existing pattern which you want to replace: ";
    getline(cin,pat1);
    cout<<"Enter the pattern which you want to insert insted of the pattern: ";
    getline(cin,pat2);
    replace_(&text,&pat1,&pat2);
    cout<<text<<endl;

    return 0;
}


