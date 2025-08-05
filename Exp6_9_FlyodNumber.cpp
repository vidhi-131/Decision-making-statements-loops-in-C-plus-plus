// VIDHI RATAN
// 24070123131
// B2
#include <iostream>
using namespace std;
int main(){
    int n;
    int c=1;
    cout << "Enter Number:";
    cin >> n;
  for(int i = 1;i <= n;i++){
    for(int j = 1;j<=i;j++){
        cout << c << " ";
        c++;
    }
    cout << "\n";  
  }
  return 0;
}
/*
Output:
Enter Number:4
1 
2 3 
4 5 6 
7 8 9 10 
*/
