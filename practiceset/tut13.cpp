#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl endl;
typedef struct employee
{
    int eID;
    char favChar;
    float salary;
} ep;

int main() {
    ep harry;
    ep Rohan;

    harry.eID = 1;
    harry.favChar = 'H';
    harry.salary = 1200000000;
    cout<<"the value is "<< harry.salary<<nl;
    cout<<"the value is "<< harry.favChar<<nl;
    cout<<"the value is "<< harry.eID<<nl;

    
    
    return 0;
}