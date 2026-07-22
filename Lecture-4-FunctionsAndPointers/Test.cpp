#include <iostream>
using namespace std;

int factorial(int x){
    int fact=1;
    for(int i=1; i<=x; i++){
        fact=fact*i;
    }
    return fact;
}

int ncr(int n, int r){
    int fact_n=factorial(n);
    int fact_r=factorial(r);
    int fact_rn = factorial(n-r);

    int ans= fact_n/(fact_r*fact_rn);

    return ans;
}

int main()
{
    int n,r;
    cin>>n>>r;
    int ans =ncr(n,r);
    cout<<ans;
    return 0;
}