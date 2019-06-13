#include<bits/stdc++.h>
using namespace std;

long int largest_prime_factor(long int n) {
    long int ans = 2;
    while(n % 2 == 0)
        n = n / 2;
    for(int i = 3; i * i <= n; i += 2){
        while(n % i == 0){
            n = n / i;
            ans = i;
        }
    }
    if(n != 1)
        ans = n;
    return ans;
}

int main(){
    long int n;
    cin>>n;
    cout<<largest_prime_factor(n)<<endl;
    return 0;
}