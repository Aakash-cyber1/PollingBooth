#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define CANDIDATE1 "Narendra modi"
#define CANDIDATE2 "Rahul gandhi"
#define CANDIDATE3 "Arwind kejrival"
#define CANDIDATE4 "Mamta banerji"
int count1=0,count2=0,count3=0,count4=0,spoiledvotes=0;
void castVoting()
{	
int ch;
printf("\n##Please choose your candidate:##\n");
printf("Press 1 to vote NARENDRA MODI\n Press 2 to vote Rahul gandhi\n Press 3 to vote Arwind kejrival\n Press 4 to vote Mamta banerji\n Press 5 to vote none of these\n");
printf("\nPlease enter choice between 1-4");
scanf("%d",&ch);
{
switch(ch)
{
case 1:
count1++;
break;
case 2:
count2++;
break;
case 3:
count3++;
break;
case 4:
count4++;
break;
case 5:
spoiledvotes++;
break;
default:
printf("\nYOU ENTERED THE WRONG CHOICE PLEASE RETRY\n");
}         }
printf("\nthanks to vote!!\n");
}
void getLeadingCandidate()
{
printf("\n## LEADING CANDIDATE OF VOTING LIST ##");
if (count1>=count2 && count1>=count3 && count1>=count4)
printf("\n%s is the leading candidate",CANDIDATE1);
else if(count2>=count1 && count2>=count3 && count2>=count4)
printf("\n%s is the leading candidate",CANDIDATE2);
else if(count3>=count1 && count3>=count2 && count3>=count4)
printf("\n%s is the leading candidate",CANDIDATE3);
else if(count4>=count1 && count4>=count2 && count4>=count3)
printf("\n%s is the leading candidate",CANDIDATE4);
else
printf("\nthere is no win situation");
}
void getVotesCount()
{
printf("\n##VOTING STATS ARE AS:");
printf("\n%s - %d",CANDIDATE1,count1);
printf("\n%s - %d",CANDIDATE2,count2);
printf("\n%s - %d",CANDIDATE3,count3);
printf("\n%s - %d",CANDIDATE4,count4);
printf("\n spoiled votes are %d",spoiledvotes);
}
int main()
{
int choose;
do{

printf("\n\n##WELCOME TO VOTING SYSTEM##\n");
printf("PRESS 1 TO CAST VOTE\n");
printf("PRESS 2 TO GET LEADING CANDIDATE\n");
printf("PRESS 3 TO GET VOTES COUNT\n");
printf("PRESS 4 TO EXIT\n");
scanf("%d",&choose);
switch(choose)
{
case 1:
castVoting();
break;
case 2:
getLeadingCandidate();
break;
case 3:
getVotesCount();
break;
case 4:
printf("Thank you for using this!!");
break;
default:
printf("\nyou entered the wrong choice, please try again");
}
}
while(choose!=4);
return 0;
}