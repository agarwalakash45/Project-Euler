//https://projecteuler.net/problem=4
#include<bits/stdc++.h>
using namespace std;

bool check_palindrome(int n, int d) {
    for(int i = 0; i <= (d - 1)/2; i++){
        int a = (n / (int)pow(10, i)) % 10;
        int b = (n / (int)pow(10, d - i - 1)) % 10;
        if(a != b)
            return false;
    }
    return true;
}

int num_of_digits(int n) {
    int c = 0;
    while(n > 0) {
        n /= 10;
        c++;
    }
    return c;
}

int largest_palindrome(int dig) {
    int l = pow(10, dig - 1);
    int r = pow(10, dig) - 1;
    int ans = INT_MIN;
    for(int i = r; i >= l; i--){
        for(int j = i; j >= l; j--){
            int k = i * j;
            if(check_palindrome(i * j, num_of_digits(i * j)) && (i * j) >= ans){
                ans = (i * j);
            }
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<largest_palindrome(n)<<endl;
//    cout<<check_palindrome(9009, 4)<<endl;
    return 0;
}