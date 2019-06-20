#include<bits/stdc++.h>
using namespace std;

int sum_of_squares(int n) {
    return (n * (n + 1) * (2 * n + 1)) / 6;
}

int square_of_sum(int n) {
    return (n * (n + 1) / 2) * (n * (n + 1) / 2);
}

int main(){
    int n;
    cin>>n;
    cout<<abs(sum_of_squares(n) - square_of_sum(n))<<endl;
    return 0;
}
