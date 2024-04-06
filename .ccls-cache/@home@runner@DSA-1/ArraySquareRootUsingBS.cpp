#include <iostream>

using namespace std;

int binarySearch(int n){
  int s = 0;
  int e = n;
  int mid = s + (e-s)/2;
  int ans;
  while(s <= e){
    if(mid*mid == n) return mid;
    if(mid*mid < n){
      ans = mid;
      s = mid + 1;
    }
    else {
      e = mid - 1;
    }
    mid = s + (e-s)/2;
  }
  return ans;
}

int main(){
  int res = binarySearch(24);
  cout << res;
}