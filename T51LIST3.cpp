#include <cstdio>
#include <conio.h>
#include "LIST3.H"
/*void main(void)
{
  list<int> p;
  int x;
  p.AddBegin(30).AddBegin(1).Display();
  p.AddEnd(114).AddEnd(8).Display();
  //p.DelBegin(&x);
  //p.Display();   
  //p.DelEnd(&x);
  //p.DelBegin(&x);
  p.Display();
  while(p.DelEnd(&x))
   std::cout << x << '\n';

} */
void main(void)
{  
  list<int> p;
  int x;
  int quit = 0, c = 0;
  int n;
  while(!quit)
  {
    printf("\n\n0-exit\n"
           "1-Display\n"
           "2-AddBegin\n"
           "3-AddEnd\n"
           "4-DelBegin\n"
           "5-DelEnd\n"
           "6-Search\n"
           "7-AddPos\n"
           "8-DelPos\n\n");
    p.Display();
    std::cout << '\n';
    c = _getch();
    switch(c)
    {
      case '0':
        quit = 1;                              
        break;
      case '1':
        p.Display();
        break;
      case '2':
        printf("New key: ");
        scanf("%i", &n);
        p.AddBegin(n);
        break;
      case '3':
        printf("New key: ");
        scanf("%i", &n);
        p.AddEnd(n);
        break;
      case '4':
        p.DelBegin(&x);
        break;
      case '5':
        p.DelEnd(&x);
        break;
      case '6':
        printf("New key: ");
        scanf("%i", &n);
        int y = 0;
        y = p.Search(n);
        printf("%i", y);
        break;
      case '6':

        //p.AddPos();
        break;
      case '7':

        //p.DelPos();
        break;
    } 
  }

}