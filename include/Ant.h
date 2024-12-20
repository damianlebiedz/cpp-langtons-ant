#include <SFML/Graphics.hpp>

#ifndef ANT_H
#define ANT_H

enum Direction { NORTH, EAST, SOUTH, WEST };

class Ant {
public:
    Ant(int startX, int startY);
    void turnRight();
    void turnLeft();
    void moveForward();
    int getX() const;
    int getY() const;
    Direction getDirection() const;

    void move();
    void draw(sf::RenderWindow& window) const;

private:
    int x, y;
    Direction dir;

    int direction;

};

#endif
