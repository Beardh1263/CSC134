// CSC 134
// M6T1 - restaurant program (part 1)
// Hunter Beard
//4/27/2023

#include <iostream>
using namespace std;
#include "Restaurant.h"
#include "Monster.h"

int main() {
  Restaurant favLunchPlace;
  Restaurant favDinnerPlace;
//we use the dot operator to call class methods
  favLunchPlace.SetName("Salsaritas");
  favLunchPlace.SetRating(4);

  favDinnerPlace.SetName("Afghan Kabob");
  favDinnerPlace.SetRating(4);

  cout << "My favorite restaurants: " << endl;
  favLunchPlace.Print();
  favDinnerPlace.Print();

  Monster my_monster;
  my_monster.SetName("diglet");
  my_monster.SetRating(5);
  cout << "My monster: " << endl;
  my_monster.Print();
  return 0;
  
}