#include<iostream>
#include<math.h>
using namespace std;
bool armstrong(int n){
int f=n;
int o=n;
int sum=0;
int cnt=0;
while (n>0)
{



n=n/10;

cnt++;





}
while (f>0)
{

int a=f%10;
sum+=pow(a,cnt);
f=f/10;







}
if(o==sum){
return 1;


}

return 0;




}
int main(){
int m,n;
cout<<"enter startng and ending range:"<<endl;
cin>>m>>n;
for(int i=m;i<=n;i++){
    if(armstrong(i))
         cout<<i<<endl;
}




return 0;
}