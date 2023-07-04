#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;

    while(i<=n){
int star = i - 1;
        while (star)
        {
            cout << "*";
            star--;
        }
int star2=i-1;
while(star2){
    cout<<"*";
    star2--;
}



        cout<<endl;
        i=i+1;

    }
}



