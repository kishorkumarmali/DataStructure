#include<iostream>
#include<cmath>
using namespace std;


int main()
{
int n;

cout<<"Enter array size ";
cin>>n;
int arr[n];
int i;
cout<<"enter the height of each tower:"<<endl;
for(i=0;i<n;i++)
{
cin>>arr[i];
}
int j,k;
int item,rm,lm,diff=0,sum=0;
for(item=1;item<(n-1);item++)
{
        rm=lm=arr[item];
        for(k=item-1;k>=0;k--)
        {
            if(lm<arr[k])
            {
                lm=arr[k];
            }
        }
        if(lm!=arr[item])
        {
            for(j=item+1;j<=n-1;j++)
            {
                if(rm<arr[j])
                {
                    rm=arr[j];
                }
            }
            if(rm==arr[item])
            {
                lm=arr[item];
            }
        }
        cout<<"lm:"<<lm<<endl;
        cout<<"rm:"<<rm<<endl;
        if(lm>=rm)
        {
            diff=abs(lm-arr[item]);
        }

        cout<<"diff:"<<diff<<endl;
    sum=sum+diff;
}
cout<<"water collection between tower is : "<<sum<<endl;

return 0;
}


