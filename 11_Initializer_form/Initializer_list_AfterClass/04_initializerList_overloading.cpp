#include<iostream>

class Triangle
{
public:
	Triangle(int height, int width, int length)
	{
		std::cout << "Triangle::3_parameter\n";
	}
	Triangle(int height, int width)
	{
		std::cout << "Triangle::2_parameter\n";
	}
};

void draw_rect(Triangle r)
{}

int main()
{
	// we are enclosing the object within flower brace
	draw_rect({5, 6, 7});
}
