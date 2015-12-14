// Tic Tac Toe Game! Player1(X) vs Player2(O)
// Faheem Hassan Zunjani


#include <stdio.h>
#include <stdlib.h>


char data[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};

int check(){
  if(data[0][0]=='X'&&data[1][0]=='X'&&data[2][0]=='X')
    { return 1;
    }
  else if(data[0][0]=='O'&&data[1][0]=='O'&&data[2][0]=='O')
    { return 2;
    }
  else if(data[0][1]=='X'&&data[1][1]=='X'&&data[2][1]=='X')
    { return 1;
    }
  else if(data[0][1]=='O'&&data[1][1]=='O'&&data[2][1]=='O')
    { return 2;
    }
  else if(data[0][2]=='X'&&data[1][2]=='X'&&data[2][2]=='X')
    { return 1;
    }
  else if(data[0][2]=='O'&&data[1][2]=='O'&&data[2][2]=='O')
    { return 2;
    }
  else if(data[0][0]=='X'&&data[0][1]=='X'&&data[0][2]=='X')
    { return 1;
    }
  else if(data[0][0]=='O'&&data[0][1]=='O'&&data[0][2]=='O')
    { return 2;
    }
  else if(data[1][0]=='X'&&data[1][1]=='X'&&data[1][2]=='X')
    { return 1;
    }
  else if(data[1][0]=='O'&&data[1][1]=='O'&&data[1][2]=='O')
    { return 2;
    }
  else if(data[2][0]=='X'&&data[2][1]=='X'&&data[2][2]=='X')
    { return 1;
    }
  else if(data[2][0]=='O'&&data[2][1]=='O'&&data[2][2]=='O')
    { return 2;
    }
  else if(data[0][0]=='X'&&data[1][1]=='X'&&data[2][2]=='X')
    { return 1;
    }
  else if(data[0][0]=='O'&&data[1][1]=='O'&&data[2][2]=='O')
    { return 2;
    }
  else if(data[0][2]=='X'&&data[1][1]=='X'&&data[2][0]=='X')
    { return 1;
    }
  else if(data[0][2]=='O'&&data[1][1]=='O'&&data[2][0]=='O')
    { return 2;
    }
  else 
    { return 3;
    }
}	

int main(){
  
  system("clear");                      

  int i=0,j=0,k=0,pos1,pos2,flag=3,chk=0,v=0;
 
  char ch='|';
  
  while(i<9&&(flag!=1&&flag!=2))
    { printf("\nTic Tac Toe (X vs O)! \n\n");
      printf("Use positions as (1,0),(0,2),(2,2)! \n\n\n");
          
      for(j=0;j<3;j++)               // Printing the grid
	{ printf("   %c  %c  %c  %c  %c \n",data[j][0],ch,data[j][1],ch,data[j][2]);
	  if(j!=2)
	    { printf("------------------- \n");
	    }
	}
      
      printf("\n\n");

      if(i%2==0)                    // Alternating player moves
	{ printf("Player1: ");
	  scanf("%d,%d",&pos1,&pos2);
	  chk=0;
	  do
	    { if(data[pos1][pos2]=='X'||data[pos1][pos2]=='O')
		{ printf("\nAlready used! Re-enter:");
		  scanf("%d,%d",&pos1,&pos2);
		  chk=0;
		}
	      else
		{ chk=1;
		}
	    }while(chk==0);

	  data[pos1][pos2]='X';
	  flag=check();
	}
      else
	{ printf("Player2: ");
    scanf("%d,%d",&pos1,&pos2);
    chk=0;
    do
      { if(data[pos1][pos2]=='X'||data[pos1][pos2]=='O')
    { printf("\nAlready used! Re-enter:");
      scanf("%d,%d",&pos1,&pos2);
      chk=0;
    }
        else
    { chk=1;
    }
      }while(chk==0);

    data[pos1][pos2]='O';
    flag=check();
	}
      
      i++;
      
      if(flag==3)
	{ system("clear");                  
	}
     }
    
  system("clear");                   // Final Result Display
  printf("\nTic Tac Toe (X vs O)! \n\n");
  printf("Use positions as (1,0),(0,2),(2,2)! \n\n\n");
          
  for(j=0;j<3;j++)        
    { printf("   %c  %c  %c  %c  %c \n",data[j][0],ch,data[j][1],ch,data[j][2]);
      if(j!=2)
	{ printf("------------------- \n");
	}
    }
      
  printf("\n");
  if(flag==1)
    { printf("\n\n Player1 wins! :D\n\n");
    }
  else if(flag==2)
    { printf("\n\n Player2 wins! :D\n\n");
    }
  else
    { printf("\n\n Its a Tie!\n\n");
    }
	
	return 0;	
	
}
