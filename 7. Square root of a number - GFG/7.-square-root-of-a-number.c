// { Driver Code Starts
//Initial Template for C

#include<stdio.h>
  

 // } Driver Code Ends
//User function Template for C

long long int floorSqrt(long long int x) 
{
    int low = 1,high=x;
    long long int mid;
    int result = 0;
    
    while(low<=high){
        mid = (low+high)/2;
        if(mid*mid<=x){
        result = mid;
        low=mid+1;
        }
        else{
        high=mid-1;
        }
    }
    return result;
}

// { Driver Code Starts.

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long n;
		scanf("%ld", &n);
	
		printf("%ld\n", floorSqrt(n));
	}
    return 0;   
}
  // } Driver Code Ends