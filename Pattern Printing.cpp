#include <stdio.h>

//---------------------  Star Rectangle  -----------------------------

void starRec(int c,int r){
	int i,j;
	for (i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
		  printf("* ");
		}
		printf("\n");
	}
}

//----------------------  Number Rectangle  --------------------------

void numRec(int c,int r){
	int i,j;
	for (i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
		  printf("%d ",j);
		}
		printf("\n");
	}
}

//-----------------------  Star Triangle  ----------------------------

void starTri(int r){
	int i,j;
	for (i=1;i<=r;i++)
	{
		for(j=1;j<=i;j++)
		{
		  printf("* ");
		}
		printf("\n");
	}
}

//-----------------------  Star Triangle Inverted  --------------------

void starTriIn(int r){
	int i,j;
	for (i=1;i<=r;i++)
	{
		for(j=1;j<=r+1-i;j++)
		{
		  printf("* ");
		}
		printf("\n");
	}
}

//------------------------  Number Triangle  ---------------------------

void numTri(int r){
	int i,j;
	for (i=1;i<=r;i++)
	{
		for(j=1;j<=i;j++)
		{
		  printf("%d ",j);
		}
		printf("\n");
	}
}

//-------------------------  Number Triangle Inverted  ------------------

void numTriIn(int r){
	int i,j;
	for (i=1;i<=r;i++)
	{
		for(j=1;j<=r+1-i;j++)
		{
		  printf("%d ",j);
		}
		printf("\n");
	}
}

//--------------------------  Odd Number Triangle ------------------------

void OddnumTri(int r){
	int i,j;
	for (i=1;i<=r;i++)
	{
		int odd = 2*i-1;
		for(j=1;j<=odd;j++)
		{
			if(j%2!=0)
		  printf("%d ",j);
		}
		printf("\n");
	}
}

//---------------------------  Alphabet And Number Triangle  --------------

void AlphnumTri(int r){
	int i,j;
	for (i=1;i<=r;i++)
	{
		for(j=1;j<=i;j++)
		{
			if (i%2!=0)
		  printf("%d ",j);
		  else
		  printf("%c ",j+64);
		}
		printf("\n");
	}
}

//----------------------------  Star Plus  ---------------------------------

void starPlus(int r){
	int i,j;
	if(r%2==0)  printf("Star Plus is not possible");
	else
	{
	  for (i=1;i<=r;i++)
	  {
		  for(j=1;j<=r;j++)
		  {
		  	  int mid = (r+1)/2;
		  	  if(i==mid) printf("* ");
		  	  else
					{
				
		  	    if(j==mid)  printf("* ");
		        else  printf("  ");
		      }
			 }
		   printf("\n");
	  }
	}
	
}

//----------------------------  Hollow rectangle  --------------------------

void HolRec(int c,int r){
	int i,j;
	for (i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			if(i==1 || j==1 || i==r || j==c )
		  printf("* ");
		  else printf("  ");
		}
		printf("\n");
	}
}

//-----------------------------  Star Cross  -------------------------------

void starCross(int r){
	int i,j;
	if(r%2==0)  printf("Star Cross is not possible");
	else
	{
	  for (i=1;i<=r;i++)
	  {
		  for(j=1;j<=r;j++)
		  {
		  	  if (j==i || j==r+1-i)printf("* ");
		  	  else
					{
				     printf("  ");
		      }
			 }
		   printf("\n");
	  }
	}
	
}

//-----------------------------  Floyd's Triangle  --------------------------

void floTri(int r){
	int i,j;
	int a=1;
	for (i=1;i<=r;i++)
	{
		for(j=1;j<=i;j++)
		{
		  printf("%d ",a);
		  a+=1;
		}
		printf("\n");
	}
}

//------------------------------  0 and 1 triangle  --------------------------

void Tri0n1(int r){
	int i,j,a;
	for (i=1;i<=r;i++)
	{
		if(i%2==0) a=0;
		else a=1;
		for(j=1;j<=i;j++)
		{
		  printf("%d ",a);
		  if(a==0) a=1;
		  else a=0;
		}
		printf("\n");
	}
}

//-----------------------------  Star Triangle Mast  -------------------------

void StarTriM(int r){
	int i,j,k;
	for (i=1;i<=r;i++){
		for (k=1;k<=r-i;k++){
			printf("  ");
		}
		for (j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
}

//-----------------------------  Star Pyramid  -------------------------------

void StarPy(int r){
	int i,j,k;
	for (i=1;i<=r;i++){
		for (k=1;k<=r-i;k++){
			printf("  ");
		}
		for (j=1;j<=2*i-1;j++){
			printf("* ");
		}
		printf("\n");
	}
}

//-----------------------------  Number Pyramid Mast  ------------------------

void numPyM(int r){
	int i,j,k,l;
	for (i=1;i<=r;i++){
		for (k=1;k<=r-i;k++){
			printf("  ");
		}
		for (j=1;j<=i;j++){
			printf("%d ",j);
		}
		for (l=1;l<=i-1;l++){
				printf("%d ",i-l);
		}
		printf("\n");
	}
}

//-----------------------------  Star Diamond  -------------------------------


	void StarDia(int r){
	int i,j,k;	
	int nsp=r/2;
	int nst=1;
	for (i=1;i<=r;i++){
	
		for (k=1;k<=nsp;k++){
			printf("  ");
		}
		for (j=1;j<=nst;j++){
			printf("* ");
		}
		printf("\n");
		if(i<(r/2)+1) {
			nsp-=1;
			nst+=2;
		}
		else{
			nsp+=1;
			nst-=2;
		}
	}
}

//-----------------------------  Star Table  ---------------------------------

void StarTable(int r){
	int f,i,j,k;
	int mid = r/2;
	for (f=1;f<=(mid*2)+1;f++){
		printf("* ");
	}
	printf("\n");
	for (i=1;i<=r;i++){
		for (j=1;j<=mid+1-i;j++){
			printf("* ");
		}
		for (k=1;k<=2*i-1;k++){
			printf("  ");
		}
		for (j=1;j<=mid+1-i;j++){
			printf("* ");
		}
		printf("\n");
	}
}

//----------------------------------------------------------------------------
int main(){
	int x,y;
	printf("Enter the number of columns:");
	scanf("%d",&x);
	printf("Enter the number of rows:");
	scanf("%d",&y);
//	starRec(x,y);
//	numRec(x,y);
//  starTri(y);
//  starTriIn(y);
//  numTri(y);
//  numTriIn(y);
//  OddnumTri(y);
//  AlphnumTri(y);
//  starPlus(y);
//  HolRec(x,y);
//  starCross(y);
//  floTri(y);
//  Tri0n1(y);
//  StarTriM(y);
//  StarPy(y);
//  numPyM(y);
//  StarDia(y);
//  StarTable(y);
	return 0;
}
