/*#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin >> x;
    if(x>=18){
        cout<<"You Are an Adult";
    }
    else{
        cout<<"No You are not an adult";
    }
    return 0;
}
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
void pat(int N){
    for(int i=0 ; i<N ; i++){
        for(int j=0 ; j<N ; j++){
            cout<<"*";          
        }
        cout<<endl;
    }
}
int main(){
    int N;
    cin>>N;
    pat(N);
    return 0;
}