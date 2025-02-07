#include<bits/stdc++.h>
using namespace std;
int count(int n){
    int cnt=0;
    while(n>0){
        int last_digit=0;
        cnt=cnt+1;
        n=n/10;
    }
    return cnt;
}
int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;
    int value=count(num);
    cout<<"The number of digits in "<<num<<" is "<<value<<endl;
    return 0;
}