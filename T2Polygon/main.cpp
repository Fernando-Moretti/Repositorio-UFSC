#include "Point2D.hpp"

int main()
{
    //instancias estaticas, chamam destrutor automaticamente quando objeto perde escopo
    Point2D p1(10,10);
    Point2D p2(100,100);
    Point2D p3;
    //instancia dinamica, necessita de delete para chamar o destrutor
    Point2D *p4 = new Point2D();


    delete p4;

    p1.SetXY(200,200); 

    return 0;
}