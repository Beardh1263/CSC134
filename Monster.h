/*
The Monster class

*/
#ifndef MONSTER_H
#define MONSTER_H

#include <string>
#include <iostream>
using namespace std;

// describe the class
class Monster {                          // Info about a restaurant
  public:                                 
    void SetName(string monsterName);    // Sets name
    void SetRating(int userRating);         // Sets (1-5, with 5 best)
    void Print();                           // Prints name and rating 

  private:                         // nobody outside the class can touch these
    string name;
    int rating;

};

// implement the class

// Sets the restaurant's name
void Monster::SetName(string monsterName) {
  name = monsterName;
}

// Sets the rating
void Monster::SetRating(int userRating) {
  rating = userRating;
}

// Prints name and rating on one line
void Monster::Print() {
  cout << name << " -- " << rating << endl;
}

#endif // RESTAURANT_H