#include<bits/stdc++.h>
using namespace std;

const int MAX = 4000000;

int sum_even_fibonacci() {
    int x = 1, y = 2, sum = 0;
    while(y <= MAX) {
//        cout<<y<<"\t";
        sum += y;
        int z = x;
        x = 2 * y + x;
        y = (2 * (z + y) + y);
    }
    return sum;

}

int main(){
    cout<<sum_even_fibonacci();
    return 0;
}