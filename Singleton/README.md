# 背景
Singleton 模式解决问题十分常见， 我们怎样去创建一个唯一的变量（ 对象）？在基于  
对象的设计中我们可以通过创建一个全局变量（对象） 来实现， 在面向对象和面向过程结合  
的设计范式（如 C++中） 中， 我们也还是可以通过一个全局变量实现这一点。 但是当我们遇  
到了纯粹的面向对象范式（如Java）中，这一点可能就只能是通过 Singleton 模式来实现了  

Singleton 模式是设计模式中最为简单、最为常见、最容易实现，也是最应该熟悉和掌握的模式    

为保证“类只有一个对象”，Singleton对象不可以被直接实例化， 
因此我们将Singleton构造函数声明为 protected 或者 private。  
只能调用其方法Instance()实例化，Instance()包含是否已实例化的检查  

本例程不包含线程安全，线程安全的Singleton的Instance()需要双重检测+锁实现  
  