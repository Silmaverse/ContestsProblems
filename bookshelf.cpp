#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
const int MAXN = 200005;

int arr[MAXN];
int left_arr[MAXN];
int mid_arr[MAXN];
int right_arr[MAXN];


int main(){
  int t;
  scanf("%d",&t);
  while (t--){
     long long n;
     
     for (int i =1; i <=n; i++){
        scanf("%d",&arr[i]);
     }

     sort(arr+1,arr+n+1);
     int maxh=arr[n];


     
  }
  return 0;  
}