#include <iostream>

using namespace std;

int nthFibonacci(int n){
    if (n == 0 || n == 1)
        n == 1;
    else
        n = nthFibonacci(n - 2) + nthFibonacci(n - 1);
    
    return n;
}

int main(){
    int n;
    cin >> n;

    cout << nthFibonacci(n) << endl;
}