#pragma once
#include <thread>

class ThreadTest
{
public:
	void TestStaticFunctionPointer();
	void TestInstanceFunctionPointer();
	void TestFunctionObj();
	void TestLambdaFunction();

	void operator()();
private:
	static void StaticThreadFunction();
	void InstanceeFunction();

	std::thread m_thread;
};

