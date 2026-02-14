#include <iostream>
#include <cstdio>
#include "monster.h"
#include "thanos.h"

using namespace std;


int main(int argc, char* argv[]) {
  Thanos T;
  int n;
  cout<<"How many monsters? : ";
  cin>>n;
  monster *m=new monster[n];

  ++T;
  ++T;
  T.snap_finger(m, n);
  ++T;
  ++T;
  T.snap_finger(m, n);
  ++T;
  ++T;
  T.snap_finger(m, n);
  printf("All remaining\n");
  for (int i=0; i<n; i++) {
    if (!m[i].isdead()) {
      m[i].display();
    }
  }
  printf("--------------\n");

  delete[] m;
  return 0;
}
