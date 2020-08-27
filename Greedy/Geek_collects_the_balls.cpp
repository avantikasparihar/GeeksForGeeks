#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

	// Geek collects the balls
    
	int t;
	cin >> t;
	while(t--)
	{
		int n,m;
		cin >> m >> n;
		int a[m+1], b[n+1];	   // take +1 the size because of index incrementation

		for(int i=0;i<m;i++)
			cin >> a[i];

		for(int i=0;i<n;i++)
			cin >> b[i];

		long long ans=0, sum1=0, sum2=0;
		int j=0, k=0;
	    while(j<m && k<n)
	    {
	        if(a[j]<b[k])
	        	sum1 += a[j++];
	        else if(a[j]>b[k])
	        	sum2 += b[k++];
	        else {
	            int x = a[j];
	            while(a[j] == x)
	        	    sum1 += a[j++];
	        	while(b[k] == x)
	        	    sum2 += b[k++];
	            ans += max(sum1,sum2);
	            sum1=0;
	            sum2=0;
	        }
	    }
	    while(j<m)
	    {
	        sum1 += a[j++];
	    }
	    while(k<n)
	    {
    		sum2 += b[k++];
	    }
	    ans = ans + max(sum1,sum2);
	    cout << ans << endl;
	}
    
	return 0;
}