// Problem Code: ALTARAY

#include <iostream>
using namespace std;

void fun(int n, int arr[])
{
    int a[n];
    
    a[n-1] = 1;
    for (int i=n-2; i>-1; i--)
    {
        if (arr[i]>0 && arr[i+1]<0)
        {
            a[i] = 1+a[i+1];
        }
        else if (arr[i]<0 && arr[i+1]>0)
        {
            a[i] = 1+a[i+1];
        }
        else
        {
            a[i] = 1;
        }
    }
    
    for (int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}

int main() {
	// your code goes here
	int t_case;
	cin>>t_case;
	
	for (int i=0; i<t_case; i++)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for (int j=0; j<n; j++)
	    {
	        cin>>arr[j];
	    }
	    
	    fun(n, arr);
	    cout<<"\n";
	}
	return 0;
}
