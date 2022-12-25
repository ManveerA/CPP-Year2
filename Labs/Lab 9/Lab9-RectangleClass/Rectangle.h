#pragma once
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
public:
	Rectangle();
	void setLength(float l);
	void setWidth(float w);
	float getLength();
	float getWidth();
	float calcPerimeter();
	float calcArea();
private:
	float length;
	float width;
};
#endif