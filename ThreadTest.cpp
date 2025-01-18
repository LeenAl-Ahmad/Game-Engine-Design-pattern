#include "ThreadTest.h"

#include<iostream>
#include <chrono>

void ThreadTest::TestStaticFunctionPointer()
{
	m_thread = std::thread(StaticThreadFunction);
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Display From Main Thread" << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(200));
	}
	m_thread.join();
}

void ThreadTest::StaticThreadFunction()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << "thread static function pointer Executing" << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(200));
	}
}

void ThreadTest::TestInstanceFunctionPointer()
{
	m_thread = std::thread(&ThreadTest::InstanceFunction, ThreadTest());
	for (int i = 0; i < 5; i++)
	{
		std::cout<< "Display From Main Thread" << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(200));
	}
	m_thread.join();
}

void ThreadTest::InstanceFunction()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << "thread instance function pointer Executing" << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(200));
	}
}

void ThreadTest::TestFunctionObj()
{
	m_thread = std::thread(ThreadTest());
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Display From Main Thread" << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(200));
	}
	m_thread.join();
}

void ThreadTest::operator()()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << "thread function object Executing" << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(200));
	}
}

void ThreadTest::TestLambdaFunction()
{
	m_thread = std::thread([]
		{
			for (int i = 0; i < 5; i++)
			{
				std::cout << "thread lambda function Executing" << std::endl;
				std::this_thread::sleep_for(std::chrono::milliseconds(200));
			}
		});
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Display From Main Thread" << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(200));
	}
	m_thread.join();
}