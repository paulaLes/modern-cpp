#pragma once

enum class Color : unsigned char {
    WHITE,
    RED, 
    BLUE
};

class Shape
{
    Color color = Color::WHITE;
public:
    virtual ~Shape() {}

    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
    virtual void print() const;
};
