#include <iostream>
#include <string>
#include <cstdlib>
#include <math.h>
using namespace std;

string S="Polygons=[(1,1),(2,2),(1,3),(0,2);(0,1),(3,3),(1,6),(-2,4);(2,3),(5,3),(4,8);(7,7),(6,8),(4,11),(3,10),(2,5),(3,3),(3,3),(5,5),(5,5),(7,7);(4,5),(7,8),(6,11),(3,8);(2,6),(5,8),(5,13),(1,11);(0,6),(2,10),(2,12),(-1,13),(-2,11),(-2,7);(-5,5),(-1,5),(-1,10),(-1,10),(-5,12);(-4,4),(-1,8),(-2,10),(-4,4);(-5,3),(-3,3),(-1,3),(-3,7),(-5,6);(-2,-1),(-4,-4),(-4,-7),(-2,-9),(-2,-4),(-2,-1);(-2,-7),(-4,-10),(-1,-12);(-1,-6),(-3,-6),(-2,-9),(1,-11),(3,-6),(0,-6),(-1,-6);(1,-9),(4,-2),(7,-5),(4,-11);(5,-5),(1,-3),(4,1),(7,2),(7,-6);(-1,1),(-2,2),(3,5),(4,4)]";
	//"Polygons=[(1,1),(2,2),(1,3),(0,2);(0,1),(3,3),(1,6),(-2,4);(2,3),(5,3),(4,8);(5,5),(7,7),(7,7),(6,8),(4,11),(3,10),(2,5),(3,3),(3,3),(5,5);(4,5),(7,8),(6,11),(3,8);(2,6),(5,8),(5,13),(1,11);(0,6),(2,10),(2,12),(-1,13),(-2,11),(-2,7);(-5,5),(-1,5),(-1,10),(-1,10),(-5,12);(-4,4),(-1,8),(-2,10),(-4,4);(-5,3),(-3,3),(-1,3),(-3,7),(-5,6);(-2,-1),(-4,-4),(-4,-7),(-2,-9),(-2,-4),(-2,-1);(-2,-7),(-4,-10),(-1,-12);(-1,-6),(-3,-6),(-2,-9),(1,-11),(3,-6),(0,-6),(-1,-6);(1,-9),(4,-2),(7,-5),(4,-11);(5,-5),(1,-3),(4,1),(7,2),(7,-6);(-1,1),(-2,2),(3,5),(4,4)]" ;


//"Polygons=[(4,8),(4,3),(4,3),(10,3),(13,3),(13,8),(13,8);(-1,5),(-4,11),(2,18),(2,18),(2,18),(8,6);(17,14),(9,9),(14,5),(17,14);(-13,-1),(-6,3),(2,-11),(-5,-15),(-9,-8),(-9,-8);(7,-14),(4,-17),(4,-17),(-1,-14),(-2,-9),(3,-6),(10,-7),(6,-11);(-7,12),(-6.5,13),(3,4),(3,4),(-8,10);(19,-8),(19,-8),(16,-3),(10,-4),(7,-8),(10,-11),(13,-8),(14,-12),(19,-8),(19,-8);(7,-4),(5,-5),(3,-6),(5,-1);(3,-6),(1,-2),(-1,-4)]"
//"Polygons=[(-2,7),(1,1),(-2,1),(-5,1),(-4,3),(-4,3),(-3,5);(-5.5,5.5),(-4,7),(-3,8),(1,7.5),(-4,2.5),(-5.5,5.5);(6.5,-1.5),(9.5,-2.5),(9,-7),(5,-6.5),(5,-5),(5,-3.5);(7.5,-3.5),(12.5,-3.5),(7.5,-6);(5.5,8.5),(10,8.5),(11.5,4.5),(5.5,4.5);(4.5,-5),(6.5,-2.5),(6.5,-4),(6.5,-7),(6.5,-7),(4.5,-5);(6.5,7.5),(9.5,7.5),(9.5,7.5),(9.5,5.5),(6.5,5.5);(11,3),(12,2),(13,1),(10,1),(6,1),(8,3);(-9.5,9),(-7,6.5),(-8.5,5),(-10,3.5),(-12.5,6),(-11,7.5),(-11,7.5),(-9.5,9);(-7.5,-1.5),(-9,-5),(-8,-8.5),(-12,-7),(-10.5,-2.5),(-10.5,-2.5),(-7.5,-1.5);(-3,-2),(-6,-4),(-6,-6),(-6,-6),(-6,-8),(-4.5,-5),(-3,-5)]";
//"Polygons=(0,1),(1,0),(-1,0);(1,1),(1,-1),(-1,-1),(-1,1)" ;
//"Polygons=[(0.9881,1.0367),(0.9881,1.0367),(1.4993,2.1766),(1.8926,2.3731),(2.7224,2.7878),(3.3005,3.0767),(3.3005,2.1766),(3.3005,1.8326),(3.9572,3.0767),(4.4881,2.3731),(4.4881,1.9014),(4.4881,1.0367),(3.7999,1.0367),(2.571,1.0367),(1.6664,1.0367),(0.9881,1.0367);(4.1642,1.5428),(4.8722,1.0908),(5.6241,0.6108),(5.6241,0.6108),(6.072,2.5452),(6.072,2.5452);(-0.497,1.0367),(-3.4865,1.0367),(-3.4865,3.0267),(-0.497,3.0267);(9.0766,0.2734),(7.14,1.2805),(7.8514,2.1592),(8.6007,3.0848),(9.9955,2.6035),(10.5982,1.3002);(9.2346,2.4653),(7.5945,1.5569),(9.1457,0.6288);(8.6595,1.9043),(8.2096,3.2984),(6.9237,3.2984),(6.3061,3.2984),(5.9815,0.382),(6.9937,0.9574),(7.8156,1.4246);(7.466,1.399),(6.7348,0.382),(7.051,-0.6349),(8.79,-1.0595),(9.9559,0.0068),(8.0126,2.1592),(7.466,1.399);(6.3689,1.7587),(4.62,3.9012),(5.0943,5.9351),(7.7906,2.6319);(5.7563,4.1776),(6.7345,6.8138),(9.6196,6.8138),(11.6056,5.9943),(9.9753,5.007),(11.7341,4.6614),(11.7341,3.8518),(11.7341,3.1311),(8.9873,3.6149),(7.6908,3.8432),(6.3972,4.0711),(5.7563,4.1776);(-3.0718,1.8089),(-6.1127,-0.0698),(-1.8784,-2.2752),(0.2449,-0.9634);(1.6617,-0.9634),(3.7494,0.1366),(6.3386,-1.1724),(5.7962,-2.8189),(3.248,-3.954),(0.8941,-2.9416);(4.8342,-1.9394),(6.2977,-4.2506),(7.5258,-3.4836),(8.3813,-2.9493),(9.395,-2.3162),(4.8342,-1.9394);(6.3693,-3.3404),(3.033,-4.2813),(5.2845,-4.2813),(3.3605,-5.2323),(8.2114,-4.2199);(7.9658,-2.5837),(8.5287,-1.1724),(10.2992,-1.1724),(11.6398,-2.011);(9.0603,-0.9887),(13.5768,-3.1403),(11.6352,-7.2161),(7.1187,-5.0645);(9.9559,0.0068),(10.5982,1.3002),(12.4125,1.5898),(11.1369,-0.9792);(10.5982,1.3002),(10.0725,3.0487),(12.1191,2.7801);(10.5982,1.3002),(12.3419,0.4695),(13.8771,3.6921),(12.1334,4.5228);(13.5768,-3.1403),(12.2895,-1.6623),(15.4483,-0.6542),(17.036,-1.8276),(16.209,-3.9264);(2.971,6.1238),(2.3229,4.0151),(0.8773,4.6792),(-1.2662,3.8989),(-3.4264,4.8619),(1.841,5.3102),(0.9936,6.6385),(-0.6016,5.9744),(-1.1167,7.9669),(-3.094,6.4227),(-4.395,5.4067),(-6.3342,6.0906),(-4.44,7.1034),(-5.52,8.4816),(-2.4626,8.4816),(0.5782,7.7344),(2.3728,8.5148),(4.4997,5.2438);(-6.0245,2.1356),(-8.2909,-0.6815),(-11.7458,-0.6815),(-13.9016,1.2518),(-16.555,1.2518),(-17.7987,4.4279),(-13.6529,7.2727),(-12.2709,3.1022),(-10.8613,8.8888),(-9.9492,3.1022),(-8.2632,3.1022),(-8.5949,5.726),(-7.2682,3.9584),(-7.2682,6.9136),(-6.0245,2.1356)]" ;
//"polygons=[(2,3),(5,3),(4,8);(7,7),(6,8),(4,11),(3,10),(2,5),(3,3),(3,3),(5,5),(5,5),(7,7);(4,5),(7,8),(6,11),(3,8);(2,6),(5,8),(5,13),(1,11);(0,6),(2,10),(2,12),(-1,13),(-2,11),(-2,7);(-5,5),(-1,5),(-1,10),(-1,10),(5,12);(-4,4),(-2,8),(-2,10),(-4,4);(-5,3),(-3,3),(-1,3),(-3,7),(-5,6);(-2,-1),(-4,4),(-4,-7),(-2,-9),(-2,-4),(-2,-1);(-2,-7),(-4,-10),(-1,-12);(-1,-6),(-3,-6),(-2,-9),(1,-11),(3,-6),(0,-6),(-1,-6);(1,-9),(4,-2),(7,-5),(4,-11);(5,-5),(1,-3),(4,1),(7,2),(7,-6)]" ;

#pragma region Declarations

string Xs[200] , Ys[200] ;
float X[200] , Y[200] ;
float X_rep[200] , Y_rep[200] ;
float X_r[200] , Y_r[200] ;
string polArr[100]; // Array containing the polygons
string pointsArr[100][200]; // Array containing points
string pointsArr_red[100][200];
string fn , P; //User input
int p; //user input
int n; //User input
int a=0 , i , j , pol;
int A1[200]; //Array of index of redudnant repetetive points
int A2[200]; //Array of index of redudnant slope points
int B1[200]={0}; //Array of number of redundant repetitive points in one polygon
int B2[200]={0}; //Array of number of redundant slope points in one polygon
int rep[100][50]; //Array containg the number of repititions of each point
float XY[200][3];
#pragma endregion

#pragma region Functions prototypes
int Number_Polygons(string s);
int Total_Number_Points(string s);
int Number_Points(string s);
float Maximum_X(string s);
float Minimum_X(string s);
float Maximum_Y(string s);
float Minimum_Y(string s);
int Redundant_Points_rep(string s , int A[] , int size);
int Redundant_Points_slope(string s , int A[] , int size);
void List_Points_Polygons(string s);
float dist(float x1 , float y1 , float x2 , float y2 );
float Perimeter(string s , int n);
float area(string S , int n);
bool pnpolygon(string s , int n , float x , float y);
bool pnrect(string s , float rect[][2] , float x , float y);
bool Is_Intersecting(string s , int i , int j );

#pragma endregion

int oldmain() {
	//getline( cin , S );

#pragma region Parsing string into polygons
	if (S.find(';')==string::npos)
		{polArr[0] = S.substr(S.find('(') , S.length()-1-S.find('('));}
	else 

		{polArr[0] = S.substr(S.find('(') , S.find(';')-S.find('('));} // First polygon

	
		int d1=0 ,d2=0;
		int num_comma[10] ; // Number of commas in a polygon
		for ( int z=1 ; z < Number_Polygons(S)  ; z++ )
		{
			
			d1 =  S.find(';' , d1+1);
			
			polArr[z] = S.substr( d1+1 , S.find(';' , d1+2) - d1 -1);
			
		}
		if ( Number_Polygons(S) != 1)
			polArr[Number_Polygons(S)-1] = S.substr( S.find(';' , d1-1) +1 , S.find(']') -(S.find(';' , d1-1) +1) ) ; // Last polygon

		#pragma endregion 
#pragma region Parsing polygons into points
		
		for ( int c2=0 ; c2<Number_Polygons(S) ; c2++ ) //Polygons loop
		{
		
			pointsArr[c2][0] = polArr[c2].substr(0 , polArr[c2].find(')')+1); // First point
			if (Number_Points(polArr[c2])==1) continue;
			for (int c3=1 ; c3 < Number_Points(polArr[c2])-1 ; c3++) //Points loop
			{	
				
				d2 =  polArr[c2].find('(' , d2+1);
				
				pointsArr[c2][c3] = polArr[c2].substr( d2 , polArr[c2].find('(' , d2+1) - polArr[c2].find('(' , d2)- 1 ) ; 
			//	pointsArr[c2][c3] = polArr[c2].substr( d2 , polArr[c2].find(')' , d2+1) - d2 ) ; 
				
				//last loop in c3 fails, substring with negative length in last loop --> abort() has been called

				
			}
			pointsArr[c2][Number_Points(polArr[c2])-1] = polArr[c2] . substr( polArr[c2].find( '(', d2 +1) ); // Last point
					
		d2=0;
		}
		
	
		#pragma endregion
#pragma region Parsing points into x and y
	
		int q=0;
		for (int cp=0 ; cp < Number_Polygons(S) ; cp++)

		{	for (int c=0 ; c < Number_Points(polArr[cp]) ; c++)
			{	
				
				
				Xs[q] = pointsArr[cp][c].substr(1, pointsArr[cp][c].find(',')-1); //error in X[c]
				X[q] = atof (Xs[q].c_str()) ;

				Ys[q] = pointsArr[cp][c].substr(pointsArr[cp][c].find(',')+1 , pointsArr[cp][c].find(')')-pointsArr[cp][c].find(',')-1 );
				Y[q] = atof(Ys[q].c_str());
				q++;	
			}
		
		}
		
			
	#pragma endregion
for ( int ii=0 ; ii<200 ; ii++)
{
	A1[ii]=-1 ;
	A2[ii]=-1 ;
}

#pragma region Making an array of non-repetitive redundant points ( X_rep[] & Y_rep[] )
Redundant_Points_rep(S,A1,200);

int v=0 , gg=0 ;
for (int g=0 ; g<200 ; g++)
{
	if (g == A1[v])
	{
		v++;
		continue;
	}

	X_rep[gg] = X[g] ;
	Y_rep[gg] = Y[g] ;
	gg++;
}
 
#pragma endregion
#pragma region Making an array of number of redudnant repetetive points in each polygon ( B1[] )
int pb4=0;
int cr=0;
int u=0;
for ( int ii=0 ; ii<Number_Polygons(S) ; ii++) 
{
	pb4+= Number_Points(polArr[ii]);
	for ( int jj=0 ;  ; jj++)
	{
		//if( (jj!=0) && (A1[jj]==-1) ) break;
		if( (A1[jj]==-1) ) break;
		if ( A1[jj] >= pb4 ) break;
		else  cr++; 
	}
	if (ii==0) 
		u=u;
	else 
		u=u+B1[ii-1];
	cr=cr-u;
	B1[ii] = cr; 
	cr=0;
}
#pragma endregion
#pragma region Making an array of non redundant points ( X_r[] & Y_r[] )
Redundant_Points_slope(S,A2,200);

v=0 ; gg=0 ;
for (int g=0 ; g<200 ; g++)
{
	if (g == A2[v])
	{
		v++;
		continue;
	}

	X_r[gg] = X_rep[g] ;
	Y_r[gg] = Y_rep[g] ;
	gg++;
}

#pragma endregion
#pragma region Making an array of number of redudnant slope points in each polygon ( B2[] )
pb4=0;
cr=0;
u=0;
for ( int ii=0 ; ii<Number_Polygons(S) ; ii++) 
{
	pb4+= ( Number_Points(polArr[ii]) - B1[ii] );
	for ( int jj=0 ;  ; jj++)
	{
		if ( A2[jj]==-1 ) break;
		if ( A2[jj] >= pb4 ) break;
		else  cr++; 
	}
	if (ii==0) 
		u=u;
	else 
		u=u+B2[ii-1];
	cr=cr-u;
	B2[ii] = cr; 
	cr=0;
}
#pragma endregion

#pragma region Arranging A1 and A2 ascendingly
	
int temp;

for (int ii=0 ; ii<200 ; ii++)
	for ( int jj=i ; jj<200 ; jj++)
		if (A1[ii] > A1[jj] )
		{
			temp = A1[i] ;
			A1[ii] = A1[jj] ;
			A1[jj] = temp ;
		}
	
for (int ii=0 ; ii<200 ; ii++)
	for ( int jj=i ; jj<200 ; jj++)
		if (A2[ii] > A2[jj] )
		{
			temp = A2[i] ;
			A2[ii] = A2[jj] ;
			A2[jj] = temp ;
		}
#pragma endregion

if (Redundant_Points_rep(S,A1,200)+Redundant_Points_slope(S,A2,200)==0)

	for (int ii=0 ; ii<200 ; ii++)
	{
		B1[ii]=0 ;
		B2[ii]=0 ;
	}


#pragma region Making an array of Polygons and Points without redundant points
	int cc=0;
	for (int h=0 ; h<Number_Polygons(S) ; h++)
		for (int g=0 ; g < ( (Number_Points(polArr[h]))-(B1[h])-B2[h] ) ; g++)
		{
			XY[cc][0] = h;
			XY[cc][1] = X_r[cc];
			XY[cc][2] = Y_r[cc];
			cc++;
		}
		
	
#pragma endregion


#pragma region TEST
	while(1) {	

		cin >> fn ;

		if ( fn == "Number_Polygons")
			cout << Number_Polygons(S) << endl ;

		else if ( fn == "Total_Number_Points")
			cout << Total_Number_Points(S) << endl ;

		else if (fn == "Quit")
			goto QUIT;

		else if (fn == "Maximum_X")
			cout << Maximum_X(S) << endl ;

		else if (fn == "Minimum_X")
			cout << Minimum_X(S) << endl ;

		else if (fn == "Maximum_Y")
			cout << Maximum_Y(S) << endl ;

		else if (fn == "Minimum_Y")
			cout << Minimum_Y(S) << endl ;

		else if (fn == "Enclosing_Rectangle")
			cout <<
			"(" << Maximum_X(S) << "," << Minimum_Y(S) << ")" << ","
			"(" << Maximum_X(S) << "," << Maximum_Y(S) << ")" << ","
			"(" << Minimum_X(S) << "," << Maximum_Y(S) << ")" << ","
			"(" << Minimum_X(S) << "," << Minimum_Y(S) << ")" 
			<< endl ;

		else if (fn == "Total_Redundant_Points")
		{
			if ((Redundant_Points_rep(S,A1,200) + Redundant_Points_slope(S,A2,200))==0)
				cout << "None" << endl;
			else cout << Redundant_Points_rep(S,A1,200) + Redundant_Points_slope(S,A2,200)<< endl ;
		}

		else if (fn == "Polygon_Points")
		{	
			cin >> n ;
			//cout << polArr[n-1] << endl;

			bool flag=0;
			for (int k=0 ; ; k++)
			{
			
				if ( XY[k][0] == n-1 )
				{
					if (flag==0)
					{
						cout << "(" << XY[k][1] << "," << XY[k][2] << ")" ;
						flag=1 ;
						continue;
					}

					cout << "," << "(" << XY[k][1] << "," << XY[k][2] << ")" ;
				}
				else if (XY[k][0] > n-1) break;				
			}
			cout << endl;
	
		}
		else if (fn == "Point_Polygons")
		{
			bool is=0;
			int flag =0;
			cin >> P;
			for (int w=0 ; w<Total_Number_Points(S)-Redundant_Points_rep(S,A1,200)-Redundant_Points_slope(S,A2,200) ; w++)
			{
				if (XY[w][1] == atof(P.substr( 1 , P.find(',')-1 ).c_str()) && XY[w][2] == atof(P.substr( P.find(',')+1 , P.find(')'-P.find(',')-1 ) ).c_str()) )
					{
						if (flag==0)
						{
							cout << XY[w][0]+1 ;
							flag = 1;
							is = 1;
							continue;
						}

						else if (flag=1)
						{
							cout << "," << XY[w][0]+1 ;
							is = 1;
						}
				
					}
			}
				if (is==0) cout << "None" ;
				flag=0;
				cout << endl;
		}
		else if (fn == "List_Polygons_Points" )
		{
			int flag=0;
			cin >> P;
			if ( P == "More" )
			{
				cin >> p ;
				for (int w1=0 ; w1<Number_Polygons(S) ; w1++)
					{
						if (flag==0)
							if ( (Number_Points(polArr[w1]) - B1[w1] - B2[w1]) > p )
							{
								cout << w1+1 ;
								flag=1;
								continue;
							}
						if (flag==1)
							if ( (Number_Points(polArr[w1]) - B1[w1] - B2[w1]) > p )
								cout << "," << w1+1 ;
					}
				cout << endl;
			}

			else if (P=="Less")
			{
				cin >> p ;
				for (int w1=0 ; w1<Number_Polygons(S) ; w1++)
					{
						if (flag==0)
							if ( (Number_Points(polArr[w1]) - B1[w1] - B2[w1]) < p )
							{
								cout << w1+1 ;
								flag=1;
								continue;
							}
						if (flag==1)
							if ( (Number_Points(polArr[w1]) - B1[w1] - B2[w1]) < p )
								cout << "," << w1+1 ;
					}
				cout << endl;
			}

			else if ( P== "Equal")
			{
				cin >> p ;
				for (int w1=0 ; w1<Number_Polygons(S) ; w1++)
					{
						if (flag==0)
							if ( (Number_Points(polArr[w1]) - B1[w1] - B2[w1]) == p )
							{
								cout << w1+1 ;
								flag=1;
								continue;
							}
						if (flag==1)
							if ( (Number_Points(polArr[w1]) - B1[w1] - B2[w1]) == p )
								cout << "," << w1+1 ;	
					}
				cout << endl;
			}
			
		}
		else if ( fn == "List_Points_Polygons" )
		{
			List_Points_Polygons(S);
			string before[100];
			int count=0;
			int flag=0;
			cin >> P;
			cin >> n;
			if ( P == "More" )
			{
				for (int ii=0 ; ii<Number_Polygons(S) ; ii++)
					for ( int jj=0 ; jj<Number_Points(polArr[ii]) - B1[ii] - B2[ii] ; jj++)
					{
						if(flag==0)
							if (rep[ii][jj]>n)
							{
								for (int oo=0 ; oo<count+1 ; oo++)
									if (before[oo]==pointsArr[ii][jj])
										goto SKIP10;

								cout << pointsArr[ii][jj] ;
								before[count]=pointsArr[ii][jj] ;
								count++;
								flag=1;
								SKIP10: ;
							}

						if(flag==1)
							if (rep[ii][jj]>n)
							{
								for (int oo=0 ; oo<count+1 ; oo++)
									if (before[oo]==pointsArr[ii][jj])
										goto SKIP11;

								cout << "," << pointsArr[ii][jj] ;
								before[count]=pointsArr[ii][jj] ;
								count++;
								flag=1;
								SKIP11: ;
							}
					}

					if (count==0) cout << "None" << endl;
					else cout << endl;
			}

			if ( P == "Less" )
			{
				for (int ii=0 ; ii<Number_Polygons(S) ; ii++)
					for ( int jj=0 ; jj<Number_Points(polArr[ii]) - B1[ii] - B2[ii] ; jj++)
					{
						if(flag==0)
							if (rep[ii][jj]<n)
							{
								for (int oo=0 ; oo<count+1 ; oo++)
									if (before[oo]==pointsArr[ii][jj])
										goto SKIP20;

								cout << pointsArr[ii][jj] ;
								before[count]=pointsArr[ii][jj] ;
								count++;
								flag=1;
								SKIP20: ;
							}

						if(flag==1)
							if (rep[ii][jj]<n)
							{
								for (int oo=0 ; oo<count+1 ; oo++)
									if (before[oo]==pointsArr[ii][jj])
										goto SKIP21;

								cout << "," << pointsArr[ii][jj] ;
								before[count]=pointsArr[ii][jj] ;
								count++;
								flag=1;
								SKIP21: ;
							}
					}

					if (count==0) cout << "None" ;
					cout << endl;
			}

			if ( P == "Equal" )
			{
				for (int ii=0 ; ii<Number_Polygons(S) ; ii++)
					for ( int jj=0 ; jj<Number_Points(polArr[ii]) - B1[ii] - B2[ii] ; jj++)
					{
						if(flag==0)
							if (rep[ii][jj]==n)
							{
								for (int oo=0 ; oo<count+1 ; oo++)
									if (before[oo]==pointsArr[ii][jj])
										goto SKIP30;

								cout << pointsArr[ii][jj] ;
								before[count]=pointsArr[ii][jj] ;
								count++;
								flag=1;
								SKIP30: ;
							}

						if(flag==1)
							if (rep[ii][jj]==n)
							{
								for (int oo=0 ; oo<count+1 ; oo++)
									if (before[oo]==pointsArr[ii][jj])
										goto SKIP31;

								cout << "," << pointsArr[ii][jj] ;
								before[count]=pointsArr[ii][jj] ;
								count++;
								flag=1;
								SKIP31: ;
							}
					}

					if (count==0) cout << "None" ;
					cout << endl;
			}
		}
		else if (fn=="List_Triangles")
		{
			bool flag=0 , is=0;
			for (int ii=0 ; ii<Number_Polygons(S) ; ii++)
			{
				if ((Number_Points(polArr[ii]) - B1[ii] - B2[ii]) == 3 )
					{
						if (flag==0) 
						{
							cout << ii+1;
							flag=1;
							is=1;
							continue;
						}
						if (flag==1)
						{
							cout << "," << ii+1 ;
							is=1;
						}
					}
			}
			if (is==0) cout << "None" ;
			cout << endl;
		}
		else if (fn=="List_Rectangles")
		{
			bool flag=0 , is=0 ;
			int jj=0;
			for (int ii=0 ; ii<Number_Polygons(S) ; ii++)
			{
				if ((Number_Points(polArr[ii]) - B1[ii] - B2[ii]) == 4 )
				{
					for (int jj=0 ; jj<Total_Number_Points(S)-Redundant_Points_rep(S,A1,200)-Redundant_Points_slope(S,A2,200); jj++)
						if (XY[jj][0]==ii)
							{
								if ( (dist(XY[jj][1],XY[jj][2],XY[jj+1][1],XY[jj+1][2]) == dist(XY[jj+2][1],XY[jj+2][2],XY[jj+3][1],XY[jj+3][2])) && (dist(XY[jj][1],XY[jj][2],XY[jj+3][1],XY[jj+3][2]) == dist(XY[jj+1][1],XY[jj+1][2],XY[jj+2][1],XY[jj+2][2])) && (dist(XY[jj][1],XY[jj][2],XY[jj+2][1],XY[jj+2][2]) == dist(XY[jj+1][1],XY[jj+1][2],XY[jj+3][1],XY[jj+3][2])))
								{
									if ( flag==0 )
									{
										cout << ii+1 ;
										flag=1;
										is=1;
									}

									else if ( flag==1 )
									{
										cout << "," << ii+1 ;
										is=1;
									}
								}
								
							}
				}
			}
			if (is==0) cout << "None" ;
			cout << endl;
		}
		else if (fn=="List_Trapezoid")
		{
			bool flag=0 , is=0 ;
			int pb4=0;
			for (int ii=0 ; ii<Number_Polygons(S) ; ii++)
			{
				if ((Number_Points(polArr[ii]) - B1[ii] - B2[ii]) == 4 )
				{
					int jj = pb4 ;	
					if (XY[jj][0]==ii)
						{
							if ( ((XY[jj][2]-XY[jj+1][2]) / (XY[jj][1]-XY[jj+1][1]) == (XY[jj+3][2]-XY[jj+2][2]) / (XY[jj+3][1]-XY[jj+2][1])) != ((XY[jj][2]-XY[jj+3][2]) / (XY[jj][1]-XY[jj+3][1]) == (XY[jj+1][2]-XY[jj+2][2]) / (XY[jj+1][1]-XY[jj+2][1])) )
							{
								if (flag==0)
								{
									cout << ii+1 ;
									flag=1;
									is=1;
								}

								else if (flag==1)
								{
									cout << "," << ii+1 ;
									is=1;
								}
							}
						}
				}
				pb4 += Number_Points(polArr[ii]) - B1[ii] - B2[ii] ;
			}
			if (is==0) cout << "None";
			cout << endl;
		}
		else if ( fn == "Polygon_Perimeter" )
		{
			cin >> n ;
			cout << Perimeter(S,n) << endl;
		}
		else if ( fn =="Polygon_Area" )
		{
			cin >> n ;
			cout << area(S,n-1) << endl;
		}
		else if ( fn == "Polygons_Area_Range" )
		{
			bool flag=0 , is=0 ;
			cin >> P;
			float minArea = atof(P.substr(0,P.find(",")).c_str());
			float maxArea = atof(P.substr(P.find(",")+1).c_str());

			for ( int ii=0 ; ii<Number_Polygons(S) ; ii++)
				if (( minArea <= area(S,ii) ) && ( area(S,ii) <= maxArea ))
				{
					if ( flag==0 )	
					{
						cout << ii+1 ;
						flag=1;
						is=1;
					}

					else if ( flag==1 )
					{
						cout << "," << ii+1 ;
						is=1;
					}
				}
				
				if ( is==0 ) cout << "None" ;
				cout << endl;
		}
		else if ( fn == "Inside_Circle" )
		{
			cin >> P; //  (1,2),5

			float x = atof(P.substr(1).c_str());
			P=P.substr(P.find(",")+1) ;//  2),5

			float y = atof(P.c_str());
			P=P.substr(P.find(",")+1) ; //   ,5

			float r = atof(P.substr().c_str());
			int pb4=0;
			bool is=0;
			bool flag=0;
			for (int ii=0 ; ii<Number_Polygons(S) ; ii++)
			{
				bool inside=1;
				for (int jj=pb4 ; jj<pb4+Number_Points(polArr[ii])-B1[ii]-B2[ii] ; jj++)
				{
					if (!( dist(x,y,XY[jj][1],XY[jj][2]) < r ))
					{
						inside = 0;
						break;
					}
				}
				if (inside==1)
				{
					if (flag==0)
					{
						cout << ii+1  ;
						is = 1;
						flag=1;
					}
					else if (flag==1)
					{
						cout << "," << ii+1 ;
						is=1;
					}
				}
				pb4 += Number_Points(polArr[ii])-B1[ii]-B2[ii];

			}
			if (is==0)
				cout << "None" ;
			cout << endl;
		}
		else if ( fn == "Polygons_Enclosing_Point" )
		{
			cin >> P ;
			float x = atof(P.substr(1).c_str());
			float y = atof(P.substr(P.find(",")+1).c_str());

			bool is=0;
			bool flag=0;
			for (int ii=0 ; ii<Number_Polygons(S) ; ii++)
			{
				if ( pnpolygon( S , ii , x , y ) == 1 )
				{
					if (flag==0)
					{
						cout << ii+1 ;
						is=1;
						flag=1;
					}

					else if (flag==1)
					{
						cout << "," << ii+1 ;
						is=1;
					}
				}
			}
			if (is==0)
				cout << "None" ;
			cout << endl;
		}
		else if ( fn == "Inside_Rectangle" )
		{
			cin >> P ;
			float rect[4][2];
			for (int r=0 ; r<4 ; r++)
			{
				rect[r][0] = atof(P.substr(1).c_str());
				P=P.substr(P.find(",")+1);

				rect[r][1] = atof(P.c_str());
				P=P.substr(P.find(",")+1);
			}

			int pb4=0;
			bool is=0;
			bool flag=0;
			for (int ii=0 ; ii<Number_Polygons(S) ; ii++)
			{
				bool inside = 1;
				for (int jj=pb4 ; jj<pb4+Number_Points(polArr[ii])-B1[ii]-B2[ii] ; jj++)
				{
					if ( pnrect( S , rect , XY[jj][1] , XY[jj][2] ) == 0 )
					{
						inside = 0;
						break;
					}
				}
				if (inside==1)
				{
					if (flag==0)
					{
						cout << ii+1 ;
						is=1;
						flag=1;
					}

					else if (flag==1)
					{
						cout << "," << ii+1 ;
						is=1;
					}
				}
				pb4 += Number_Points(polArr[ii])-B1[ii]-B2[ii];

			}
			if (is==0)
				cout << "None" ; 
			cout << endl;
		}
		else if ( fn == "Is_Intersecting" )
		{
			cin >> P;
			int i = atof(P.c_str())-1;
			int j = atof(P.substr(P.find(",")+1) .c_str())-1;
		
			if ( Is_Intersecting(S,i,j)==1)
				cout << "TRUE" << endl;
			else if ( Is_Intersecting(S,i,j)==0)
				cout << "FALSE" << endl;
		}
		else if ( fn == "Intersecting_Group" )
		{
			bool is=1;
			cin >> P ;
			int u=0;
			for ( int ii=0  ; ii<P.length() ; ii++)
			{
				if (P[ii] == ',')
					u++;
			}

			int *p ;
			p = new int[u+1] ;
			for ( int ii=0 ; ii<u+1 ; ii++)
			{
				p[ii] = atof(P.c_str())-1;
				P=P.substr(P.find(",")+1) ;
			}
			
			for ( int ii=0 ; ii<u+1 ; ii++)
				for (int jj=ii+1 ; jj<u+1 ; jj++)
				{
					if ( Is_Intersecting(S,p[ii],p[jj]) == 0 )
					{
						is=0;
					}
				}

			if ( is==1)
				cout << "TRUE" << endl;
			else if ( is==0 )
				cout << "FALSE" << endl;

		}
		else if ( fn == "Largest_Intersecting_Pair" )
		{
			float maxArea=0;
			for ( int ii=0 ; ii<Number_Polygons(S) ; ii++)
				for ( int jj=ii+1 ; jj<Number_Polygons(S) ; jj++)
				
					if (Is_Intersecting(S,ii,jj)==1)
					{
						if ( maxArea < area(S,ii)+area(S,jj) )
							maxArea = area(S,ii)+area(S,jj);
					}
				

			for ( int ii=0 ; ii<Number_Polygons(S) ; ii++)
				for ( int jj=ii+1 ; jj<Number_Polygons(S) ; jj++)
					if ( maxArea == area(S,ii)+area(S,jj) )
						cout << ii+1 << "," << jj+1 ;
		}
	}
#pragma endregion


int dummy;	cin >> dummy;
QUIT:return 0;
}


#pragma region Functions

int Number_Polygons(string s) {
	a=0;
	for ( i=0 ; i < S.length() ; i++ )
	{
		if (S[i]==';')
			a++;
	}

	int c=0;
	int *n ;
	n = new int[a+1] ; //Number of polygons


	for ( j=0 ; j < S.length() ; j++)
	{	
		if (S[j]==';')
		{
			n[c] = S.find(';',j);
			c++	;
		}
	}
	c++;
	return c;
}
int Total_Number_Points(string s) {
	
	// Number of points = (Number of Commas + Number of Polygons) / 2
	for ( i=0 ; i < s.length() ; i++ )
		if (S[i]==',')
			a++;

	int c=0;
	int *n ;
	n = new int[a] ;  //Number of Commas


	for ( j=0 ; j < s.length() ; j++)
	{	if (s[j]==',')
	{
		n[c] = s.find(',',j);
		c++	;
	}
	}
	int p=(c + Number_Polygons(s))/2 ;
	return p;
}
int Number_Points(string s) {
	
	// Number of points = (Number of Commas + 1) / 2
	for ( i=0 ; i < s.length() ; i++ )
		if (S[i]==',')
			a++;

	int c=0;
	int *n ;
	n = new int[a] ;  //Number of Commas


	for ( j=0 ; j < s.length() ; j++)
	{	if (s[j]==',')
	{
		n[c] = s.find(',',j);
		c++	;
	}
	}
	int p=(c + 1)/2 ;
	return p;
}
float Maximum_X(string s)
{
	float MaxX=X[0];
	for (int c=1 ; c < Total_Number_Points(s) ; c++)
		if(X[c] > MaxX)
			MaxX = X[c] ;
	
return MaxX;
}
float Minimum_X(string s)
{
	float MinX=X[0];
	for (int c=1 ; c < Total_Number_Points(s) ; c++)
		if(X[c] < MinX)
			MinX = X[c] ;
	
return MinX;
}
float Maximum_Y(string s)
{
	float MaxY=Y[0];
	for (int c=1 ; c < Total_Number_Points(s) ; c++)
		if(Y[c] > MaxY)
			MaxY = Y[c] ;
	
return MaxY;
}
float Minimum_Y(string s)
{
	float MinY=Y[0];
	for (int c=1 ; c < Total_Number_Points(s) ; c++)
		if(Y[c] < MinY)
			MinY = Y[c] ;
	
return MinY;
}
int Redundant_Points_rep(string s , int A[] , int size)
{
	int a=0;
	int b=0 ;
	int B=0;
	int t=0;
	int w=0 ;
			for ( b=0 ; b<Total_Number_Points(s)-1 ; b++)
			{
				if ( B == Number_Points(polArr[w])-1 )
				{
					if (((X[b] == X[b-Number_Points(polArr[w])+1] ) && (Y[b] == Y[b-Number_Points(polArr[w])+1] )) )
					{
						a++;
						A[t]=b;
						t++;
					}
					w++ ;
					B=0 ;
					continue;
				}

				if (((X[b] == X[b+1] ) && (Y[b] == Y[b+1])) )
				{	
					a++;
					A[t]=b;
					t++;
				}

			B++;
			}
return a;

}
int Redundant_Points_slope(string s , int A[] , int size)
{
	int a=0;
	int c=0 ;
	int C=0;
	int t=0;
	int w=0 ;
	
	for ( c=2 ; c<Total_Number_Points(S)-1 ; c++)
			{
				if (C == Number_Points(polArr[w])-B1[w]-2)
				{
					//last point = c-1
					//first point = c-C-2

					if ((( (Y_rep[c-C-1]-Y_rep[c-C-2])/(X_rep[c-C-1]-X_rep[c-C-2]) ) == ( (Y_rep[c-C-2]-Y_rep[c-1])/(X_rep[c-C-2]-X_rep[c-1]) )))
					{
						//first 2 last 1
						a++;
						A[t]=c-C-2;
						t++;
						//cout << c-C-2 << " Redundant slope special case 2" << endl;
					}

					if (( Y_rep[c-C-2]-Y_rep[c-1]) / (X_rep[c-C-2]-X_rep[c-1]) == ( Y_rep[c-1]-Y_rep[c-2]) / (X_rep[c-1]-X_rep[c-2]) )
					{
						//first 1 last 2
						a++;
						A[t]=c-1;
						t++;
						//cout << c-1 <<"("<<X_rep[c-1]<<","<<Y_rep[c-1]<<")" <<" Redundant slope special case 1" << endl;
					}					
					w++;
					C=0;
					c++;
					continue;
				}

				/*if ( X_rep[c] == X_rep[c-1] == X_rep[c-2] )
				{
					a++;
					A[t]=c-1;
					t++;
				}*/

				if ((( (Y_rep[c]-Y_rep[c-1])/(X_rep[c]-X_rep[c-1]) ) == ( (Y_rep[c-1]-Y_rep[c-2])/(X_rep[c-1]-X_rep[c-2]) )))
				{
					a++;
					A[t]=c-1;
					t++;
				}
			C++;
		}

return a;
}
void List_Points_Polygons(string s)
{
	int counter=0;
	for (int i1=0 ; i1<Number_Polygons(s) ; i1++)
		for (int i2=0 ; i2 < Number_Points(polArr[i1]) ; i2++)
		{
			for (int j1=0 ; j1 < Number_Polygons(s) ; j1++)
				for (int j2=0 ; j2 < Number_Points(polArr[j1]) ; j2++)
					if ( pointsArr[i1][i2]==pointsArr[j1][j2] ) 
					{
						counter++;
						break;
					}
			rep[i1][i2]=counter;
			counter=0;
		}
}
float dist(float x1 , float y1 , float x2 , float y2 )
{
	return sqrt (pow((x1-x2),2) + pow((y1-y2),2)) ;
}
float Perimeter(string s , int n)
{
	float perimeter=0;
	n=n-1;
	for (int jj=0 ; jj<Total_Number_Points(s)-Redundant_Points_rep(s,A1,20)-Redundant_Points_slope(s,A2,20) ; jj++)
	{
		if(XY[jj][0]==n)

			for (int ii=0 ; ii < Number_Points(polArr[n])-B1[n]-B2[n] ; ii++)
			{
				if (ii==Number_Points(polArr[n])-B1[n]-B2[n]-1) 
				{
					perimeter += dist( XY[jj+ii][1] , XY[jj+ii][2] , XY[jj][1] , XY[jj][2] );
					break;
				}
				perimeter += dist( XY[jj+ii][1] , XY[jj+ii][2] , XY[jj+ii+1][1] , XY[jj+ii+1][2] );
			}
		if (perimeter > 0 ) break;
	}
	return perimeter;
}
float area(string S , int n)
{
	float area=0;
	for (int jj=0 ; jj<Total_Number_Points(S)-Redundant_Points_rep(S,A1,20)-Redundant_Points_slope(S,A2,20) ; jj++)
		if (XY[jj][0] == n )
			for (int ii=0 ; ii<Number_Points(polArr[n])-B1[n]-B2[n] ; ii++)
			{
				if (ii==Number_Points(polArr[n])-B1[n]-B2[n]-1)
				{
					area += XY[jj+ii][1]*XY[jj][2] - XY[jj][1]*XY[jj+ii][2] ;
					return fabs(area/2);
				}
				area += ( XY[jj+ii][1]*XY[jj+ii+1][2] - XY[jj+ii+1][1]*XY[jj+ii][2] );
			}
}
bool pnpolygon(string s , int n , float x , float y) //ray casting
{
	bool in=0;
	int i,j;
	for (int ii=0 ; ii<Total_Number_Points(s)-Redundant_Points_rep(s,A1,200)-Redundant_Points_slope(s,A2,200) ; ii++)
	{
		if ( XY[ii][0] == n )
		{
			for (i=ii , j=ii+Number_Points(polArr[n])-B1[n]-B2[n]-1 ; i < ii+Number_Points(polArr[n])-B1[n]-B2[n] ; j=i++)
			{
				if ( ( x == XY[i][1] ) && (y == XY[i][2] ) )
					return 1 ;
				
				if ( ( XY[i][2] > y ) != ( XY[j][2] > y ) ) 
				{
					if ((x < ( (XY[j][1]-XY[i][1]) * (y-XY[i][2]) / (XY[j][2]-XY[i][2]) + XY[i][1]) ))
						in = !in ;

					else if (x == ( (XY[j][1]-XY[i][1]) * (y-XY[i][2]) / (XY[j][2]-XY[i][2]) + XY[i][1]) )
						return 1;
				}

				else if ( ( XY[i][2] == y ) && ( XY[j][2] == y ) )
					if ( ( XY[i][1] > x ) != ( XY[j][1] > x ) )
						return 1 ;
			}
			break;
		}
	}
return in;
}
bool pnrect(string s , float rect[][2] , float x , float y)
{
bool in=0;
	
for (i=0 , j=3 ; i < 4 ; j=i++)
{
	if (( x == rect[i][0] ) && (y == rect[i][1])) 
		return 1;

	if ( ( rect[i][1] > y ) != ( rect[j][1] > y ) )
	{
		if (x < (rect[j][0]-rect[i][0]) * (y-rect[i][1]) / (rect[j][1]-rect[i][1]) + rect[i][0]) 
				in = !in ;

		else if ( x == (rect[j][0]-rect[i][0]) * (y-rect[i][1]) / (rect[j][1]-rect[i][1]) + rect[i][0] )
			return 1;
	}

	else if ( ( rect[i][1] == y ) && ( rect[j][1] == y ) )
					if ( ( rect[i][0] > x ) != ( rect[j][0] > x ) )
						return 1 ;
}
return in;
}
bool Is_Intersecting(string s , int i , int j )
{
	for ( int jj=0 ; jj<Total_Number_Points(S)-Redundant_Points_rep(S,A1,200)-Redundant_Points_slope(S,A2,200) ; jj++)
			{
				if ( XY[jj][0] == i )
				{
					for ( int ii=jj ; ii<jj+Number_Points(polArr[i])-B1[i]-B2[i] ; ii++)
					{
						if ( pnpolygon(S,j,XY[ii][1],XY[ii][2])==1 )
							return 1;
						
						if (ii == jj+Number_Points(polArr[i])-B1[i]-B2[i]-1)
							return 0;
					}
				}

				else if ( XY[jj][0] == j )
				{
					for ( int ii=jj ; ii<jj+Number_Points(polArr[j])-B1[j]-B2[j] ; ii++)
					{
						if ( pnpolygon(S,i,XY[ii][1],XY[ii][2])==1 )
							return 1;

						if (ii == jj+Number_Points(polArr[j])-B1[j]-B2[j]-1)
							return 0;
					}
				}
			}

	for ( int jj=0 ; jj<Total_Number_Points(S)-Redundant_Points_rep(S,A1,200)-Redundant_Points_slope(S,A2,200) ; jj++)
	{
		if ( XY[jj][0] == i )
		{
			for ( int ii=jj , ll=jj+Number_Points(polArr[i])-B1[i]-B2[i]-1 ; ii<jj+Number_Points(polArr[i])-B1[i]-B2[i] ; ll=ii++)
			{
				for ( int kk=0 ; kk<Total_Number_Points(S)-Redundant_Points_rep(S,A1,200)-Redundant_Points_slope(S,A2,200) ; kk++) 
				{
					if ( XY[kk][0] == j )
					{
						for ( int oo=kk , pp=kk+Number_Points(polArr[j])-B1[j]-B2[j]-1 ; oo<kk+Number_Points(polArr[j])-B1[j]-B2[j] ; pp=oo++)
						{
							if ( ( XY[ii][1] == ( (XY[pp][1]-XY[oo][1]) * (XY[ii][2]-XY[oo][2]) / (XY[pp][2]-XY[oo][2]) + XY[oo][1]) ) && ( XY[ll][1] == ( (XY[pp][1]-XY[oo][1]) * (XY[ll][2]-XY[oo][2]) / (XY[pp][2]-XY[oo][2]) + XY[oo][1]) ) )
								return 1;
						}
					}
				}
			}
		}
	}
}
#pragma endregion