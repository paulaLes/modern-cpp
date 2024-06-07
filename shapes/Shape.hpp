#pragma once

enum class Color : unsigned char{
    White = 0,
    Red,
    Blue
};

class Shape {
    Color color = Color::White;
public:
    virtual ~Shape() {}

    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
    virtual void print() const;
};
