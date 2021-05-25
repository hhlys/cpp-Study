#include <gflags/gflags.h>
#include <iostream>

using namespace std;

DEFINE_string(hello,"hello","the first word");
DEFINE_string(world,"world","the second word");
DEFINE_int32(num1,9,"the second word");
DEFINE_int32(num2,9,"the second word");

int main(int argc,char** argv)
{
	GFLAGS_NAMESPACE::ParseCommandLineFlags(&argc, &argv,true);
	cout<<FLAGS_hello<<" "<<FLAGS_world<<endl;
	cout<<"the sum is "<<FLAGS_num1*FLAGS_num2<<endl;
	return 0;
}
