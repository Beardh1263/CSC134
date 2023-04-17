/*
The Restaurant class

*/
#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <string>
#include <iostream>
using namespace std;

// describe the class
class Restaurant {                          // Info about a restaurant
  public:                                 
    void SetName(string restaurantName);    // Sets name
    void SetRating(int userRating);         // Sets (1-5, with 5 best)
    void Print();                           // Prints name and rating 

  private:                         // nobody outside the class can touch these
    string name;
    int rating;

};

// implement the class

// Sets the restaurant's name
void Restaurant::SetName(string restaurantName) {
  name = restaurantName;
}

// Sets the rating
void Restaurant::SetRating(int userRating) {
  rating = userRating;
}

// Prints name and rating on one line
void Restaurant::Print() {
  cout << name << " -- " << rating << endl;
}

#endif // RESTAURANT_H