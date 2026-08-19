#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string str, int st, int end){
    while(st < end){
        if(str[st] != str[end]){
            return false;
        }
        st++;
        end--;
    }
    // cout << str[i] << " " << str[end-i] << " " << "true" << endl;
    return true;
}

int main() {
    string str;
    cin >> str;
    int cnt=0;

    for(int i=0; i<str.size(); i++){
        for(int j=i ; j<str.size() ; j++){
            if(isPalindrome(str, i, j)){
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}