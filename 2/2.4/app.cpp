#include <iostream>
#include "constants.h"

unsigned getHeightOfTower() {
  std::cout << "Enter the initial height of the tower in meters: ";
  unsigned heightOfTower;
  std::cin >> heightOfTower;
  return heightOfTower;
}

double setHeightOfBall(const unsigned &seconds, const double &heightOfTower) {
  return heightOfTower - myConstants::gravity * seconds * seconds / 2;
}

void printHeightOfBall(const unsigned &seconds, const double &heightOfBall) {
  if (heightOfBall > 0.0) {
    std::cout << "At " << seconds << " seconds, the ball is at height: "
              << heightOfBall << " meters\n";
  } else {
    std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
  }
}

int main() {
  const unsigned heightOfTower(getHeightOfTower());
  
  double heightOfBall(heightOfTower);
  printHeightOfBall(0, heightOfBall);
  
  heightOfBall = setHeightOfBall(1, heightOfTower);
  printHeightOfBall(1, heightOfBall);

  heightOfBall = setHeightOfBall(2, heightOfTower);
  printHeightOfBall(2, heightOfBall);
  
  heightOfBall = setHeightOfBall(3, heightOfTower);
  printHeightOfBall(3, heightOfBall);

  heightOfBall = setHeightOfBall(4, heightOfTower);
  printHeightOfBall(4, heightOfBall);

  heightOfBall = setHeightOfBall(5, heightOfTower);
  printHeightOfBall(5, heightOfBall);
  return 0;
}