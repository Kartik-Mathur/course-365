#include<iostream>
using namespace std;

int seven(int *a,int n,int i){
    if(i==n){
        return -1;

    }
    if(a[i]==7){
        return i;
    }

    int ans=seven(a,n,i+1);
    return ans;
}

int lastSeven(int *a,int n){
    if(n==0){
        return -1;
    }
    if(a[n-1]==7){
        return n-1;
    }

    int ans=lastSeven(a,n-1);
    return ans;
}

int main()
{
    int a[]={1,2,3,4,5,6,7};
    int i;
    int n=sizeof(a)/sizeof(int);

    // cout<<seven(a,n,0)<<endl;
    // cout<<lastSeven(a,n,0);

    cout << '5' - '0' << endl; // aise toh iski ascii value aaegi...
    cout << int('0') << endl; // aise toh iski ascii value aaegi...
    cout << int('5') << endl; // aise toh iski ascii value aaegi...
    
    cout << int('5'+'0') << endl; // aise toh iski ascii value aaegi...
    cout << int('6') << endl; // aise toh iski ascii value aaegi...
    cout << int('7') << endl; // aise toh iski ascii value aaegi...
    cout << int('8') << endl; // aise toh iski ascii value aaegi...

    return 0;
}















