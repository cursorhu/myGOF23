//Factory.h
#ifndef _FACTORY_H_
#define _FACTORY_H_
class Product;
class Factory
{
	public:
		virtual ~Factory() = 0;
		virtual Product* CreateProduct() = 0;
	protected:
		Factory();
	private:

};

class ConcreteFactory:public Factory
{
	public:
		~ConcreteFactory();
		ConcreteFactory();
		Product* CreateProduct(); //在Factory子类实现具体的生产对象:Product
	protected:
	private:
};
	

#endif //~_FACTORY_H_


