#include <stdio.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int d,n;
    cin >> d >> n;
    vector<int> dur;

    for(int i=0;i<n;i++){
        int curr_dur;
        cin >> curr_dur;
        dur.push_back(curr_dur);
    }
    vector<int> orig = dur;
    sort(dur.begin(),dur.end());
    int max_now = INT_MIN;
    vector<int>::iterator first;
    vector<int>::iterator second;
    vector<int>::iterator i;
    for(i=dur.begin();i != dur.end();i++){
        int tar = d - *i - 30;
        vector<int>::iterator s = std::upper_bound(dur.begin(),dur.end(),tar);
        
        if((s-1) != i){        
            if(*(s-1) + *i > max_now){
                max_now = *(s-1) + *i;
                first = i;
                second = (s-1);
            }
        }
        
    }

    //cout<< (first-dur.begin()) << " " << (second-dur.begin()) <<endl;
    int val1 = *first;
    int val2 = *second;
    int idx1, idx2 = -1;
    for(int j=0;j<orig.size();j++){
        if(orig[j] == val1){
            idx1 = j;
        }
        else if(orig[j] == val2){
            idx2 = j;
        }
    }
    cout << idx1 << " " << idx2 << endl;
    
    return 0;

}