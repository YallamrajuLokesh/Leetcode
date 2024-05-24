#include<iostream>
using namespace std;
void print(int i,int n){
   
    if(i>n){
        return;
    }
    cout<<i<<endl;
    i++;
    print(i,n);
}
int main(){
     int n;
    
    cin>>n;
    print(1,n);
    return 0;
}


//reverse n to 1
#include<iostream>
using namespace std;
void print(int n){
    int i=1;
    if(i>n){
        return;
    }
    cout<<n<<endl;
    n--;
    print(n);
}
int main(){
     int n;
    
    cin>>n;
    print(n);
    return 0;
}
