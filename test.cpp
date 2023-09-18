#include <iostream>  
#include <string>
using namespace std;;
int num[1000002]={0,};
int main(){
  int test_case=1;
  int T;
  cin >> T;
  while(T>0){
    int N; cin >> N;
    long long result=0;
    for(int i=0;i<N;i++){
      cin >> num[i];
    }
    int end_num=num[N-1];
    for(int i=N-1;i>=0;i--){
      if(end_num>=num[i]){
        result = result + (end_num-num[i]);
      }
      else{
        end_num=num[i];
      }
    }
    cout << "#" << test_case << " " << result << '\n';
    test_case++; 
    T--;
    for(int i=0;i<N;i++){
      num[i]=0;
    }
  }
  return 0;
}
