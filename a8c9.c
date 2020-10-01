/*#include<stdio.h>
int main()
{
        int n,x,i,s=0;
                printf("givem n:");
        scanf("%d",&n);
        printf("enter %d numbers ",n);
        for(i=1;i<=n;i++)
        {
                scanf("%d",&x);
                
                if(x%2==1)
		{
			s=s+x;
		}
        }
        printf("sum of last digits are %d",s);
}

*/
Updated Using Recursion
//More Efficient
#include <bits/stdc++.h>
using namespace std;
#define ll           long long
#define rep(i,j,n)   for(ll i=j;i<n;i++)
#define scn(a)       scanf("%lld",&a)
#define nl           printf("\n")
#define scns(a,b)    scanf("%lld %lld",&a,&b)
int solve(int n)
{
 
    if (n == 0)  
    return 0;  
    return (n % 10 + solve(n / 10));  
}  
  

int main()  
{  
    int n;
    cin>>n; 
    int result = solve(n);  
    cout <<result<<endl;  
    return 0;  
}  












































