#include <gflags/gflags.h>
#include "glog/logging.h"
#include <iostream>

using namespace std;

DEFINE_string(hello,"hello","the first word");
DEFINE_string(world,"world","the second word");
DEFINE_int32(num1,9,"the second word");
DEFINE_int32(num2,9,"the second word");

int main(int argc,char** argv)
{
	GFLAGS_NAMESPACE::ParseCommandLineFlags(&argc, &argv,true);
	google::InitGoogleLogging(argv[0]);
	cout<<FLAGS_hello<<" "<<FLAGS_world<<endl;
	LOG(ERROR)<<"first use glog error!";
	LOG(INFO)<<"first use glog! info";
	return 0;
}
