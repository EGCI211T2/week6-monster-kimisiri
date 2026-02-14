#ifndef thanos_h
#define thanos_h
#include <cstdlib>
#include <ctime>
#include "monster.h"
#include <cstdio>

using namespace std;

class Thanos {
  private:
    int stones;
    int hp; 
  public:
    /* constructor and destructor */
    void snap_finger(monster *population, int N) {
      if (stones < 6) {
        return;
      }
      int aliveN = 0;
      for (int i = 0; i < N; i++) {
        if (!population[i].isdead()) {
          aliveN++;
        }
      }
      aliveN /= 2;
      //int counter = 10;
      while (aliveN) { //&& counter--) {
        for (int i = 0; (i < N) && (aliveN); i++) {
          if (!population[i].isdead() && (rand()%2)) {
            population[i].dieorsmth();
            aliveN--;
          }
        }
      }
    } 
    /* show all hps
    / clear half of monster hp, if stone =6*/
    void operator++() {
      //printf("%d stones\n", stones);// << stones << " stones" << endl;
      stones++;
    }

    Thanos() {
      stones = 0;
      hp = 100;
      srand(time(NULL));
    }
};
#endif
