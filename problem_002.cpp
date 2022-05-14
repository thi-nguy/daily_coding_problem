/******************************************************************
This problem was asked by Uber.

Given an array of integers, return a new array such that each 
element at index i of the new array is the product of all the 
numbers in the original array except the one at i.

For example, if our input was [1, 2, 3, 4, 5], the expected output 
would be [120, 60, 40, 30, 24]. If our input was [3, 2, 1], 
the expected output would be [2, 3, 6].

Follow-up: what if you can't use division?

Hard
******************************************************************/

/****************************************************
                    Naive solution                 
Time: O(n^2)                                      
Space: O(1)    
****************************************************/
// #include <vector>
// #include <iostream>

// std::vector<int> productExceptSelf(std::vector<int> nums)
// {
//    std::vector <int> result;
//    for (unsigned long i = 0; i < nums.size(); i++)
//    {
//       int item = 1;
//       for (unsigned long j = 0; j < nums.size(); j++)
//       {
//          if (j != i)
//             item *= nums[j];
//       }
//       result.push_back(item);
//    }
//    return result;
// }

/****************************************************
             Division Operation solution
Time: O(N)                                      
Space: O(N)  
****************************************************/
#include <vector>
#include <iostream>

std::vector<int> productExceptSelf(std::vector<int> nums)
{
   std::vector <int> result;
   long product = 1;
   int countZero = 0;
   for (unsigned long i = 0; i < nums.size(); i++)
   {
      if (nums[i] != 0)
         product *= nums[i];
      else
         countZero += 1;
   }
   for (unsigned long i = 0; i < nums.size(); i++)
   {
      if (countZero == 1)
      {
         if (nums[i] == 0)
            result.push_back(product);
         else
            result.push_back(0);
      }
      else if (countZero > 1)
         result.push_back(0);
      else
      {
         int item = product / nums[i];
         result.push_back(item);
      }
   }
   return result;
}

/****************************************************
         Not Using Division Operation solution
Time: O(N)                                      
Space: O(N)   
****************************************************/
// #include <vector>
// #include <iostream>

// std::vector<int> productExceptSelf(std::vector<int> nums)
// {
//    std::vector <int> result;
//    std::vector <int> front_product;
//    std::vector <int> back_product;
//    int product = 1;
//    int size = nums.size();
//    for (int i = 0; i < size; i++)
//    {
//       product *= nums[i];
//       front_product.push_back(product);
//    }
//    product = 1;
//    for (int i = size -1 ; i > -1; i--)
//    {
//       product *= nums[i];
//       back_product.push_back(product);
//    }
//    result.push_back(back_product[size - 2]);
//    product = 1;
//    for (int i = 1 ; i < size - 1; i++)
//    {
//       product = front_product[i - 1] * back_product [size - 2 - i];
//       result.push_back(product);
//    }
//    result.push_back(front_product[size - 2]);
//    return result;
// }

/****************************************************
            main.cpp & print.cpp
****************************************************/
void print(std::vector<int> avect)
{
    std::cout << "[";
    for (unsigned long i = 0; i < avect.size() - 1; i++)
    {
        std::cout << avect[i] << " ";
    }
    std::cout << avect[avect.size() - 1];
    std::cout << "]\n";
}

int main()
{
   int size;

   std::cout << "How many numbers do you want to enter?" << std::endl;
   std::cin >> size;

   std::vector<int> myvect;
   std::cout << "Enter " << size << " numbers" << std::endl;
   for (int i = 0; i < size; i++)
   {
      int item;
      std::cin >> item;
      myvect.push_back(item);
   }
   std::cout << "Your array is: ";
   print(myvect);
   print( productExceptSelf(myvect) );
   return 0;
}