#include <iostream>
#include <string>
#include <math.h>
#define pi 3,14

using namespace std;

class Cponto
{
public:
    Cponto(int = 1, int = 1);
    ~Cponto();
    virtual void imprime();
    virtual float area(){return 0;
	};
    virtual float volume(){return 0;
	};
    int getx();
    int gety();
    friend istream& operator>>(istream&, Cponto&);
    friend ostream& operator<<(ostream&, const Cponto&);
protected:
    int x, y;
};

class Ccirculo:public Cponto
{
public:
    Ccirculo(int, int, int);
    ~Ccirculo();
    virtual void imprime();
    virtual float area();
    //virtual float volume(){return 0;
	//};
    int getx();
    int gety();
    int getr();
    friend istream& operator>>(istream&, Ccirculo&);
    friend ostream& operator<<(ostream&, const Ccirculo&);

protected:
    int r;
};

class Ccilindro:public Ccirculo
{
public:
    Ccilindro(int, int, int, int);
    ~Ccilindro();
    virtual void imprime();
    virtual float area();
    virtual float volume();
    int getx();
    int gety();
    int getr();
    int getaltura();
    friend istream& operator>>(istream&, Ccilindro&);
    friend ostream& operator<<(ostream&, const Ccilindro&);
protected:
    int altura;
};

Ccilindro::Ccilindro(int a, int b, int c, int d):Ccirculo(a, b, c), altura(d)
{

}

Ccilindro::~Ccilindro() {}

int Ccilindro::getx()
{
    Ccirculo::getx();
}
int Ccilindro::gety()
{
    Ccirculo::gety();
}
int Ccilindro::getr()
{
    Ccirculo::getr();
}
int Ccilindro::getaltura()
{
    return altura;
}
void Ccilindro::imprime()
{
    if (r ==0 && altura == 0)
    {
        Cponto::imprime();
    }
    if (altura == 0)
    {
        Ccirculo::imprime();
    }
    if (altura != 0 && r != 0)
    {
        Ccirculo::imprime();
        cout << "Altura: " << altura << endl;
    
    }
    if (r==0 && altura != 0)
    {
        cout << "Impossivel" << endl;
    }


}

float Ccilindro::volume()
{
    return (Ccirculo::area()*altura);

}
float Ccilindro::area()
{
	return pi*(pow(r,2));
}
istream& operator>>(istream& in, Ccilindro& a)
{
    in >> a.x;
    in >> a.y;
    in >> a.r;
    in >> a.altura;
    return in;
}

ostream& operator<<(ostream& out, const Ccilindro& a)
{
    cout << "Cilindro com centro (" << a.x <<","<< a.y<< ")" << endl;
    cout << "raio: " << a.r << endl << "altura: " << a.altura << endl;
    return out;
}

Cponto::Cponto(int a, int b)
{
    x = a;
    y = b;
}

Cponto::~Cponto() {}

int Cponto::getx()
{
    return x;
}
    int Cponto::gety()
    {
        return y;
    }
void Cponto::imprime()
{
    cout << "ponto com centro (" << x <<","<< y<< ")" << endl;
}

istream& operator>>(istream& in, Cponto& a)
{
    in >> a.x;
    in >> a.y;
    return in;
}

ostream& operator<<(ostream& out, const Cponto& a)
{
    cout << "Ponto com centro (" << a.x <<","<< a.y<< ")" << endl;
    return out;
}

Ccirculo::Ccirculo(int a, int b, int c):Cponto(a, b), r(c)
{

}
Ccirculo::~Ccirculo() {}

int Ccirculo::getx()
{
    return Cponto::getx();
}
int Ccirculo::gety()
    {
        return Cponto::gety();
    }
int Ccirculo::getr()
    {
        return r;
    }
void Ccirculo::imprime()
{
    if (r == 0)
    {
        Cponto::imprime();
    }

    else
    {
    Cponto::imprime();
    cout << "raio: " << r << endl;
    }
}

float Ccirculo::area()
{
    return pi*(pow(r,2));
}

istream& operator>>(istream& in, Ccirculo& a)
{
    in >> a.x;
    in >> a.y;
    in >> a.r;
    return in;
}

ostream& operator<<(ostream& out, const Ccirculo& a)
{
    cout << "Circulo com centro (" << a.x <<","<< a.y<< ")" << " e raio: " << a.r << endl;
    return out;
}


int main()
{
    Cponto* ptr[5];
    *ptr = new Cponto[5];
    int tipo;
    for(int i = 0; i < 5; i++)
    {
    	cin >> tipo;
    	switch(tipo)
    	{
    		case 1:
    			ptr[i] = new Cponto(2, 2);
    			ptr[i]->imprime();
    			cout << "Area: " << ptr[i]->area() << endl;
    			cout << "Volume: " << ptr[i]->volume() << endl;
				break;
    		case 2:
    			ptr[i] = new Ccirculo(2, 2, 2);
    			ptr[i]->imprime();
    			cout << "Area: " << ptr[i]->area() << endl;
    			cout << "Volume: " << ptr[i]->volume() << endl;
    			break;
    		case 3:
    			ptr [i]= new Ccilindro(2,2,2,2);
    			ptr[i]->imprime();
     			cout << "Area da base: " << ptr[i]->area() << endl;
     			cout << "Volume: " << ptr[i]->volume() << endl;
    			break;
		}
		 	
	}
	delete *ptr;
	

    return 0;
}
