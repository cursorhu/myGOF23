
//Factory.cpp
#include "Factory.h"
#include "Product.h"
#include <iostream>
using namespace std;
Factory::Factory()
{
	cout<<"Factory....."<<endl;
}
Factory::~Factory()
{
	cout<<"~Factory....."<<endl;
}
ConcreteFactory::ConcreteFactory()
{
	cout<<"ConcreteFactory....."<<endl;
}
ConcreteFactory::~ConcreteFactory()
{
	cout<<"~ConcreteFactory....."<<endl;
}
Product* ConcreteFactory::CreateProduct()
{
	cout<<"CreateProduct....."<<endl;
	return new ConcreteProduct();
}
