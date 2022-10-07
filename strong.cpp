#include<iostream>
using namespace std;
int fact(int n){
if(n==0 || n==1)
    return 1;
return n*fact(n-1);    

}
bool strong(int n){

int f=n;
int sum=0;
while(n!=0){

int a=n%10;
sum+=fact(a);
n=n/10;




}
if(sum==f){
    return 1;
}
return 0;




}
int main(){
cout<<"enter a number N:"<<endl;
int n;
cin>>n;
for(int i=1;i<=n;i++){
if(strong(i)){
    cout<<i<<endl;
}


}



return 0;
}