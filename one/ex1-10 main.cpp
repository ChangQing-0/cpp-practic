#include<iostream>
 using namespace std;
#ifdef __cplusplus
extern "C"
{
#endif 
	#include"mallocStr.h"
#ifdef __cplusplus
}
#endif 
int main()
{
     char str[]="C++";
	char *p=func(sizeof(str)+1,str);
 	cout<<p<<endl;
 	free (p);
	return 0;
}
