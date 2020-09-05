//
// Created by chaox on 5/9/2020.
//

#ifndef WANGJIANWEI_COPY_H
#define WANGJIANWEI_COPY_H

class Box {
public:
    Box() {}

    Box(double x,double y,double z) { length = x;  width = y; height = z;}
    Box(double a,double b) { width = a; height = b;}
    Box(const Box &obj) {}

    double height;
    double length;
    double width;

private:

};

#endif //WANGJIANWEI_COPY_H
