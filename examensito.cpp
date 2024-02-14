#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Rectangulo
{
    private:
    int ancho, altura;

    public:
    int esquinaX;
    int esquinaY;

    Rectangulo();
    Rectangulo(int x, int y);
    Rectangulo(int x, int y, int w, int h);

    int getAncho();
    void setAncho(int w);
    int getAltura();
    void setAltura(int h);
    int getArea();
    void intersecta(Rectangulo rect)
}

int main()
{
    Rectangulo rectangulito1;
    rectangulito1.setAncho(5)
    rectangulito1.setAltura(8)
    rectangulito1.esquinaX= 10;
    rectangulito1.esquinaY= 4;

    Rectangulo rectangulito2( 4, 5, 9, 7);

    Rectangulo rectangulito3(9, 2);
     rectangulito1.setAncho(14);
     rectangulito1.setAltura(12);

    cout<< getArea()<< endl;

    rectangulito1.intersecta(rectangulito2);
    rectangulito1.intersecta(rectangulito3);
    rectangulito2.intersecta(rectangulito3);
}

int Rectangulo:: Rectangulo ()
{
    ancho= 0;
    altura= 0;
    esquinaX= 0;
    esquinaY= 0; 
}

int Rectangulo:: Rectangulo (int x, int y)
{
   ancho= 0;
    altura= 0;
    esquinaX= x;
    esquinaY= y;  
}

int Rectangulo:: Rectangulo (int x, int y, int w, int h)
{
    if (w>0)
    {
        ancho=w;
    }
    else
    {
        ancho=0;
    }

    if (w>0)
    {
        alto=h;
    }
    else
    {
        alto=0;
    }

    esquinaX= x;
    esquinaY= y;  
}

int Rectangulo:: getAncho()
{
    return ancho;
}

int Rectangulo:: setAncho(int w)
{
    if (w>0)
    {
        ancho=w;
    }
    else
    {
        ancho=0;
    }
}

int Rectangulo:: getAltura()
{
    return altura;
}

int Rectangulo:: setAltura(int h)
{
    if (w>0)
    {
        alto=h;
    }
    else
    {
        alto=0;
    }
}

int Rectangulo:: getArea()
{
    int area= acho*altura;
    return area;
}

void Rectangulo:: intersecta(Rectangulo rect)
{
    if(esquinaX<= rect.esquinaX+ rect.ancho && esquinaX+ancho>= rect.esquinaX)
    {
        if(esquinaY<= rect.esquinaY+ rect.ancho && esquinaY+ancho>= rect.esquinaY)        
        {
            cout<< "Los rectagulos intersectan"<< endl;
            return true;
        }
        else()
        {
            cout<< "Los rectangulos no intersectan"<< endl;
            return false;
        }
    }
    
}



