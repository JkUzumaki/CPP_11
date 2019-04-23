#include<iostream>

class Rectangle
{
public:
	Rectangle(int r1, int r2, int r3)
	{
		std::cout << "Rectangle::draw_fun\n";
	}
};

class Triangle
{
public:
	Triangle(int v1, int v2, int v3)
	{
		std::cout << "Triangle::draw_fun\n";
	}
};

void draw_fun(Rectangle r)
{

}

int main()
{
	draw_fun({10, 20, 30});
}
