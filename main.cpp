#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number" << endl;
cin>>n;
int i=2;
int sum=0;
    while(n%2==0 && i<=n){
sum=i+sum;
i=i+2;
}
cout<< "sum is :"<< sum << endl;
}
