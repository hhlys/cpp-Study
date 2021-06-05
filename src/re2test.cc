#include <iostream>
#include <string>
#include "re2/re2.h"

using namespace std;
using namespace re2;
int main()
{
    {
        string regmail = "(\\w+([-+.]\\w+)*)@(\\w+([-.]\\w+)*)\\.(\\w+([-.]\\w+)*)";
        RE2 *pHandle = NULL;
        pHandle = new RE2(regmail, re2::RE2::Quiet);
        if( !pHandle->ok() )
        {
            cout<<pHandle->error()<<endl;
            return -1;
        }

        string content = "test,regular,邮件 test@gmail.com; ";
        string strVal ;
        if(re2::RE2::Extract(content.c_str(),*pHandle,"\\0,\\1,\\3,\\5",&strVal))
        {
            cout<<strVal<<endl;
        }
        if(pHandle != NULL)
        {
            delete pHandle;
            pHandle = NULL;
        }
    }
    return 0;
}
