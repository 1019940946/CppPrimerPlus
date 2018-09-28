//显示一行信息
#include <iostream>                           // 不含.h,C++新式标准，可以使用 namespace std

int main()                                    // 函数头
{                                             // 
    using namespace std;                      //引用命名空间
    cout << "Come up and C++ me some time.";  // 信息
    cout << endl;                             // 换行
    cout << "You won't regret it!" << endl;   // 信息
// If the output window closes before you can read it,
// add the following code:
    // cout << "Press any key to continue." <<endl;
	// cin.get();                                                   
    return 0;                                 // terminate main()
}                                             // end of function body
