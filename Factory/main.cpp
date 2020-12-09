//main.cpp
#include "Factory.h"
#include "Product.h"
#include <iostream>
using namespace std;
int main(int argc,char* argv[])
{
	Factory* fac = new ConcreteFactory();
	Product* p = fac->CreateProduct();

	delete p;
	p = NULL;
	delete fac; 
	fac = NULL;

	return 0;
}
