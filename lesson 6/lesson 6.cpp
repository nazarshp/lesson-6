#include <iostream>
#include <algorithm>
#include <cstdlib>

int main()
{
    std::cout << "Enter lenth: ";
    int a;
    std::cin >> a;
   
    int *arr = new int[a];
    std::cout << "Enter num: ";
    int num;
    std::cin >> num;
    int b=0;
    for (int i = 0; i < a; i++)
    {
        arr[i] = rand()%100; 
        std::cout << arr[i] << std::endl;
    }
    for (int i = 0; i < a; i++)
    {
        if (arr[i] == num)
        {
            std::cout << " this number is in the array";
            b = 1;
        }
    }
       if(b!=1)
        std::cout <<"this number is not in the array" << std::endl;
    
    return 0;
}
