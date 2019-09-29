#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;
int main(){

  int l;
  cin >> l;
  //printf("%d",l);
  vector<int> in (l+l);
  for(int i=0;i<(l+l);i++){
    cin >> in[i];
    //printf("%d",s[i]);
  }
  vector<int>s (l);
  vector<int>e (l);
  for(int i=0;i<l;i++){
    s[i] = in[i];
    //cout<<s[i]<<endl;
  }
  for(int i=l;i<(2*l);i++){
    e[i-l] = in[i];
  }

  int fp = 0;
  int sp = 0;
  int cnt = 0;

  sort(s.begin(),s.end());
  sort(e.begin(),e.end());
  int max_cnt = 0;
  while(fp < l && sp < l){
    if(e[sp] > s[fp]){
      cnt++;
      //cout<<cnt<<endl;
      fp++;
      if(cnt > max_cnt)
        max_cnt = cnt;
    }
    else if(e[sp] < s[fp]){
      cnt--;
      sp++;
    }
    else{
      fp++;
      sp++;
    }
  }
  printf("%d\n",max_cnt);
  return 0;
}
