// (c) Tivole

// 7

#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
int numb(string s, int k1, int k2);
int kod(char c);
char kodl(int c);
string sum(int n);
string charnum(int m, int k);

int main () 
{ string s;
  int z;
  cin>>s;
  int i, l = s.length();
  for (i = 0; i < 1 && s[i] != '+'; i++);
  z = numb(s, 0, i) + numb(s, i+1, l);
  cout<<sum(z)<<endl;
  
  return 0;
}
  int kod(char c)
  {
      switch (c) {
             case 'M' : return 1000;
             case 'D' : return 500;
             case 'C' : return 100;
             case 'L' : return 50;
             case 'X' : return 10;
             case 'V' : return 5;
             case 'I' : return 1;
             }
    return 0;
}
    int numb(string s, int k1, int k2)
    {
        int i = k1, n = 0, a, b;
        a = kod(s[k1]);
        for (; i < k2; i++) {
            b = kod(s[i+1]);
            if (a < b)
            n+= -a;
            else
            n+= +a;
            a = b;
    }
    n += b;
    
    return n;
}
    string sum(int n)
    {
           int k = 0, p, d = 1000;
           string s = "";
           for (int i=0; i<4; i++) {
               p = n / d;
               if (p != 0)
               s += charnum(p, k);
               k += 2;
               n %=d;
               d /= 10;
               }
               return s;
               }
               string charnum(int m, int k)
               {
                      char ss[] = {'M','D','C','L','X','V','I'};
                      string s;
                      int i;
                      if (m < 4) {
                            for (i = 0; i < m; i++)
                            s += ss[k];
                            return s;
                            }
                            if (m == 4) {
                                  s += ss[k];
                                  s += ss[k-1];
                                  return s;
                                  }
                                  if (m == 5) {
                                        s += ss[k-1];
                                        return s;
                                        }
                                        if (m < 9) {
                                              s += ss[k-1];
                                              for (i=0; i<m-5; i++)
                                                s += ss[k];
                                                return s;
                                                }
                                                if (m == 9) {
                                                      s += ss[k];
                                                      s += ss[k-2];
                                                      return s;
                                                      }
                                                      return s;
                                                      }
                                                      char kodl(int c)
                                                      {
                                                           switch (c) {
                                                              case 1000 : return 'M';
                                                              case 500 : return 'D';
                                                              case 100 : return 'C';
                                                              case 50 : return 'L';
                                                              case 10 : return 'X';
                                                              case 5 : return 'V';
                                                              case 1 : return 'I';
                                                              }
                                                              return '0';
                                                              }