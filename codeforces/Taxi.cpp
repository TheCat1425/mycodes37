#include<bits/stdc++.h>
using namespace std;

int main() {
    int size;
    cin >> size;
    vector<int> array(size);
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
    sort(array.begin(), array.end());
    int count1 = 0,count2=0,count3=0,count4=0;
    for (int i = 0; i < size; i++) {
        if(array[i]==1)      count1++;
        else if(array[i]==2) count2++;
        else if(array[i]==3) count3++;
        else count4++;
        }
        int mint=count4;
        while(count1!=0&&count3!=0)
        {
            count3=count3-1;
            count1=count1-1;
            mint = mint + 1;
        }
        if(count1==0&&count3!=0)
        {
            mint=mint+count3;
            count3=0;
        }
        mint=mint+ count2/2;
        if(count2%2!=0)
        {
            if(count1<=2)
            {
                mint=mint+1;
                count2=0;
                count1=0;
            }
            else
            {
                count1= count1-2;
                mint=mint+1;
                count2=0;
            }
        }
        if(count1!=0)
        {
            mint=mint+count1/4;
            if(count1%4!=0)
            {
                mint=mint+1;
            }
        }
        cout<<mint<<endl;
    return 0;
}
