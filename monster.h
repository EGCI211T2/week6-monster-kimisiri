#ifndef monster_h
#define monster_h

#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

class monster{
  private:
    string name;
    int hp,potion;
  public:
    void attack(monster &other) {
      other.dieorsmth();
    };
    void heal() {
      if (potion > 0) {
        potion--;
        hp+=50;
      }
    };

    void display() {
      cout << name << " ";
      cout << hp << endl;
    }

    monster(string sname = "Anon", int ihp = 100, int ipotion = 2) {
      name = sname;
      hp = ihp;
      potion = ipotion;
      //cout << "monster " << name << " begin" << endl;
    };
    ~monster() {
      //printf("%s ends\n", name.c_str());
    }

    void operator+=(int ot) {
      hp += ot;
    }

    bool isdead() {
      return hp <= 0;
    }

    void dieorsmth() {
      hp = 0;
    }
    
};
#endif
