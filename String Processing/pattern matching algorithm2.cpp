#include<bits/stdc++.h>
#define NO_OF_CHAR 256
using namespace std;
void buildTransitionTable(char *pat,int m,int TF[][NO_OF_CHAR])
{
    int lps=0,i,x;
    for(x=0;x<NO_OF_CHAR;x++)
        TF[0][x]=0;
    TF[0][pat[0]]=1;
    for(i=1;i<=m;i++)
    {
        for(x=0;x<NO_OF_CHAR;x++)
            TF[i][x]=TF[lps][x];
        TF[i][pat[i]]=i+1;
        if(i<m)
            lps=TF[lps][pat[i]];
    }
}
void SearchUsingPatternMatching2(char *pat,char *text)
{
    int M=strlen(pat);
    int N=strlen(text);
    int TF[M+1][NO_OF_CHAR];
    buildTransitionTable(pat,M,TF);
    int i,j=0;
    for(i=0;i<N;i++)
    {
        j=TF[j][text[i]];
        if(j==M)
        {
            cout<<"Index of pattern"<<i-M+1<<endl;
        }
    }
}
int main()
{
    char *text="aabc";
    char *pat="aab";
    SearchUsingPatternMatching2(pat,text);
    return 0;

}
