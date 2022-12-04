#include <iostream>
#include <cstdio>
template <class T>
class list
{
public:
  list & AddBegin(const T &x)
  {
    entry *ne = new entry(x, LISTStart);
    LISTStart = ne;
    return *this;
  }
  list & AddEnd(const T &x)
  {
    entry **ne = &LISTStart;
    while(*ne != NULL)
      ne = &(*ne)->Next;
    *ne = new entry(x, NULL);
    return *this;
  }
  bool DelBegin(T *x)
  {
    entry *ne = LISTStart;
    if(ne != NULL)
    {     
    *x = ne->Data;  
    LISTStart = ne->Next;
    delete ne;
    return 1;
    }
    return 0;  
  }
  bool DelEnd(T *x)
  {
    entry *ne = LISTStart;
    entry *nep = NULL;
    if(ne == NULL)
      return 0;
    while(ne->Next != NULL)
    {
      nep = ne;
      ne = ne->Next;
    }
    if(nep == NULL)
    {
      LISTStart = NULL;
    }
    else
      nep->Next = NULL;
    *x = ne->Data;
    delete ne;
    return 1;
    
  }
  void Display(void) const
  {  
    entry *ne = LISTStart;
    while(ne != NULL)
    {
    std::cout << ne->Data << ',' << ' '; 
    ne = ne->Next;
    } 
  } 
  int Search(T Data)
  { 
    int n = 1;
    entry *ne = LISTStart;
    while(ne != NULL)
    { 
      if(ne->Data == Data)
        return n; 
      ne = ne->Next;
      n++;
    }
    return -1;
  }
  int AddPos(T Data, int l)
  { 
    int n = 1;
    entry *ne = LISTStart;
    while(ne != NULL)
    {  
      ne = ne->Next;
      n++;
      if(l == n)
      {
        ne.AddBegin(Data);
      }
    }
    return -1;
  }
  int DelPos(T Data, int n)
  { 
    int n = 1;
    entry *ne = LISTStart;
    while(ne != NULL)
    {  
      ne = ne->Next;
      n++;
      if(l == n)
      {
        ne.Del 
          Begin(Data);
      }
    }
    return -1;
  }
  list (void) : LISTStart(NULL)
  {
  }
  ~list(void)
  {
   int x;
   while(DelBegin(&x))
    ;     
  }
private:
  class entry
  {
  public:
    T Data;
    entry *Next;
    entry(const T &NewData, entry *NewNext): Data(NewData), Next(NewNext)
    {
    }
  }*LISTStart;
};