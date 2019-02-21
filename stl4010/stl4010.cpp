// stl4010.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include <concurrent_unordered_set.h>
#include <concurrent_queue.h>
#include <concurrent_vector.h>
#include <concurrent_unordered_map.h>

int main()
{
    std::cout << "STL4010 test\n"; 

	concurrency::concurrent_unordered_set<std::wstring> concurrent_unordered_set{};
	concurrent_unordered_set.insert({ L"test string" });

	concurrency::concurrent_queue<std::wstring> concurrent_queue{};
	concurrent_queue.push({ L"test string" });

	concurrency::concurrent_vector<std::wstring> concurrent_vector{};
	concurrent_vector.push_back({ L"test string" });

	concurrency::concurrent_unordered_map<std::wstring, int> concurrent_unordered_map{};
	concurrent_unordered_map.insert(std::make_pair(std::wstring{L"test string"}, 1 ));


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
