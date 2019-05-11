

#define wall 178
#define space 32

#define N 15  
#define X N+1
#define Y N+N+1
#define map str1


char str1[X][Y] = {"               ","               ","               ","               ","               "};

void createMap(){
	str1[0][0]=wall;str1[0][1]=wall;str1[0][17]=wall;str1[15][3]=wall;str1[15][19]=wall;str1[4][30]=wall;
	str1[1][0]=wall;str1[0][2]=wall;str1[0][18]=wall;str1[15][4]=wall;str1[15][20]=wall;str1[5][30]=wall;
	str1[2][0]=wall;str1[0][3]=wall;str1[0][19]=wall;str1[15][5]=wall;str1[15][21]=wall;str1[6][30]=wall;
	str1[3][0]=wall;str1[0][4]=wall;str1[0][20]=wall;str1[15][6]=wall;str1[15][22]=wall;str1[7][30]=wall;
	str1[4][0]=wall;str1[0][5]=wall;str1[0][21]=wall;str1[15][7]=wall;str1[15][23]=wall;str1[8][30]=wall;
	str1[5][0]=wall;str1[0][6]=wall;str1[0][22]=wall;str1[15][8]=wall;str1[15][24]=wall;str1[9][30]=wall;
	str1[6][0]=wall;str1[0][7]=wall;str1[0][23]=wall;str1[15][9]=wall;str1[15][25]=wall;str1[10][30]=wall;
	str1[7][0]=wall;str1[0][8]=wall;str1[0][24]=wall;str1[15][10]=wall;str1[15][26]=wall;str1[11][30]=wall;
	str1[8][0]=wall;str1[0][9]=wall;str1[0][25]=wall;str1[15][11]=wall;str1[15][27]=wall;str1[12][30]=wall;
	str1[9][0]=wall;str1[0][10]=wall;str1[0][26]=wall;str1[15][12]=wall;str1[15][28]=wall;str1[13][30]=wall;
	str1[10][0]=wall;str1[0][11]=wall;str1[0][27]=wall;str1[15][13]=wall;str1[15][29]=wall;str1[14][30]=wall;
	str1[11][0]=wall;str1[0][12]=wall;str1[0][28]=wall;str1[15][14]=wall;str1[15][30]=wall;str1[15][30]=wall;
	str1[12][0]=wall;str1[0][13]=wall;str1[0][29]=wall;str1[15][15]=wall;str1[0][30]=wall;
	str1[13][0]=wall;str1[0][14]=wall;str1[0][30]=wall;str1[15][16]=wall;str1[1][30]=wall;
	str1[14][0]=wall;str1[0][15]=wall;str1[15][1]=wall;str1[15][17]=wall;str1[2][30]=wall;
	str1[15][0]=wall;str1[0][16]=wall;str1[15][2]=wall;str1[15][18]=wall;str1[3][30]=wall;
}
