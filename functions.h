
#define bullet 45
#define bug 42
#define player 204

char wallchar[1];
char bulletChar[1]; 
char bugChar[1];
char playerChar[1];

int x,y;
char key;
int score=0;
int missedscore=0;
int spawncount= 5;
int bulletcount = 5;

void print(int score,int missedscore){
	
	system("CLS");
	printf("\n\t KILL THE BUGS");
	printf("\n\t Killed: %d - Missed: %d\n\n",score,missedscore);
	system("color B");
	
	for( x = 0; x < X; x++ ) {
		printf( "\t" );
		for( y = 0; y < Y; y++ ) {
			printf(" %c", map[ x ][ y ] );
		}
		printf( "\n" );
		}
		printf("\t Press 'W,A,S,D' buttons to move. \n");
		printf("\t Press 'Space' button to fire. \n");
		printf("\t Press 'E' button to exit. \n\n");
    }

void spawnBug(){
	
	//Spawn bug
	x=0; 
	y=0;
	//srand(time(NULL));
	spawncount--;	
	if(spawncount == 0){
		if(score >= 0){
			spawncount=5;
			x = 1+rand()%N-1;
			y = 15+rand()%14;
		}
		else if(score >= 20){
			spawncount=3;
			x = 1+rand()%N-1;
			y = 7+rand()%14;
		}
		else if(score >= 35){
			spawncount=1;
			x = 1+rand()%N-1;
			y = 6+rand()%8;	
		}
		map[x][y]=bugChar[0];
	}
}

void movementBullets(){
	
	for(x=N-1;x>=0;x--)
	{
		for(y=N+N-1;y>=0;y--)
		{
			if(map[x][y]==bulletChar[0])
			{
					if(map[x][y+1]==bugChar[0])
					{
						score++;
						bulletcount++;
						map[x][y+1]=space;
						map[x][y]=space;
					}
					else
					{
						if(map[x][y+1]!=wallchar[0])
						{
							map[x][y+1]=bulletChar[0];	
						}
						else
							bulletcount++;
							map[x][y]=space;
					}
				}	
			}
		}
}

void movementBugs(){
	
	for(x=0;x<N;x++)
	{
		for(y=0;y<N+N;y++)
		{
			if(map[x][y]==bugChar[0])
			{
				if(map[x][y-1] == bulletChar[0])
				{
					map[x][y-1] = space;
					score++;
					bulletcount++;
				}
				else {
					if(map[x][y-1] != wallchar[0])
						map[x][y-1] = bugChar[0];
					else
					{
						map[x][y] = space;
						missedscore++;
					}
				}
				if(map[x][y]!=playerChar[0])
				{
						map[x][y] = space;		
				}
			}				
		}
	}
}
	
void init(){
	
	bulletChar[0] = bullet;
	wallchar[0] = wall; 
	bugChar[0] = bug;
	playerChar[0] = player;
	
	createMap();
	print(score,missedscore);
}

bool isEnd(int miss,int hit, char key){
	if(miss == 15){
		system("color 0C");
		printf("\n\t\tYOU LOSE !\n\n");
		printf("\n\t\tMENU\n\n\tP-PLAY_AGAIN\n\tE-EXIT\n");
		return true;
	}
	if(hit == 50){
		system("color 02");
		printf("\n\t\tYOU WIN !\n\n");
		printf("\n\t\tMENU\n\n\tP-PLAY_AGAIN\n\tE-EXIT\n");
		return true;
	}
	if(key == 'E' || key == 'e'){
		system("color 1C");
		printf("\n\t\t EXÝT !\n\n");
		printf("\n\t\tMENU\n\n\tP-PLAY\n\tE-EXIT\n");
		return true;
	}
	return false;
}

int play(){
	
	init();
	
	int x=1,y=1;
	while(1)
	{	
		key = getch();
		print(score,missedscore);
		if( key == 'A' || key == 'a'  )
		{	
			if(map[x][y-1] != wallchar[0] )
			{
				map[x][y] = space;
				map[x][--y] = playerChar[0];	
			}
		}
		if( key == 'D' || key == 'd'  )
		{
			if(map[x][y+1] != wallchar[0] )
			{
				map[x][y] = space;
				map[x][++y] = playerChar[0];
			}
		}
		if( key == 'w' || key == 'W'  )
		{
			if(map[x-1][y] != wallchar[0] )
			{
				map[x][y] = space;
				map[--x][y] = playerChar[0];
			}
		}
		if( key == 'S' || key == 's'  )
		{
			if(map[x+1][y] != wallchar[0] )
			{
				map[x][y] = space;
				map[++x][y] = playerChar[0];
			}		
		}
		if( key == space || key == space )
		{
			if(bulletcount >= 0)
			{
				bulletcount--;
				map[x][y+1] = bulletChar[0] ;
			}
		}	
		spawnBug();
		movementBullets();
		movementBugs();	
		
		if(isEnd(missedscore,score,key)){
			break;
		}
		else
			print(score,missedscore);
	}

}
