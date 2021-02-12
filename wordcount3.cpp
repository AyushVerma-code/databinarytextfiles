#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<fstream.h>
#include<stdio.h>

void wordcount()
{
  fstream file;
  file.open("diary1.txt",ios::in|ios::out);

  char ans='y';
  char word[500];

  while (ans=='y')
  {
    cout<<"\n\nEnter the string word by word ";
    gets(word);
    file<<word;
    cout<<"\nDo you want to continue ";
    cin>>ans;
  }

    int count=0;
    file.close();
    file.open("diary1.txt",ios::in);
    while(!file.eof())
    {
      file.getline(word,3);
      if (strcmp(word,"my")==0|| strcmp(word,"me")==0)
      {
	count++;
      }
    }

    cout<<"\n\nThe count is "<<count;
    file.close();



}


void main()
{
  clrscr();
  wordcount();
  getch();

}
