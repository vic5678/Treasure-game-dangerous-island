#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <time.h>
#define ROWS 30
#include "../conio2.h"
#define COLUMNS 30
#include<windows.h>
#include <ctype.h>




void menu(){                            //function for arrow that works in real time in the main menu of the game while it moves pressing the arrow keys and selects the player's choice pressing the Enter button
	system("cls");
int position = 1;
int keyPressed = 0;


}
void arrowHere(int realPosition, int arrowPosition){       //Here is the arrow and it appears when it is across a text moves and stays at its place when it reachets it's boundaries
	if(realPosition == arrowPosition){
		printf(" --->> ");
	}else{
		printf("        ");
	}
}
int random(int a,int b);                                      //function that creates random numbers in a certain range given by the user




int main(void){

char sec_choice;
int position = 1;
int keyPressed = 0;
int choice, num, i;
unsigned long int fact;
do{
textcolor(RED);                                                         //colors the text

printf(" ######     #    #     #  #####  ####### ######  ####### #     #  #####\n");
printf(" #     #   # #   ##    # #     # #       #     # #     # #     # #     #\n");
printf(" #     #  #   #  # #   # #       #       #     # #     # #     # #      \n");
printf(" #     # #     # #  #  # #  #### #####   ######  #     # #     #  ##### \n");
printf(" #     # ####### #   # # #     # #       #   #   #     # #     #       #\n");
printf(" #     # #     # #    ## #     # #       #    #  #     # #     # #     #\n");
printf(" ######  #     # #     #  #####  ####### #     # #######  #####   #####\n");
printf("\n\n\n");
printf(" ###  #####  #          #    #     # ###### \n");
printf("  #  #     # #         # #   ##    # #     #\n");
printf("  #  #       #        #   #  # #   # #     #\n");
printf("  #   #####  #       #     # #  #  # #     #\n");
printf("  #        # #       ####### #   # # #     #\n");
printf("  #  #     # #       #     # #    ## #     #\n");
printf(" ###  #####  ####### #     # #     # ######   ");

textcolor(LIGHTCYAN);
printf("\n\n\n\t\tPRESS ANY KEY TO CONINUE\t\n\n");
keyPressed =getch();                                //the function keyPressed is called when a key is pressed
keyPressed = 0;
system("cls");
textcolor(WHITE);
int j;
   for(i=0; i<5; i++){
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tLoading");
     for(j=0 ; j<5 ; j++){
        printf(" . ");
        delay(150);
     }
     clrscr();
   }
 clrscr();

while (keyPressed !=13){
system("cls");
textcolor(BLUE);
arrowHere(1,position) ; printf("    PLAY GAME\n");        //Here the function arrowHere is called
textcolor(GREEN);
arrowHere(2,position) ; printf("    INSTRUCTIONS\n");
textcolor(RED);
arrowHere(3,position) ; printf("    EXIT\n");
textcolor(WHITE);
keyPressed = getch();
if(keyPressed == 80 && position !=3){
	position++;
}else if(keyPressed == 72 && position !=1){
	position--;
}else{
	position = position;
}

}
while(keyPressed=13){
switch(position){                           //swItch which determines the path of the programm  
case 1:
START:
system("cls");
srand(time(NULL));
char choice;
char map[ROWS][COLUMNS];               //map of the island
int i,j,c,d,e,h,x,k,l,w ;
int sea=0;
char P;
w=rand()%10;


textcolor(LIGHTCYAN);
printf("\nIn every round you have 5 choices to do:\n");        //possible movements of the player
printf("1-to look at the map type M\n");
printf("2-to go north type N\n");
printf("3-to go south type S\n");
printf("4-to go east type E\n");
printf("5-to go west type W\n\n");
textcolor(WHITE);
printf("What do you want to do?\n");

                                                        //map's design
for(i=0; i<=ROWS; i++){
	for(j=0 ; j<=COLUMNS; j++){
		map[i][j]= '-' ;

	}
}

//random coasts
int aktes;
int paktes;
x=7;
for(i=0; i<=10 ; i++){
	for(j=x ; j>=0 ; j--){
	    aktes=random(2,1);
	    paktes= random(3,1);
	    if(aktes==1)
		 map[i][j]=' ';
		else if(aktes==2){
		  if(paktes==1){

		  	if(map[i+1][j]== '-' || map[i+1][j+1]== '-' || map[i+1][j-1]== '-' || map[i-1][j]== '-' || map[i-1][j++]== '-' || map[i-1][j-1]== '-' || map[i][j++]== '-' || map[i][j-1]== '-')
		  		map[i][j]='F';
		  	else
		  	 map[i][j]='-';
		  }
		  else if(paktes==2){

		   if(map[i+1][j]== '-' || map[i+1][j+1]== '-' || map[i+1][j-1]== '-' || map[i-1][j]== '-' || map[i-1][j++]== '-' || map[i-1][j-1]== '-' || map[i][j++]== '-' || map[i][j-1]== '-')
		  		map[i][j]='M';
		  	else
		  	 map[i][j]='-';}
		  else if(paktes==3)
		   map[i][j]='-';
		}
	}
	x--;
}
x=23;
for(i=0; i<=15; i++){
	for(j=x; j<=30; j++){
		aktes=random(2,1);
	    paktes= random(3,1);
	    if(aktes==1)
		 map[i][j]=' ';
		else if(aktes==2){
		  if(paktes==1){

		  	if(map[i+1][j]== '-' || map[i+1][j+1]== '-' || map[i+1][j-1]== '-' || map[i-1][j]== '-' || map[i-1][j++]== '-' || map[i-1][j-1]== '-' || map[i][j++]== '-' || map[i][j-1]== '-')
		  		map[i][j]='F';
		  	else
		  	 map[i][j]='-';
		  }
		  else if(paktes==2){

		   if(map[i+1][j]== '-' || map[i+1][j+1]== '-' || map[i+1][j-1]== '-' || map[i-1][j]== '-' || map[i-1][j++]== '-' || map[i-1][j-1]== '-' || map[i][j++]== '-' || map[i][j-1]== '-')
		  		map[i][j]='M';
		  	else
		  	 map[i][j]='-';}
		  else if(paktes==3)
		   map[i][j]='-';
		}
	}
	x++;
}

x=0;
for(i=23; i<=30; i++){
	for(j=0; j<=x; j++){
		aktes=random(2,1);
	    paktes= random(3,1);
	    if(aktes==1)
		 map[i][j]=' ';
		else if(aktes==2){
		  if(paktes==1){

		  	if(map[i+1][j]== '-' || map[i+1][j+1]== '-' || map[i+1][j-1]== '-' || map[i-1][j]== '-' || map[i-1][j++]== '-' || map[i-1][j-1]== '-' || map[i][j++]== '-' || map[i][j-1]== '-')
		  		map[i][j]='F';
		  	else
		  	 map[i][j]='-';
		  }
		  else if(paktes==2){

		   if(map[i+1][j]== '-' || map[i+1][j+1]== '-' || map[i+1][j-1]== '-' || map[i-1][j]== '-' || map[i-1][j++]== '-' || map[i-1][j-1]== '-' || map[i][j++]== '-' || map[i][j-1]== '-')
		  		map[i][j]='M';
		  	else
		  	 map[i][j]='-';}
		  else if(paktes==3)
		   map[i][j]='-';
		}
	}

	x++;
}

x=23;
for(i=30; i>=23; i--){
	for(j=x; j<=30; j++){
		aktes=random(2,1);
	    paktes= random(3,1);
	    if(aktes==1)
		 map[i][j]=' ';
		else if(aktes==2){
		  if(paktes==1){

		  	if(map[i+1][j]== '-' || map[i+1][j+1]== '-' || map[i+1][j-1]== '-' || map[i-1][j]== '-' || map[i-1][j++]== '-' || map[i-1][j-1]== '-' || map[i][j++]== '-' || map[i][j-1]== '-')
		  		map[i][j]='F';
		  	else
		  	 map[i][j]='-';
		  }
		  else if(paktes==2){

		   if(map[i+1][j]== '-' || map[i+1][j+1]== '-' || map[i+1][j-1]== '-' || map[i-1][j]== '-' || map[i-1][j++]== '-' || map[i-1][j-1]== '-' || map[i][j++]== '-' || map[i][j-1]== '-')
		  		map[i][j]='M';
		  	else
		  	 map[i][j]='-';}
		  else if(paktes==3)
		   map[i][j]='-';
		}
	}

	x++;
}

for(i=2; i<=28; i+=6){
    for(j=6; j<=24; j+=4){
        map[i][j]='F';
        map[i+1][j]='F';
        map[i][j+1]='F';
    }
}
for(i=12; i<=18; i++){
    for(j=11; j<=23; j++)
        map[i][j]='F';
}
for(i=14; i<=16; i++){
    for(j=13; j<=18; j++)
        map[i][j]='M';
}

for(j=30; j<=30; j++){
    for(i=8; i<12; i++)
        map[i][j]='C';
}

for(i=0; i<=30; i++){
    map[i][30]=' ';
    map[i][0]=' ';
    map[0][i]=' ';
    map[30][i]=' ';
    }
for(i=7 ; i<=23;i++){
  paktes=random(2,0);
  if(paktes==0){
  	map[i][1]='-';
  }
  else if(paktes==1){
  	map[i][1]=' ';
  }
}
for(i=7 ; i<=23;i++){
  paktes=random(2,0);
  if(paktes==0){
  	map[i][29]='-';
  }
  else if(paktes==1){
  	map[i][29]=' ';
  }
}
for(j=7 ; j<=23; j++){
  paktes=random(2,0);
  if(paktes==0){
  	map[1][j]='-';
  }
  else if(paktes==1){
  	map[1][j]=' ';
  }
}
for(j=7 ; j<=23; j++){
  paktes=random(2,0);
  if(paktes==0){
  	map[29][j]='-';
  }
  else if(paktes==1){
  	map[29][j]=' ';
  }
}


                                               //random numbers and random number of treasures
int treasure;
treasure=random(5,0);
for(i=0; i<=treasure; i++){
c=random(24,3);
d=random(24,3);
if(map[c][d++]!=' ')
   map[c][d++]='T';}
c=random(24,3);
d=random(24,3);
map[c][d]='D';

c=random(24,3);
d=random(24,3);
map[c][d]='C';

int y=random(26,2);
int z=random(26,2);
if(map[y][z]!=' ' || map[y][z]!='T'){
P=map[y][z];
map[y][z]='X';
}

                                          //Movements in the map with possiblity of error

int r;
for(r=0 ; r<=30 ; r++){
scanf(" %c",&choice);
if(choice=='M')
{
    printf("take a close look at the map\n");

for(i=0 ; i<=ROWS ; i++){
	for(j=0 ; j<=COLUMNS ; j++){
		if(map[i][j]=='M'){
            textcolor(BROWN);
             textbackground(BROWN);
            printf("%3c", map[i][j]);
            textcolor(WHITE);
             textbackground(BLACK);
        }
		if(map[i][j]== 'F'){
            textbackground(GREEN);
            textcolor(GREEN);
            printf("%3c", map[i][j]);
            textcolor(WHITE);
          textbackground(BLACK);
		}
		if(map[i][j]==' '){
            textbackground(CYAN);
            printf("%3c", map[i][j]);
            textbackground(BLACK);}
            if(map[i][j]=='-'){
            textbackground(LIGHTGREEN);
            textcolor(LIGHTGREEN);
            printf("%3c", map[i][j]);
            textcolor(WHITE);
            textbackground(BLACK);
        }
        if(map[i][j]=='T'){

            printf("%3c", map[i][j]);

        }
        if(map[i][j]=='X'){

            printf("%3c", map[i][j]);

        }
        if(map[i][j]=='D'){
            textbackground(GREEN);
            textcolor(BROWN);
            printf("%3c", map[i][j]);
            textcolor(WHITE);
            textbackground(BLACK);
        }
        if(map[i][j]=='C'){
            textbackground(DARKGRAY);
            textcolor(BROWN);
            printf("%3c", map[i][j]);
            textcolor(WHITE);
            textbackground(BLACK);
        }


	}
printf("   ");
	printf("\n");
}

}


else if(choice=='N'){{
e=random(5,0);
   if(e!=4){
   P=map[y--][z];
    if(P==' '){
       printf("you fell into the sea\n");                               //Possiblity of death caused by sharks in the sea
        switch(sea){
       case 0:
           if(w==0 || w==1){
            printf("you got eaten by a shark\nGAME OVER\n");
          return 0;
            }
            else {
            P=map[y++][z];
            sea++;}
            break;
       case 1:
           if(w<=6){
            printf("you got eaten by a shark\nGAME OVER\n");
            return 0;
            }
            else{
            printf("great danger to get eaten by a shark!\n");
            P=map[y++][z];
            sea++;
            }
            break;
       case 2:
            printf("you got eaten by a shark\nGAME OVER\n");
            return 0;
            break;}
}}


    else if(e==4){
    h=random(2,0);
    if(h==0){
        P=map[y--][z++];

        if(P==' '){
       printf("you fell into the sea\n");
        switch(sea){
       case 0:
           if(w==0 || w==1){
            printf("you got eaten by a shark\nGAME OVER\n");
            return 0;
            }
            else {
            P=map[y++][z--];
            sea++;}
            break;
       case 1:
           if(w<=6){
            printf("you got eaten by a shark\nGAME OVER\n");
            return 0;
            }
            else{
            printf("great danger to get eaten by a shark!\n");
            P=map[y++][z--];
            sea++;
            }
            break;
       case 2:
            printf("you got eaten by a shark\nGAME OVER\n");
            return 0;
            break;

        }

       }

    }
    else if(h==1){
        P=map[y--][z--];

        if(P==' '){
       printf("you fell into the sea\n");
        switch(sea){
       case 0:
           if(w==0 || w==1){
            printf("you got eaten by a shark\nGAME OVER\n");
            return 0;
            }
            else {
            P=map[y++][z++];
            sea++;}
            break;
       case 1:
           if(w<=6){
            printf("you got eaten by a shark\nGAME OVER\n");
            return 0;
            }
            else{
            printf("great danger to get eaten by a shark!\n");
            P=map[y++][z++];
            sea++;
            }
            break;
       case 2:
            printf("you got eaten by a shark\nGAME OVER\n");
            return 0;
            break;

}
}
}
}

}}

else if(choice=='S'){
   k=random(5,0);
   if(k!=4){
   P=map[y++][z];

    if(P==' '){
       printf("you fell into the sea\n");
        switch(sea){
       case 0:
           if(w==0 || w==1){
            printf("you got eaten by a shark\nGAME OVER\n");
          return 0;
            }
            else {
            P=map[y--][z];
            sea++;}
            break;
       case 1:
           if(w<=10){
            printf("you got eaten by a shark\nGAME OVER\n");
            return 0;
            }
            else{
            printf("great danger to get eaten by a shark!\n");
            P=map[y--][z];
            sea++;
            }
            break;
       case 2:
            printf("you got eaten by a shark\nGAME OVER\n");
            return 0;
            break;}
}}


    else if(k==4){
    l=random(2,0);
    if(l==0){
        P=map[y++][z++];

        if(P==' '){
       printf("you fell into the sea\n");
        switch(sea){
       case 0:
           if(w==0 || w==1){
            printf("you got eaten by a shark\nGAME OVER\n");
            return 0;
            }
            else {
            P=map[y--][z--];
            sea++;}
            break;
       case 1:
           if(w<=6){
            printf("you got eaten by a shark\nGAME OVER\n");
            return 0;
            }
            else{
            printf("great danger to get eaten by a shark!\n");
            P=map[y--][z--];
            sea++;
            }
            break;
       case 2:
            printf("you got eaten by a shark\nGAME OVER\n");
            return 0;
            break;

        }

       }

    }
    else if(l==1){
        P=map[y++][z--];
       if(P==' '){
       printf("you fell into the sea\n");
        switch(sea){
       case 0:
           if(w==0 || w==1){
            printf("you got eaten by a shark\nGAME OVER\n");
            return 0;
            }
            else {
            P=map[y--][z++];
            sea++;}
            break;
       case 1:
           if(w<=6){
            printf("you got eaten by a shark\nGAME OVER\n");
            return 0;
            }
            else{
            printf("great danger to get eaten by a shark!\n");
            P=map[y--][z++];
            sea++;
            }
            break;
       case 2:
            printf("you got eaten by a shark\nGAME OVER\n");
            return 0;
            break;

}
}
}
}

}

else if(choice=='W'){
     e=random(5,0);
   if(e!=4){
   P=map[y][z--];

    if(P==' '){
       printf("you fell into the sea\n");
         switch(sea){
       case 0:
           if(w==0 || w==1){
            printf("you got eaten by a shark\nGAME OVER\n");
            return 0;
            }
            else {
            P=map[y][z++];

            sea++;}
            break;
       case 1:
           if(w<=6){
            printf("you got eaten by a shark\nGAME OVER\n");
            return 0;
            }
            else{
            printf("great danger to get eaten by a shark!\n");
            P=map[y][z++];

            sea++;
            }
            break;
       case 2:
            printf("you got eaten by a shark\nGAME OVER\n");
            return 0;
            break;

}}}
   else if(e==4){
    h=random(2,0);
    if(h==0){
        P=map[y--][z--];

        if(P==' '){
       printf("you fell into the sea\n");
         switch(sea){
       case 0:
           if(w==0 || w==1){
            printf("you got eaten by a shark\nGAME OVER\n");
            return 0;
            }
            else {
            P=map[y++][z++];

            sea++;}
            break;
       case 1:
           if(w<=6){
            printf("you got eaten by a shark\nGAME OVER\n");
            return 0;
            }
            else{
            printf("great danger to get eaten by a shark!\n");
            P=map[y++][z++];

            sea++;
            }
            break;
       case 2:
            printf("you got eaten by a shark\nGAME OVER\n");
            return 0;
            break;

}}}
    else if(h==1){
        P=map[y++][z--];

        if(P==' '){
       printf("you fell into the sea\n");
         switch(sea){
       case 0:
           if(w==0 || w==1){
            printf("you got eaten by a shark\nGAME OVER\n");
            return 0;
            }
            else {
            P=map[y--][z++];

            sea++;}
            break;
       case 1:
           if(w<=6){
            printf("you got eaten by a shark\nGAME OVER\n");
            return 0;
            }
            else{
            printf("Great danger to get eaten by a shark!\n");
            P=map[y--][z++];

            sea++;
            }
            break;
       case 2:
            printf("You got eaten by a shark.\n");
            textcolor(RED);
            printf("\n\n\t\t\tGAME OVER");
            textcolor(WHITE);
            return 0;
            break;

}}}


}}
else if(choice=='E'){
    e=random(5,0);
   if(e!=4){
   P=map[y][z++];

    if(P==' '){
       printf("you fell into the sea\n");
       switch(sea){
       case 0:
           if(w==0 || w==1){
            printf("you got eaten by a shark\nGAME OVER\n");
            return 0;
            }
            else {
            P=map[y][z--];

            sea++;}
            break;
       case 1:
           if(w<=6){
            printf("you got eaten by a shark\nGAME OVER\n");
            return 0;
            }
            else{
            printf("great danger to get eaten by a shark!\n");
            P=map[y][z--];

            sea++;
            }
            break;
       case 2:
            printf("you got eaten by a shark\nGAME OVER\n");
            return 0;
            break;

}}}
   else if(e==4){
    h=random(2,0);
    if(h==0){
        P=map[y--][z++];

        if(P==' '){
       printf("you fell into the sea\n");
       switch(sea){
       case 0:
           if(w==0 || w==1){
            printf("you got eaten by a shark\nGAME OVER\n");
            return 0;
            }
            else {
            P=map[y++][z--];

            sea++;}
            break;
       case 1:
           if(w<=6){
            printf("you got eaten by a shark\nGAME OVER\n");
            return 0;
            }
            else{
            printf("great danger to get eaten by a shark!\n");
            P=map[y++][z--];

            sea++;
            }
            break;
       case 2:
            printf("you got eaten by a shark\nGAME OVER\n");
            return 0;
            break;

}}}
    else if(h==1){
        P=map[y++][z++];
        if(P==' '){
       printf("you fell into the sea\n");
       switch(sea){
       case 0:
           if(w==0 || w==1){
            printf("you got eaten by a shark\nGAME OVER\n");
            return 0;
            }
            else {
            P=map[y--][z--];

            sea++;}
            break;
       case 1:
           if(w<=6){
            printf("you got eaten by a shark\nGAME OVER\n");
            return 0;
            }
            else{
            printf("great danger to get eaten by a shark!\n");
            P=map[y--][z--];
            sea++;
            }
            break;
       case 2:
            printf("you got eaten by a shark\nGAME OVER\n");
            return 0;
            break;

}}}

}}
else
{
    printf("wrong input.Try again.\n");
    continue;
}

if(P=='-')                                                           //The type of the ground is shown in every movement of the player
    printf("You are in the clear\n");
else if(P=='M')
    printf("You are on the mountain\n");
else if(P=='F')
    printf("You are in the forest\n");
else if(P=='C'){
    printf("You are in the cave.\nYou lost in there and unfortunately one movement.\n");
    r++;}
else if(P=='D')
    printf("You are beneath the tree next to the treasure.");

else if(P=='T'){
    textcolor(RED);
    printf("YOU FOUND IT.\n");
    textcolor(YELLOW);
    printf("Now you must put the correct password to open it.\nBe careful,you have only one chance.\nHINT:we look for the year when Cristoforo Colombo discovered America.\n");
    textcolor(RED);

    printf("Enter the password:\n");
    textcolor(WHITE);
    int tr_pin;
    scanf("%d",&tr_pin);
    textcolor(RED);
    if(tr_pin==1492){
        printf("CONGRATULATIONS!!!\nYOU OPENED IT!!!\n\n\n\t\tW I N N E R \n\n\n\n");}
    else if(tr_pin!=1492){
        printf("Wrong password!\nGAME OVER!\n");
    }
        textcolor(WHITE);

    return 0;

     break;
}
else if(P==' '){
    printf("You are in the sea\n");}

                                                               //Maximum number of movements-Pirate
if(r==20){
 textcolor(RED);
    for(i=0; i<3; i++)
    Beep(900,500);
	printf("You have 10 steps left.\n");
    textcolor(WHITE);
}
else if(r==29){
	textcolor(RED);
    for(i=0; i<3; i++)
    Beep(900,500);
	printf("Be careful. If you don't find the treasure in one step,the pirate will reach it.\n");
    textcolor(WHITE);

}
else if(r==30){
	printf("The pirate found the treasure first. Game over!");
	return 0;
}

printf("What do you want to do next?\n");

}
break;
exit(0);
case 2:

        textcolor(YELLOW);
        system("cls");
        printf("\t\t\t\t\t---INSTRUCTIONS---");

        printf("\n\t\tWelcome to the MOST DANGEROUS ISLAND in the Atlantic ocean\n\t\tYou are on this island with only a purpose;to find\n\t\t a treasure from 18th century.On the island your only weapon \n\t\tis the map and a compass, so you move based on it, with a 20%% chance of error.\n\t\tAt the beginning\n\t\t of the game you are randomly placed in a square of the island, a position visible on your map.\n\t\tHowever, during your movement you will not be able to see your exact location but to guess\n\t\t it based on your original\n\t\t and the description of the landscape that will be given to you.\n\t\tFor example you are in the forest.\n");//basic instructions of the game

        printf("\n\t\tHowever, the available movements are not unlimited, as there\n\t\t is a pirate on the island who is also looking\n\t\t for this treasure, so the maximum number of movements is 20.\n\t\tDo not worry there will be a reminder for the number of\n\t\t movements.Also, beware the island\n\t\t is surrounded by sea, inhabited by sharks, who are\n\t\t waiting to eat you.\n\t\tThe first time you fall into the sea there is a 20%% chance they will eat you,\n\t\t the second 70%% and the third is the pharmacist.\n\t\tSo obviously the player loses either if his movements end and \n\t\tthe pirate finds the treasure first or when he is eaten by sharks.\n\n\n\n");

       SECOND:
        textcolor(YELLOW);
        printf("if you want to go play the game press 1.\nIf you want to exit press 2.\n");
        textcolor(WHITE);


        scanf(" %c",&sec_choice);
        printf("\n\n\n\n");
        if(sec_choice==49)
            goto START;
        else if(sec_choice==50){
            textcolor(RED);
            printf("\t\t\t\tGOODBYE");
            textcolor(WHITE);
            }else{
                goto SECOND;
            }
     exit(0);
     keyPressed=0;


    case 3:
        printf("\n\n\t\t\tGoodbye!\n\n\n");
        exit(0);

}}}while(keyPressed = 13);

return 0;
    }

int random(int a,int b){
int s;
s=rand()%a+b;

return s;

}
