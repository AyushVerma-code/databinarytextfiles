#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<string.h>

void blankcount()
{
  fstream f;
  f.open("notes1.txt",ios::in|ios::out);
  char str[100];
  int count=0;
  char ans='y';

  while(ans=='y')
  {
    cout<<"\nEnter a string ";
    gets(str);

    f<<str;

    cout<<"\nDo you want to continue ";
    cin>>ans;
  }

  f.seekg(0);

  while(!f.eof())
  {
    f.getline(str,2);

    if(strcmp(str," ")==0)
    {
      count++;
    }
  }

    cout<<"\nNumber of spaces is "<<count;

    f.close();



}
void main()
{
  clrscr();
  blankcount();
  getch();
}
