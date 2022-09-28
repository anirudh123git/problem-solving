#include<iostream>
using namespace std;
bool pal(int n){
int flag=n;
int rev=0;
  while(n>0){
    int a=n%10;   
    rev=rev*10+a;
    n=n/10;

    
  }
  if(rev==flag)
    return true;
  else
    return false;



  
}

int main(){
  
  
  int n;
cout<<"enter a number:"<<endl;
  cin>>n;
  if(pal(n)) 
    cout<<"palindrome"<<endl;
  else
    cout<<"not palindrome"<<endl;
  



return 0;
  
}
