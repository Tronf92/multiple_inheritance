// multiple inheritance.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


//base class
class shape {
	public:
		void setWidth(int w){
			width=w;
		}
		void setHeight(int h){
			height=h;
		}
	protected:
		int width;
		int height;
};

//base class
class PaintCost{
	public:
		int getCost(int area){
			return area*70;
		}
};

//derived class
class rectangle:public shape, public PaintCost{
	public:
		int getArea(){
			return (width*height);
		}
};




int _tmain(int argc, _TCHAR* argv[])
{
	rectangle rect;
	int area;
	rect.setHeight(5);
	rect.setWidth(7);
	area=rect.getArea();

	cout << "Total area is:" << rect.getArea() << endl;
	cout << "Total paint cost : $ " << rect.getCost(area) << endl;


	system("pause");
	return 0;
}

