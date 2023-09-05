#include <iostream>
using namespace std;


void printstar(char chr, int times){
    for (int i = 1; i <=times; i++)
    {
        /* code */
        cout<<chr<<" ";
    }
    
}

int main()
{
   int count=6;
    for(int i=1; i<=count; i++){
        printstar(' *',i);
        printstar(' ',2*3-(2*i-6));
        printstar(' *',i);
        cout<<endl;
        
    }
    
    for (int i = 1; i <=count; i++)
    {
        /* code */
         printstar(' *',7-i);
        printstar(' ',2*3+(2*i-8));
        printstar(' *',7-i);
        cout<<endl;
    }
    

    return 0;
}