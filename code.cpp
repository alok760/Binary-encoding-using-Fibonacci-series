#include<iostream>
#include<vector>
using namespace std;
int last(int farr[],int num)
{
    int i=0;
    while(1)
    {
        if(farr[i]>num)
        return farr[i-1];
        if(farr[i]==num)
        return farr[i];
        i++;
    }
}

int find(int farr[],int last)
{
    int i=0;
    while(1)
    {
        if(farr[i]==last)
            return i;
        i++;
    }
}
int main()
{
    int inp;
    cin>>inp;
    int farr[inp];
    int i=2,j=1,k=2;
    farr[0]=j;
    farr[1]=k;
    while(1)
    {
        farr[i]=(j+k);
        k=farr[i-1];
        j=farr[i];
        if(farr[i]>=inp)
            break;
        i++;
    }
    i++;
    vector<int> out(i,0);
    int l;
    int remainder=inp;
    while(1)
    {
        l=last(farr,remainder);
        out[find(farr,l)]=1;
        if(remainder==l)
            break;

        remainder-=l;
    }

    for(int z=0;z<out.size()-1;z++)
        cout<<out[z];
    if(out[i-1]==1)
        cout<<1;
    cout<<1;
    return 0;
}
                    // credits M.shweta
