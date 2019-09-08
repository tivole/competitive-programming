// (c) Tivole

// 32

#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int mas[12][12];
int a, b, c, d, k=0;
bool two=false;
bool kill=false;

int peshka();
int knight();
int knightway(int i, int j);

int main() {
  int i, t;
  char ch;
  memset(mas, 0, sizeof(mas));
  cin >> ch >> b;
  a = ch-95; b++;
  mas[a][b] = 1;
  cin >> ch >> d;
  c = ch-95; d++;
  mas[c][d] = 2;
  if(mas[a+1][b+1] || mas[a-1][b+1]==2) { cout << "1" << endl; return 0; }
  while(true) {
    t = peshka();
    if (t == 0)  { cout << "0.5" << endl; return 0;}
    if (t == -1) { cout << "1"   << endl; return 0;}
    for(i=0; i<12; i++) mas[0][i]=mas[1][i]=mas[10][i]=mas[11][i]=mas[i][0]=mas[i][1]=mas[i][10]=mas[i][11]=0;
    t = knight();
    if (t == 1)  { cout << "-1"  << endl; return 0;}
    for(i=0; i<12; i++) mas[0][i]=mas[1][i]=mas[10][i]=mas[11][i]=mas[i][0]=mas[i][1]=mas[i][10]=mas[i][11]=0;
  }
  return 0;
}

int peshka() {
  if(b==9) return -1;
  if(two && b==8) return -1;
  if(b==3) {
    if(!mas[a][b+1]) mas[a][b+1] = 1;
    else return 0;
    if(!mas[a][b+2]) {
      mas[a][b+2] = 1;
      two = true;
    }
  }else {
    if(!two) {
      if(!mas[a][b+1]) mas[a][b+1]=1;
      else return 0;
    }else{
      if(mas[a][b+1]==2) return 0;
      if(!mas[a][b+2]) mas[a][b+2] = 1;
      else two=false;
      if(b==8){
        mas[a][10] = 0;
        two = false;
      }
    }
  }
  mas[a][b]=0;
  b++;
  return 1;
}

int knight() {
  int i, j;
  if(k==1) kill=false;
  if(kill) k=1;
  for(i=2; i<10; i++)
    for(j=2; j<10; j++) {
      if(mas[i][j]==2 || mas[i][j]==4) {
        if(knightway(i+1, j+2)) return 1;
        if(knightway(i+1, j-2)) return 1;
        if(knightway(i-1, j+2)) return 1;
        if(knightway(i-1, j-2)) return 1;
        if(knightway(i+2, j+1)) return 1;
        if(knightway(i+2, j-1)) return 1;
        if(knightway(i-2, j+1)) return 1;
        if(knightway(i-2, j-1)) return 1;
        if(mas[i][j]==2) mas[i][j]=0;
      }
    }
  for(i=2; i<10; i++)
    for(j=2; j<10; j++) {
      if(mas[i][j]==3 || mas[i][j]==4) mas[i][j]=2;
    }
  return 0;
}

int knightway(int i, int j) {
  if(!mas[i][j] || mas[i][j]==3) mas[i][j]=3;
  else if(mas[i][j]==2) mas[i][j]=4;
  else {
    if(!two && !kill) return 1;
    else {
      mas[i][j]=3;
      if(mas[a][b]!=1) b++;
      two  = false;
      kill = true;
    }
  }
  return 0;
}