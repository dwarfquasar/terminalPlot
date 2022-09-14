#include <iostream>
#include <iomanip>

using namespace std;

int x[10], y[10], maxNum;
/*
void filler(&num){
  
}
*/
int main() {
  for(int i=0; i < 10; i++){
    x[i] = i;
    y[i] = (i*i) / 2;
  }

  for(int i=9; i > 0; i--){
    int tempMaxNum;
    //go through y[10] to y[0], taking x[0] and add spaces before x val
    cout << y[i] << ' ' << setw(y[i]) << '*' << endl;
      }
  cout << setfill('-') << setw(3+y[9]) << endl;
  cout << ' ' << y[9] << endl;
}
