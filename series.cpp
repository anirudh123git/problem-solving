#include <iostream>
#include<math.h>
using namespace std;
int fact(int n) {

  if (n == 0 || n == 1) {
    return 1;
  } else
    return n * fact(n - 1);
}
void series1(int n) {
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += fact(i);
  }
  cout << "1!+2!+3!+4!........" << endl;
  cout << "sum of first " << n << "terms is " << sum << endl;
}
void series2(int n){

int sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += i/fact(i);
  }
  cout << "1/1!+2/2!+3/3!+4/4!........" << endl;
  cout << "sum of first " << n << "terms is " << sum << endl;


  
}
void series3(int n,int x){
float sum=1;
for(int i=1;i<=n;i++){
sum+=pow(x,i)/fact(i);


  
}

cout<<"1+x+x2/2!+x3/3!....."<<endl;
  cout << "sum of first " << n << "terms is " << sum << endl;

  
}
int main() {
  int y;
  cout << "enter terms:" << endl;
  cin >> y;
  series3(y,2);
}
