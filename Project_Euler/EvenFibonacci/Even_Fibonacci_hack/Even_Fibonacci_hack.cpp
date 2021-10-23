#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        long a=0,b=1,c=1,sum=0;
        do
        {
            a=b;        	
            b=c;
            if(c%2==0)
            {
                sum+=c;
            }
            c=a+b;
        }while(c<n);
    cout<< sum << endl;        
    }
    return 0;
}