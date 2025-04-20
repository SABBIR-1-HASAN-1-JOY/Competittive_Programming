#include <bits/stdc++.h>
using namespace std;

bool doesRookAttack(string rook,string knight)
{
  int rowRook=rook[0]-'a';
  int colRook=rook[1]-'1';
  int rowKnight=knight[0]-'a';
  int colKnight=knight[1]-'1';

  if(rowRook==rowKnight || colRook==colKnight)
  {
    return true;
  }
  return false;
}
bool doesKnightAttack(string knight,string rook)
{
  int rowRook=rook[0]-'a';
  int colRook=rook[1]-'1';
  int rowKnight=knight[0]-'a';
  int colKnight=knight[1]-'1';

  if((abs(rowRook-rowKnight)==2 && abs(colRook-colKnight)==1 )||
  (abs(rowRook-rowKnight)==1 && abs(colRook-colKnight)==2 )) return true;
  return false;
}
bool isSame(string a,int row,int col)
{
  string newKnight;
      newKnight+=char(row+'a');
      newKnight+=char(col+'1');
  return a==newKnight;
}
int main()
{
  string rook,knight;
  cin>>rook>>knight;

  int count=0;

  for(int row=0;row<8;row++)
  {
    for(int col=0;col<8;col++)
    {
      if(isSame(rook,row,col)||isSame(knight,row,col)) continue;
      string newKnight;
      newKnight+=char(row+'a');
      newKnight+=char(col+'1');
      if(!doesRookAttack(rook,newKnight) && !doesKnightAttack(newKnight,knight)&& !doesKnightAttack(newKnight,rook) )
      {
        count++;
      }
      
    }
  }
  cout<<count<<endl;

}