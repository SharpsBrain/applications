#include <iostream>

using namespace std;
void test(int*,int*);
/*int main()
{
   /* int a=5,b=5;
    cout<<"Before changings :"<<endl;
    cout<<"a ="<<a;cout<<endl;
    cout<<"b ="<<b<<endl;
    //calling the function:
    test(&a,&b);
    cout<<"\nAfter the changes :\n";

    cout<<"a ="<<a;cout<<endl;
    cout<<"b ="<<b<<endl;
    return 0;
}
void test(int* n1,int* n2){
*n1=10;
*n2=11;
}*/
int main(){
int myscore=92;
int*ptr;
ptr=&myscore;
cout<<"&myscore : ="<<&myscore<<endl;
cout<<" ptr = "<<ptr<<endl;
cout<<" myscore ="<<*ptr<<endl;
cout<<endl;
//declaration of another new variable:
int myNewscore=97;
ptr=&myNewscore;
cout<<"&myNewscore :  ="<<&myNewscore<<endl;
cout<<"ptr = "<<ptr<<endl;
cout<<"myNewscore ="<<*ptr<<endl;
return 0;
}
//----------------------sharpsbrain---------------------------

