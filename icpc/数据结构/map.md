# map
**map 是一个存储键值对的关联容器**

定义一个map把string键映射到整数值上
```cpp
std::map<std::string, int> myMap;
```
使用insert函数向map中插入pair,pair表示的是一个个键值对
```cpp
myMap.insert(pair<string, int>("hello", 123));
```
访问元素：可以使用[]操作符或at()函数来访问元素。使用[]操作符访问一个不存在的键会导致该键被插入到map中并与一个默认值相关联。例如，要访问键为“hello”的值，可以使用以下语法：
```cpp
int value = myMap["hello"];
```
如果键“hello”不存在，则它将被添加到map中并与默认值0相关联。使用at()函数访问不存在的键会抛出一个std::out_of_range异常。例如，要访问键为“world”的值，可以使用以下语法：
```cpp
int value = myMap.at("world");
```
遍历map：使用迭代器可以遍历map中的所有键值对。例如，以下代码遍历了myMap中的所有键值对：
```cpp
for (auto& pair : myMap)
{
    std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
}
```
删除元素：可以使用erase()函数删除map中的元素。例如，要删除键为“hello”的键值对，可以使用以下语法：
```cpp
myMap.erase("hello");
```
以上就是使用C++中的map的基本方法。需要注意的是，在使用map时，我们需要确保键的唯一性，否则后面插入的键值对会覆盖前面的键值对。