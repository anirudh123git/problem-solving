#include<bits/stdc++.h>
using namespace std;
void anagram(string s1, string s2) {
  int f[26] = {0};
  for (int i = 0; s1[i] != '\0'; i++) {
    f[s1[i] - 97]++;
  }
  for (int i = 0; s2[i] != '\0'; i++) {
    f[s2[i] - 97]--;
  }
  int flag = 0;
  for (int i = 0; i < 26; i++) {

    if (f[i] != 0) {
      flag = 1;
      break;
    }
  }
  if (flag == 0) {
    cout << "yes";

  } else {

    cout << "no";
  }
}
int main(){
    
    string a="anirudh";
    string b="nirudhb";
    anagram(a,b);
    
    
    
    
    return 0;
    
}
