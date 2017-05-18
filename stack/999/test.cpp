#include <iostream>
#include <stack>
using namespace std;

int main(){
  std::stack<int> S;
  for (int i = 0; i < 10; i++){
    S.push(i);
  }

  while (!S.empty()){
    cout << S.top() << " ";
    S.pop();
  }
  cout << endl;
  return 0;
}
