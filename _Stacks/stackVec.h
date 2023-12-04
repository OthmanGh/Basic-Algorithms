#include <vector>

template <typename T>
class Stack
{
    std::vector<T> vec;

public:
    void push(T data)
    {
        vec.push_back(data);
    }

    void pop()
    {
        if (!empty())
        {
            vec.pop_back();
        }
        else
        {
            throw std::runtime_error("Stack is empty....");
        }
    }

    bool empty()
    {
        return vec.size() == 0;
    }

    T top()
    {
        if (!empty())
        {
            int len = vec.size() - 1;
            return vec[len];
        }
        else
        {
            throw std::runtime_error("Stack is empty....");
        }
    }
};