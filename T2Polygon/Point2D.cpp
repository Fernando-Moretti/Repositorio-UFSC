#include "Point2D.hpp"

Point2D::Point2D()
{
    m_x=m_y=NULL;

}
Point2D::Point2D(int x, int y)
{

    m_x = new int(x);
    m_y = new int(y);
    
}
Point2D::~Point2D()
{
   if(m_x != NULL) delete m_x; //Esse if impede que nao delete o que nao é meu     //n sair deletando tudo sem primeiro debuggar
   if(m_y != NULL) delete m_y;

}
Point2D::SetXY(int x, int y)
{
    *m_x=x;                 
    *m_y=y;              //gdb ./out vai roda tudo e para aonde estora a memoria
}