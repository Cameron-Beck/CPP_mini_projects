#include <iostream>
#include <vector>

void print_vector(std::vector<int> data)
{
    for(int i = 0; i < data.size(); i ++)
    {
        std::cout << data[i] << "\t";
    }
}

int main()
{
    std::vector<int> data = {1,2,3};
    print_vector(data);
    data.push_back(12);
    std::cout << data[data.size() - 1] << std::endl;
    data.pop_back();
    std::cout << data.size() << std::endl;

}