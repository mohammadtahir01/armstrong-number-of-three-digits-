#include <iostream>
using namespace std;
int main(){
    int n,rev,sum=0;
    cout<<"Enter the number:";
    cin>>n;
    int a = n;
    while(n>0){
        rev=n%10;
        sum=sum+(rev*rev*rev);
        n=n/10;
    }
    cout<<rev;
    if(a==sum){
        cout<<"yes";
    }else{
        cout<<"not";
    }

    return 0;
}