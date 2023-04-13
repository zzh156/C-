#include<iostream>
#include<vector>
template<typename T>
class Linearlist {
    //创建一个线性表
public:
private:
    std::vector<T> vector1;

public:
    void create(int size) {
        vector1.resize(size);
    }
   
    void delete_whole()
    {
        std::vector<T>vector2();
        vector2.swap(this->vector1);
    }
    bool empty()
    {
        return vector1.empty();
    }
    int size()
    {
        return vector1.size();
    }
    T find(int index)
    {
        if (index + 1 > size)
        {
            std::cout << "索引越界" << std::endl;
            return 0;

        }
        else
        {
            std::cout << *(vector1.begin() + index);
            return *(vector1.begin() + index);


        }
    }
    T findindex(T target)
    {
        int count = 0;
        for (auto i = vector1.begin(); i < vector1.end(); i++)
        {
            if (*i == target)
            {
                return count;
            }
            count++;
        }
    }
    void delete_index(int index1)
    {
        for (int i = index1 + 1; i < size; i++)
        {
            *(vector1.begin() + i - 1) = *(vector1.begin() + i);

        }
    }
    void give_value()
    {
        for (T& value : vector1)
        {
            std::cout << "请输入vector1中的元素值" << std::endl;
            std::cin >> value;
        }
    }
};

template<typename T>

int main()
{
    int size, index;
    T target;
    std::cout << "请输入size" << std::endl;
    std::cin >> size;
    Linearlist<int> mylinearlist;
    mylinearlist.create(size);
    std::cout << "创建了一个size大小的vector" << std::endl;
    std::cout<<"线性表是否为空" << mylinearlist.empty() << std::endl;
    std::cout << "线性表的大小" << mylinearlist.size() << std::endl;
    std::cout << "依次为vector1中的元素赋值" << std::endl;
    mylinearlist.give_value();
    std::cout << "请输入查找的索引" << std::endl;
    std::cout << "请输入index" << std::endl;
    std::cin >> index;
    std::cout << "值是" << std::endl;
    std::cout << mylinearlist.find(index) << std::endl;
    std::cout << "请输入要查找的元素" << std::endl;
    std::cin >> target >> std::endl;
    std::cout << mylinearlist.findindex(target) << std::endl;

    return 0;
}