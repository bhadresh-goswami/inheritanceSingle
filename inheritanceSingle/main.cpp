//
//  main.cpp
//  inheritanceSingle
//
//  Created by Mac on 29/11/18.
//  Copyright © 2018 tops. All rights reserved.
//

#include <iostream>

class ShapeClass {
protected:
    int width;
    int height;
    
public:
    void setArea(int width, int height)
    {
        this->width = width;
        this->height = height;
    }
    void displayArea()
    {
        std::cout<<"\n\n\t*Value of height :"<<this->height<<" and width :"<<this->width<<" !";
    }
};

class RectAreaClass: public ShapeClass {
    
private:
    int area;
    
public:
    void calculate()
    {
        area = this->width * this->height;
        std::cout<<"\n\n\t*Area of Rectangle is "<<area<<"!\n\n";
    }
};

class TriAreaClass: public ShapeClass {
    
private:
    int area;
    
public:
    void calculate()
    {
        area = this->width * this->height / 2;
        std::cout<<"\n\n\t*Area of Triangle is "<<area<<"!\n\n";
    }
};

int main(int argc, const char * argv[]) {
    
    
    RectAreaClass obj;
    obj.setArea(4, 4);
    obj.displayArea();
    obj.calculate();
    
    TriAreaClass obj1;
    obj1.setArea(4, 2);
    obj1.displayArea();
    obj1.calculate();
    
    return 0;
}
