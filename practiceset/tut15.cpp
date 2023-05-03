#include<bits/stdc++.h>
using namespace std;
#define ll long long int

//function prototype

// type function-name (arguments);
int sum(int a, int b); //---> acceptable
int sum(int, int);
int main() {
    int n1,n2;
    cin>>n1>>n2;
    cout<<"The sum is "<<sum(n1,n2);
    return 0;
}
int sum(int a, int b){
    int c = a+b;
    return c;
}