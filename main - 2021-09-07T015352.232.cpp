/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
 
using namespace std;
int fun(int arr[],int n)
{
    sort(arr,arr+n);
    int p=0;
    int q=0;
    int x=INT_MIN;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==arr[i+1])
        {
            p++;
            
        }
        if(arr[i]!=arr[i+1])
        {
            q++;
            if(p>x)
            {
                x=p;
            }
            p=0;
        }
        
    }
    if(p>x)
    {
        x=p;
    }
    p=0;
    
    if(n==1)
    {
        return 0;
    }
    if(q==0)
    {
        return 0;
    }
    if(x==0)
    {
        return 1;
    }
    if(q>x&&x!=0&&q!=0)
    {
        return min(q,x+1);
    }
    if(q<x&&x!=0&&q!=0)
    {
        return min(q+1,x);
    }
    if(q==x&&x!=0&&q!=0)
    {
        return q;
    }
    
}
int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        
        
        cout<<fun(arr,n)<<endl;
        
        
        t--;
    }

    return 0;
}
