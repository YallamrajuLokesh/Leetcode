#include<iostream>
using namespace std;
void print(int n){
    if(n>5){
        return;
    }
    cout<<"loki"<<endl;
    n++;
    print(n);
}
int main(){
    print(1);
    return 0;
}
