#include<iostream>
#include<thread>

class thread_guard
{
private:
	std::thread &t;
public:
	explicit thread_guard(std::thread &t):t(t_)
	{}
	~thread_guard()
	{
		if(t.joinable())
			t.join();
	}
	thread_guard(thread_guard const&) = delete;
	thread_guard& operator= (thread_guard const&) = delete;
};

struct func
{
	int& i;
	func(int& i_):i(i_){}
	void operator()()
	{
		for(unsigned j = 0; j < 1000000; ++j)
			do_something(i);
	}
};	

void f()
{
	int some_local_state = 0;
	func my_func(some_local_state);
	std::thread t(my_func);
	thread_guard g(t);
	do_something_in_current_thread();
}

int main()
{
	f();
	return 0;
}
