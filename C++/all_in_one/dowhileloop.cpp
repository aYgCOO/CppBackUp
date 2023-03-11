//do while loop using cpp.
// the main difference between while and do-while loops is in the way they check the condition for executing the loop block. While loop checks the condition before the first execution of the loop block, whereas the do-while loop checks the condition after the first execution of the loop block.
#include <iostream>
using namespace std;
int main(){
    int index=0;
    do
    {
        
        cout<<"Index_num:"<<index<<endl;
        index=index+1;
    } while (index<=300);
    

    return 0;
}



