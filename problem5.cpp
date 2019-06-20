#include<bits/stdc++.h>
#define ll long int
using namespace std;

void swap(ll *a, ll *b){
    int t = *a;
    *a = *b;
    *b = t;
}

ll gcd(ll a, ll b) {
    if(a < b)
        swap(&a, &b);

    if(a % b == 0)
        return b;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    return (a * b) / gcd(a, b);
}

ll lcm_of_n_numbers(int y){
    int ans = 1;
    for(int i = 2; i <= y; i++){
        cout<<ans<<"\t"<<i<<"---->"<<lcm(ans, i)<<endl;
        ans = lcm(ans, i);
    }
    return ans;
}

int main(){
    int y;
    cin>>y;
    cout<<lcm_of_n_numbers(y)<<endl;
    return 0;
}
