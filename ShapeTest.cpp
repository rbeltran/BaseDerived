#include <iostream>
using namespace std;

class Shape {
	private:
	public:
		int area( void ){ return 0;}

};

class Rectangle: public Shape {
	private:
	int width, height;
	public: 
		void setWidth( int widthIn ) {
			width = widthIn;
		}
		void setHeight( int heightIn ) {
			height = heightIn;
		}
		int area( void ) {
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
