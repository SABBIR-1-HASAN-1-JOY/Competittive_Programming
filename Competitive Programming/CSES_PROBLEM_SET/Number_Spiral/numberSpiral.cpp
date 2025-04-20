#include <iostream>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
  long long int row,column;
  cin>>row>>column;
  if(row==1 && column ==1) cout<<"1\n";
  else if(row>column){
    if(row%2==0){
      long long int num=row*row;
      num=num-column+1;
      cout<<num<<endl;
    }
    else {
      long long int num=(row-1)*(row-1)+1;
      num=num+column-1;
      cout<<num<<endl;
    }
  }
  else{
    if(column%2==0){
      long long int num=(column-1)*(column-1)+1;
      num=num+row-1;
      cout<<num<<endl;
    }
    else {
      long long int num=(column)*(column);
      num=num-row+1;
      cout<<num<<endl;
    }
  }
}
}