#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	int a,b,c;
	while(T--)
	{
	   cin>>a;
	   cin>>b;
	   cin>>c;
	   if(a == b)
	        {
	            cout<<c<<endl;
	            
	        }
	   else if(b == c)
	   {
	       cout<<a<<endl;
	   }
	   else
	   {
	       cout<<b<<endl;
	   }
	}

}
