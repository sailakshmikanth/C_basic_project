#include<stdio.h>
int runs();
int main()
{
	int First_runs,second_runs;
	printf("enter score for team 1\n");
	First_runs = runs();
	printf("enter score for team 2\n");
	second_runs = runs();
	if(First_runs > second_runs)
	{
		printf("TEAM 1 WON THE MATCH\n");
	}
	else if(second_runs > First_runs)
	{
		printf("TEAM 2 WON THE MATCH\n");
	}
	else{
		printf("DRAW\n");
	}
}
int runs()
{
	int overs,wikets=0,i,j,runs=0,total_wikets,score=0,Single_player_runs=0;
	char player_name[20];
	printf("enter no of overs\n");
	scanf("%d",&overs);
	printf("enter no of wikets\n");
	scanf("%d",&total_wikets);
	printf("enter player 1st name\n");
	scanf("%s",player_name);
	printf("out then press -1\n no ball press -2\n wide press -3\n");
	for(i=1;i<=overs;i++)
	{
		for(j=1;j<=6;j++)
		{   
     		printf("enter no of runs in ball no %d in the over %d = ",j,i);
		    scanf("%d",&runs);
		    if(runs==-2)
		    {
		    	j=j-1;
		    	score=score+2;
		    	Single_player_runs= Single_player_runs+2;
			}
			if(runs==-3)
			{
				j=j-1;
				score=score+4;
				Single_player_runs = Single_player_runs+4;
			}
			if(runs==-1)
			{
				printf("\nruns done by %dst player %s is %d\n",wikets+1,player_name,Single_player_runs);
				wikets = wikets+1;
				if(wikets<total_wikets)
				{
				printf("enter player %dst name\n",wikets+1);
            	scanf("%s",player_name);
				}
				Single_player_runs = 0;
			    runs=0;
			}
			if(wikets==total_wikets)
			{
				break;
			}
		   score = score + runs;
		   Single_player_runs = Single_player_runs + runs;
        }
        printf("\nruns in %d over is %d\n",i,score);
		printf("\ntotal  no of wikets after %d over is %d\n\n",i,wikets);
		if(wikets==total_wikets){
			break;
		}
	}
	return score;
}
