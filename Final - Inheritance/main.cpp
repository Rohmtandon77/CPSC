//
//  main.cpp
//  Final - Inheritance
//
//  Created by Rohm Tandon on 15/12/22.
//

#include <iostream>

using namespace std;

class Shape{
    
public:
    Shape(double dHeight, double dWidth);
    virtual ~Shape();
    virtual void scale (double dScaleFactor)=0;
    virtual double area()=0;
    virtual double perimeter()=0;
    virtual void displayProperties();
    
protected:
    double m_dHeight;
    double m_dWidth;
    std::string m_strType;
};

//constructor
Shape::Shape(double dHeight, double dWidth){
    m_strType = "Shape";
    m_dHeight = dHeight;
    m_dWidth = dWidth;
}

//destructor
Shape::~Shape(){
    std::cout<<endl;
}

void Shape::displayProperties(){
    std::cout<< "Shape Type: " << m_strType << ", height: " << m_dHeight << ", Width: " << m_dWidth << endl;
    std::cout<< "Area: " << area()<< ", Perimeter: " << perimeter() << endl;
}


class Rectangle: public Shape{
    
public:
    Rectangle(double dHeight, double dWidth);
    virtual ~Rectangle();
    void scale (double dScaleFactor);
    double area();
    double perimeter();
};

//constructor
Rectangle::Rectangle(double dHeight, double dWidth) : Shape(dHeight, dWidth){
    m_strType = "Rectangle";
}

//destructor
Rectangle::~Rectangle(){
    std::cout<< endl;
}

void Rectangle::scale(double dScaleFactor){
    m_dWidth*=dScaleFactor;
    m_dHeight*=dScaleFactor;
}

double Rectangle::area(){
    return m_dWidth*m_dHeight;
}

double Rectangle::perimeter(){
    return 2*(m_dWidth+m_dHeight);
}


class Circle: public Shape{
    
public:
    Circle(double dHeight, double dWidth);
    virtual ~Circle();
    void scale (double dScaleFactor);
    double area();
    double perimeter();
};

//constructor
Circle::Circle(double dHeight, double dWidth) : Shape(dHeight, dWidth){
    m_strType = "Circle";

}

//Destructor
Circle::~Circle(){
    cout<<endl;
}

void Circle::scale(double dScaleFactor){
    m_dWidth*=dScaleFactor;
    m_dHeight*=dScaleFactor;
}

double Circle::area(){
    return 3.1416*(0.5*m_dWidth)*(0.5*m_dWidth);
}

double Circle::perimeter(){
    return 3.1416*m_dWidth;
}


int main(int argc, const char * argv[]){
    Rectangle* p_shapeRectangle = new Rectangle(2.0,3.0);
    Circle* p_shapeCircle = new Circle(2.0,2.0);
    
    Shape*p_shapes[2];
    
    p_shapes[0] = p_shapeCircle;
    p_shapes[1] = p_shapeRectangle;
    for (int i=0; i < 2; i++){
        p_shapes[i]->displayProperties();
        p_shapes[i]->scale(2);
        p_shapes[i]->displayProperties();
    }
}
