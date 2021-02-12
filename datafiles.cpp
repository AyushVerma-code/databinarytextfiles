#include<iostream.h>
#include<fstream.h>
#include<stdio.h>

void main()
{
  ofstream m;
  m.open("Marks.Dat");
  char ans='y';
  int rno;
  float marks;
  char name[20];

  while(ans=='y')
  {
    cout<<"\nEnter Roll no. ";
    cin>>rno;

    cout<<"\nEnter name ";
    gets(name);

    cout<<"\nEnter marks ";
    cin>>marks;

    m<<rno<<marks<<name;
    cout<<"\n\nDo you wish to continue..... ";
    cin>>ans;
  }

  m.close();

}
