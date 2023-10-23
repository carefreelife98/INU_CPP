// // multshap.cpp
// // balls, rects, and polygons
// #include "msoftcon.h"         //for graphics functions
// ////////////////////////////////////////////////////////////////
// class shape                   //base class
// {
// protected:
//     int xCo, yCo;
//     color fillcolor;
//     fstyle fillstyle;
// public:
//     shape() : xCo(0), yCo(0), fillcolor(cWHITE), fillstyle(SOLID_FILL) {} 
//     shape(int x, int y, color fc, fstyle fs) : xCo(x), yCo(y), fillcolor(fc), fillstyle(fs){}
//     void draw() const //set color and fill style
//     {
//         set_color(fillcolor);
//         set_fill_style(fillstyle);
//     }
// };
// ////////////////////////////////////////////////////////////////
// class circle : public shape {
// private:
//     int radius;
// public:
//     circle() : shape() {}
//     circle(int x, int y, int r, color fc, fstyle fs) : shape(x, y, fc, fs), radius(r) {}
//     void draw() const //draw the circle
//     {
//         shape::draw();
//         draw_circle(xCo, yCo, radius);
//     }
// };
// ////////////////////////////////////////////////////////////////
// class rect : public shape {
// private:
//     int width, height;      //(xCo, yCo) is upper-left corner
// public:
//     rect() : shape(), height(0), width(0) {  }
//     rect(int x, int y, int h, int w, color fc, fstyle fs) : shape(x, y, fc, fs), height(h), width(w) {}
//     void draw() const //draw the rectangle
//     {
//         shape::draw();
//         draw_rectangle(xCo, yCo, xCo+width, yCo+height);
//         set_color(cWHITE);   //draw diagonal
//         draw_line(xCo, yCo, xCo+width, yCo+height);
//     }
// };
// ////////////////////////////////////////////////////////////////
// class tria : public shape {
// private:
//     int height;             //(xCo, yCo) is tip of pyramid
// public:
//     tria() : shape(), height(0) { }
//     tria(int x, int y, int h, color fc, fstyle fs) : shape(x, y, fc, fs), height(h) {}
//     void draw() const //draw the triangle
//     {
//         shape::draw();
//         draw_pyramid(xCo, yCo, height);
//     }
// };
// ////////////////////////////////////////////////////////////////
// int main() {
//     init_graphics();           //initialize graphics system
//     circle cir(40, 12, 5, cBLUE, X_FILL);      //create circle
//     rect rec(12, 7, 10, 15, cRED, SOLID_FILL); //create rectangle
//     tria tri(60, 7,  11, cGREEN, MEDIUM_FILL); //create triangle
//     cir.draw();
//     rec.draw();
//     tri.draw();
//     set_cursor_pos(1, 25);
//     return 0;
// }