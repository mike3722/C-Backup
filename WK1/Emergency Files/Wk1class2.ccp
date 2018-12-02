#include <ios stream>
/*
std is a name space where cout is defined to a diffrent function
in a diffrent name space cout would do something diffrent

name space can conatain other name spaces 
this means there can be two diffrent fuctions for cout 
to filter one that you want you use   (name space)::function

 */
using std::cout;
using std::endl;

int() main
{
	cout << "Hello World"<<endl;
	return 0;

	
}
