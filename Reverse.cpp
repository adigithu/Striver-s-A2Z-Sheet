#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    int n=num;
    cout<<"Enter a number:";
    cin>>num;
    int rev=0;
    while(num>0){
        int ld=num%10;
        rev=(rev*10)+ld;
        num=num/10;
    }
    cout<<"The reverse of "<<n<<" is "<<rev<<endl;
    return 0;
}