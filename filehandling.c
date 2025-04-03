
/****************************************************************************
	Program for sequential file organization. The input data is
	string of songs and the play function plays (actually displays)
	the desired song.
																				Date 06-11-02
*****************************************************************************/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void add();
void play();
void display();

struct tape     /* structure declaration */
{
 int srno;
 char songname[20];
};

struct tape t;
FILE *fp=NULL;

/*
The main function
Input :none
Output:none
called by:O.S.
Calls:add,display,play
*/
void main()
{
 int choice;
 char ans='y';

 while(ans=='y' || ans =='Y')
 {

  printf("\n\tMENU:");
  printf("\n\t\t1.ADD SONG");
  printf("\n\t\t2.DISPLAY SONGS");
  printf("\n\t\t3.PLAY SONG");
  printf("\n\t\t4.EXIT");
  printf("\n\t\tEnter Your choice:");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:
	  add();
	  break;

   case 2:
	  display();
	  break;

   case 3:
	  play();
	  break;

   case 4:
	  exit(0);
	  break;

   default: exit(0);

  } /* end case */
  printf("\n\tWant to continue with menu(y/Y)(n/N):");

  scanf("%c",&ans);
  }
  getch();

} /* end main*/

/*
   The add() Function
   Adds record to file.
   Input Parameter:none
   Parameter passing method: none
   Output:none
   Called By: main
   Calls: none
	*/
void add()
{
 char another='y';
 fp = fopen("Music.dat","a");
 if(fp==NULL)
 {
 printf("File opening error");
 exit(0);
 }
 while(another=='y'||another =='Y')
 {
  printf("\n\tEnter song no:");
  scanf("%d",&t.srno);
  printf("\n\tEnter the song:");

  gets(t.songname);
  fwrite(&t,sizeof(t),1,fp);
  printf("\n\tWant to add more??(Y/y)(N/n):");

  scanf("%c",&another);
 }
 fclose(fp);
}

/* The display() function
   Reads the contents of the file & displays them sequentially
   Input Parameter:none
   Parameter passing method: none
   Output:none
   Called By: main
   Calls: none
   */
void display()
{
 fp = fopen("Music.dat","r");
 if(fp==NULL)
 {
 printf("File opening error");
 exit(0);
 }
 while(fread(&t,sizeof(t),1,fp))
 {
  printf("\n\t");
  printf("%d\t%s",t.srno,t.songname);
 }
 fclose(fp);
}

/* The play() function
   Searches for the input song in the file sequentially
   Input Parameter:none
   Parameter passing method: none
   Output:none
   Called By: main
   Calls: none
*/
void play()
{
 char name[20];
 int flag=0;
 printf("\n\tEnter the song you want to play:");

 gets(name);
 fp=fopen("Music.dat","r");
 if(fp==NULL)
 {
   printf("\nFile opening error");
   exit(0);
 }
 while(fread(&t,sizeof(t),1,fp))
 {

 if(strcmp(t.songname,name)==0)
 {
   flag=1;
   break;
 }
 }
 if(flag==1)
 {
  printf("\n\tPlaying song...");
  printf("\n\tSong no:%d",t.srno);
  printf("\n\tSong name:%s",t.songname);
 }
 else
  printf("\n\tNo match found.");
  fclose(fp);
}
/*********************End of Program***********************************************/
