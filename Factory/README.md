Factory模式解决面向对象程序设计的对象创建问题：要创建的类实在是太多了。  
Factory模式的两个功能：  
- 提供创建对象的接口封装  
- 将类的实例化推迟到子类

局限：
- Factory 模式仅仅局限于一类类（就是说Product是一类，有一个共同的基类），如果要为不同类的类提供一个对象创建的接口，那就要用 AbstractFactory  