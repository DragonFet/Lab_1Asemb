#include <iostream>



void viewPointer(void * p)
{
    auto *p1 = reinterpret_cast<char *>(p);
    auto *p2 = reinterpret_cast<unsigned short *>(p);
    auto *p3 = reinterpret_cast<double *>(p);

    ::printf("p is %p\n",&p);
    ::printf("p1 is %p\n",&p1);
    ::printf("p2 is %p \n",&p2);
    ::printf("p3 is %p \n",&p3);

    ::printf("%s \n","Now we seen additional adress pi +1 ");

    ::printf("p+1  %p \n",&p+1);
    ::printf("p1+1 %p \n",&p1+1);
    ::printf("p2+1 %p \n",&p2+1);
    ::printf("p3+1 %p \n",&p3+1);
    ::printf("%s \n","Now we are watchong for more iformation about additional adress and static adress");



    ::printf("p1 \t %p p1+1 \t %p \n",p1,p1+1);
    ::printf("p2 \t %p p2+1 \t %p \n",p2,p2+1);
    ::printf("p3 \t %p p3+1 \t %p \n",p3,p3+1);




}


int ex_first()
{
    ::printf("%s\n","Char now ");
    char *first_test = nullptr;
    viewPointer(first_test);
    ::printf("%s \n","Double now ");
    double *second_test = nullptr;
    viewPointer(second_test);
    ::printf("%s \n","Int now ");
    int* third_test= nullptr;
    viewPointer(third_test);





    return 0;
}
