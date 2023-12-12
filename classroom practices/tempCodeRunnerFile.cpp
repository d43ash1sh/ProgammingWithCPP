void friendFunction(MyClass &obj)
{
  obj.privateData = 10;
  std::cout << "Accessing private data member: " << obj.privateData << std::endl;
  obj.privateMethod();
}