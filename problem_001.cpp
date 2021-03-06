/***************************************************************
                Two Sum
Good morning! Here's your coding interview problem for today.
This problem was recently asked by Google.
Given a list of numbers and a number k, return whether any two numbers from the list add up to k.
For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.
Bonus: Can you do this in one pass?

                Easy
****************************************************************/

/****************************************************
                    Naive solution                 
Time: O(n^2)                                     
Space: O(1): the space required does not depend  
on the size of the input array, so  
only constant space is used         
****************************************************/

// #include <iostream>

// bool twoSum(int* numList, int sizeList, int k)
// {
//     for (int i = 0; i <= sizeList; i++)
//     {
//         int ret = k - numList[i];
//         for (int j = i + 1; j <= sizeList; j++)
//         {
//             if (ret == numList[j])
//                 return true;
//         }
//     }
//     return false;
// }

/****************************************************
            Two-pass Hash Table solution            
 
Time complexity: O(n). We traverse the list 
containing nnn elements exactly twice. Since the 
hash table reduces the lookup time to O(1), the 
overall time complexity is O(n).

Space complexity: O(n). The extra space 
required depends on the number of items stored in 
the hash table, which stores exactly n elements.
****************************************************/

// #include <iostream>
// #include <map>

// bool twoSum(int* numList, int sizeList, int k)
// {

//     std::map<int, int> hash_table;
//     for (int i = 0; i <= sizeList; i++)
//         hash_table[ numList[i] ] = numList[i];
//     for (int i = 0; i <= sizeList; i++)
//     {
//         int complement = k - numList[i];
//         std::map<int, int>::iterator it;
//         it = hash_table.find(complement);
//         if (it != hash_table.end())
//             return true;
//     }
//     return false;
// }

/****************************************************
            One-pass Hash Table solution            

Time complexity: O(n). We traverse the list 
containing n elements once. Since the 
hash table reduces the lookup time to O(1), the 
overall time complexity is O(n).

Space complexity: O(n). The extra space 
required depends on the number of items stored in 
the hash table, which stores exactly n elements.
****************************************************/

#include <iostream>
#include <map>

bool twoSum(int* numList, int sizeList, int k)
{
    std::map<int, int> hash_table;
    for (int i = 0; i <= sizeList; i++)
    {
        std::map<int, int>::iterator it;
        int complement = k - numList[i];
        it = hash_table.find(complement);
        if (it != hash_table.end())
            return true;
        else
            hash_table[ numList[i] ] = numList[i];
    }
    return false;
}

/****************************************************
            Main.cpp
****************************************************/
int main()
{
    int size;
    int random_number;

    std::cout << "How many numbers do you want to enter?" << std::endl;
    std::cin >> size;

    int myarray[size];
    std::cout << "Enter " << size << " numbers" << std::endl;
    for (int i = 0; i < size; i++)
        std::cin >> myarray[i];
    
    std::cout << "Enter a sum: " << std::endl;
    std::cin >> random_number;

    std::cout << "Result: " << twoSum(myarray, size, random_number) << std::endl;
    return 0;
}


/****************************************************
            One-pass Hash Table solution
                Leetcode version            

Time complexity: O(n). We traverse the list 
containing n elements once. Since the 
hash table reduces the lookup time to O(1), the 
overall time complexity is O(n).

Space complexity: O(n). The extra space 
required depends on the number of items stored in 
the hash table, which stores exactly n elements.
****************************************************/

// #include <vector>
// #include <map>
// #include <iostream>

// std::vector<int> twoSum(std::vector<int>& nums, int target) {
//     std::map<int, int> myMap;
//     std::vector<int> result;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         std::map<int, int>::iterator it;
//         int complement = target - nums[i];
//         it = myMap.find(complement);
//         if (it != myMap.end())
//             return {it->second, i};
//         else 
//             myMap.insert({nums[i], i});
//     }
//     return result;
// }

// void print(std::vector<int> avect)
// {
//     std::cout << "[";
//     for (int i = 0; i < avect.size() - 1; i++)
//     {
//         std::cout << avect[i] << " ";
//     }
//     std::cout << avect[avect.size() - 1];
//     std::cout << "]\n";
// }

// int main()
// {
    
//     std::vector<int> myvect = {1, 3, 3};
//     print(twoSum(myvect, 6));
// }