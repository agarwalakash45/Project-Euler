#include<bits/stdc++.h>

using namespace std;

int sum_of_multiple(int a, int b){
    //Find the last term in the Arithmetic Progression
    int l = b - (b%a);
    //Find the number of terms till the last term
    int n = (l - a)/a + 1;

    //Sum of AP
    return (n * (a + l)) / 2;
}

int main(){
    int n1, n2, y;
    cin>>n1>>n2>>y;
    //Use y-1 to exclude last number
    int ans = sum_of_multiple(n1, y-1) + sum_of_multiple(n2, y-1) - sum_of_multiple
    (n1 * n2, y-1);
    cout<<ans<<endl;

    return 0;
}