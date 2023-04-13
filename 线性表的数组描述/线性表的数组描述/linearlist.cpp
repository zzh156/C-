#include<iostream>
#include<vector>
template<typename T>
class Linearlist {
    //����һ�����Ա�
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
            std::cout << "����Խ��" << std::endl;
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
            std::cout << "������vector1�е�Ԫ��ֵ" << std::endl;
            std::cin >> value;
        }
    }
};

template<typename T>

int main()
{
    int size, index;
    T target;
    std::cout << "������size" << std::endl;
    std::cin >> size;
    Linearlist<int> mylinearlist;
    mylinearlist.create(size);
    std::cout << "������һ��size��С��vector" << std::endl;
    std::cout<<"���Ա��Ƿ�Ϊ��" << mylinearlist.empty() << std::endl;
    std::cout << "���Ա�Ĵ�С" << mylinearlist.size() << std::endl;
    std::cout << "����Ϊvector1�е�Ԫ�ظ�ֵ" << std::endl;
    mylinearlist.give_value();
    std::cout << "��������ҵ�����" << std::endl;
    std::cout << "������index" << std::endl;
    std::cin >> index;
    std::cout << "ֵ��" << std::endl;
    std::cout << mylinearlist.find(index) << std::endl;
    std::cout << "������Ҫ���ҵ�Ԫ��" << std::endl;
    std::cin >> target >> std::endl;
    std::cout << mylinearlist.findindex(target) << std::endl;

    return 0;
}