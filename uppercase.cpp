#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<ctype.h>

void alphacount()
{
  fstream f;
  f.open("notes4.txt",ios::in|ios::out);
  char ch;
  int count=0;
  char ans='y';

  while(ans=='y')
  {
    cout<<"\nEnter a character ";
    cin>>ch;

    f<<ch;

    cout<<"\nDo you want to continue ";
    cin>>ans;
  }

  f.seekg(0);

  while(!f.eof())
  {
    f.get(ch);

    if(isupper(ch))
    {
      count++;
    }
   }

    cout<<"\nUppercase alphabets are  "<<count;

    f.close();



}
void main()
{
  clrscr();
  alphacount();
  getch();
}
