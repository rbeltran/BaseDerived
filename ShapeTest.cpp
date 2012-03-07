#include <iostream>
using namespace std;

class Shape {
	private:
	public:
		virtual int area()=0;

};

class Rectangle: public Shape {
	private:
	int width, height;
	public: 
		void setWidth( int width ) {
			this->width = width;
		}
		void setHeight( int width ) {
			this->height = width;
		}
		int area() {
			return width * height;
		}

};

class Square: public Rectangle {
	public:
		void setSide( int side ) {
			setWidth( side );
			setHeight( side );
		}
};


int main() {
	Square square ;
	square.setSide( 4 );
	cout << "Area of square == [" << square.area() << "]";

}
