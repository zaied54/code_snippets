#include <stdio.h>
#include <iostream>
#include <vector>
#include "fastscan.h"

using namespace std;

int main(){
  int t = 0;
  fastscan(t);

  vector<int> nums (t,0);
  for(int i=0;i<t;i++){
    fastscan(nums[i]);
  }

  vector<int> nums2 (t,0);
  for(int i=0;i<t;i++){
    fastscan(nums2[i]);
  }

  for(int i=0;i<t;i++){
    cout<<nums2[i]<<endl;
  }

  return 0;
}
