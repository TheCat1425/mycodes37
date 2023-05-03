#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 25;
    int a[30];
    int x;
    cin >> x;
    a[0] = 0;
    a[1] = 1;
    for(int i = 2; i < n; i++){
        a[i] = a[i-1] + a[i-2];
    }
    cout << endl;
    for(int i = 0; i < n; i++){
        cout << "  " << a[i];
    }
    cout << "\n";
    bool is_fibonacci = false;
    for(int i = 0; i < n; i++){
        if(x == a[i]){
            is_fibonacci = true;
            break;
        }
    }
    if(is_fibonacci){
        cout << "\nFibonacci number\n";
    } else {
        cout << "Not a Fibonacci number\n";
    }
    return 0;
}
