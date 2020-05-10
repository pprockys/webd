/*~~~~~~~~~~~~~~~~~~~~~~~~*
 *  Jeevan ek rahasya hai *
 *     slow_processor     *
 * Author-maskman_lucifer *
 *~~~~~~~~~~~~~~~~~~~~~~~~*/
#include <bits/stdc++.h>   
#define IO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long 
#define mp make_pair
#define pll pair<ll,ll>
#define pb push_back
#define M 1000000007
#define PI 3.141592653589793
#define lc '\n'
using namespace std;
ll pt[1000000];
ll sz[1000000];
void ms(ll v) 
{
    pt[v]=v;
    sz[v]=1;
}
ll fs(ll v) 
{
    if (v==pt[v])
    {
        return v;
    }
    else
    {
        return pt[v]=fs(pt[v]);
    }
}
void us(ll a,ll b) 
{
    a=fs(a);
    b=fs(b);
    if (a!=b) 
    {
        if(sz[a]<sz[b])
        {
            swap(a,b);
        }
        pt[b]=a;
        sz[a]+=sz[b];
    }
}
int main()
{
    IO
    
    return 0;
}