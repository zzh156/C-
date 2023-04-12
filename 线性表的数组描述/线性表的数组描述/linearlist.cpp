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
};
int main()
{
    int size, index;
    std::cout << "请输入size" << std::endl;
    std::cin >> size;
    std::cout << "请输入index" << std::endl;
    std::cin >> index;
    Linearlist<int> mylinearlist;
    mylinearlist.create(size);
    std::cout<<mylinearlist.empty()<<std::endl;
    std::cout << mylinearlist.size() << std::endl;













}