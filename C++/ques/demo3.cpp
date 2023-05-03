#include "bits/stdc++.h"
#include <vector>
using namespace std;
bool getbit(int n,int pos)
{
	return(n & (1<<pos));
}
long long reversedBits() {
		long long X=88;
        long long k=0;
        for(int i=0;i<32;i++)
        {
            if(X&(1<<i))
            {
                cout<<i<<endl;       
            }
            
        }
        return abs(k);
    }

int main() 
{       
    
    
        vector<int> ans;
        int n=4;

        for(int i=0;i<=n ;i++)
        {
            int count=0;
            while(i)
            {
                if(i & 1)
                    count++;
                i=i>>1;
            }
            ans.push_back(count);
        }
}
