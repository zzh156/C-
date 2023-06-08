## C++ ostream::write()方法写文件

```CPP
ostream & write(char* buffer, int count);
```

其中，buffer 用于指定要写入文件的二进制数据的起始位置；count 用于指定写入字节的个数。

## C++中seep()和seekg()函数功能

seekp：设置输出文件流的文件流指针位置
seekg：设置输入文件流的文件流指针位置

函数原型：
ostream& seekp( streampos pos );
ostream& seekp( streamoff off, ios::seek_dir dir );
istream& seekg( streampos pos );
istream& seekg( streamoff off, ios::seek_dir dir );

ios::beg：文件流的起始位置
ios::cur：文件流的当前位置
ios::end：文件流的结束位置

## 在ios提供的控制格式的标识符中，八进制格式的标识符是什么

在ios中，八进制格式的标识符是std::oct。它是一个用于控制流的标志，可以设置或清除std::ios_base::basefield中的std::oct标志位，以指示流应该读取和写入整数值的八进制形式。在默认情况下，流使用十进制格式读取和写入整数值，但如果设置了std::oct标志，它将读取和写入八进制格式的整数值。例如，如果将std::oct标志设置为流的格式标识符之一，可以使用以下方式输入八进制数：

```
int x;
std::cin >> std::oct >> x;
```



在这个例子中，将std::cin流的格式标识符设置为std::oct，告诉流接下来将读取一个八进制整数。然后，使用“>>”运算符将输入流导向变量x，该变量将包含被读入的八进制整数值。同样，可以使用std::oct控制流的输出格式，以以八进制格式打印整数值的值，例如：

```
std::cout << std::oct << x;
```



这将以八进制格式输出变量x的值。



