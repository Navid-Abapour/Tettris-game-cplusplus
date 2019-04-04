/*
Project name: Tettris game
Master: Mr.Mirizadeh
Produced by: Navid Ebapour
*/


//part1:


#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
int find_min(int ,int ,int k=20);
int main()
{	
	system("color E5");
	cout<<"                      ((  W";
	Sleep(100);
	cout<<"e";
	Sleep(100);
	cout<<"l";
	Sleep(100);
	cout<<"c";
	Sleep(100);
	cout<<"o";
	Sleep(100);
	cout<<"m";
	Sleep(100);
	cout<<"e";
	system("color A4");
	
	Sleep(100);
	cout<<" t";
	Sleep(100);
	cout<<"o";
	
	system("color E5");
	Sleep(100);
	cout<<" t";
	Sleep(100);
	cout<<"h";
	Sleep(100);
	cout<<"e";
	
	
	Sleep(100);
	cout<<" T";
	Sleep(100);
	cout<<"e";
	Sleep(100);
	cout<<"t";
	Sleep(100);
	cout<<"t";
	Sleep(100);
	cout<<"r";
	Sleep(100);
	cout<<"i";
	Sleep(100);
	cout<<"s";
	system("color A4");
	
	Sleep(100);
	cout<<" g";
	Sleep(100);
	cout<<"a";
	Sleep(100);
	cout<<"m";
	Sleep(100);
	cout<<"e  ))"<<endl;
	
	
	cout<<"               ::   T";
	Sleep(100);
	cout<<"h";
	Sleep(100);
	cout<<"i";
	Sleep(100);
	cout<<"s";
	system("color E5");
	
	Sleep(100);
	cout<<" P";
	Sleep(100);
	cout<<"r";
	Sleep(100);
	cout<<"o";
	Sleep(100);
	cout<<"j";
	Sleep(100);
	cout<<"e";
	Sleep(100);
	cout<<"c";
	Sleep(100);
	cout<<"t";
	
	
	cout<<" i";
	Sleep(100);
	cout<<"s";
	system("color A4");
	
	Sleep(100);
	cout<<" m";
	Sleep(100);
	cout<<"a";
	Sleep(100);
	cout<<"d";
	Sleep(100);
	cout<<"e";
	
	
	Sleep(100);
	cout<<" b";
	Sleep(100);
	cout<<"y";
	system("color E5");
	
	Sleep(100);
	cout<<" N";
	Sleep(100);
	cout<<"a";
	Sleep(100);
	cout<<"v";
	Sleep(100);
	cout<<"i";
	Sleep(100);
	cout<<"d";
	
	system("color A4");
	Sleep(100);
	cout<<" E";
	Sleep(100);
	cout<<"b";
	Sleep(100);
	cout<<"a";
	Sleep(100);
	cout<<"p";
	Sleep(100);
	cout<<"o";
	Sleep(100);
	cout<<"u";
	Sleep(100);
	cout<<"r  ::"<<endl;
	system("color E5");
	
		cout<<"               ::   S";
	Sleep(100);
	cout<<"p";
	Sleep(100);
	cout<<"e";
	Sleep(100);
	cout<<"c";
	Sleep(100);
	cout<<"i";
	Sleep(100);
	cout<<"a";
	Sleep(100);
	cout<<"l";
	system("color A4");
	
	Sleep(100);
	cout<<" T";
	Sleep(100);
	cout<<"h";
	Sleep(100);
	cout<<"a";
	Sleep(100);
	cout<<"n";
	Sleep(100);
	cout<<"k";
	Sleep(100);
	cout<<"s";
	
	Sleep(100);
	cout<<" f";
	Sleep(100);
	cout<<"r";
	Sleep(100);
	cout<<"o";
	Sleep(100);
	cout<<"m";
	system("color E5");
	
	Sleep(100);
	cout<<" d";
	Sleep(100);
	cout<<"e";
	Sleep(100);
	cout<<"a";
	Sleep(100);
	cout<<"r";
	
	system("color A4");
	Sleep(100);
	cout<<" Mr.";
	Sleep(100);
	cout<<"M";
	Sleep(100);
	cout<<"i";
	Sleep(100);
	cout<<"r";
	Sleep(100);
	cout<<"i";
	Sleep(100);
	cout<<"z";
	Sleep(100);
	cout<<"a";
	Sleep(100);
	cout<<"d";
	Sleep(100);
	cout<<"e";
	Sleep(100);
	cout<<"h  ::"<<endl<<endl;
	system("color 0F");

	//part3:
	int i,j,c,n,s,point_min,main;
	bool bo1=false, bo2=false, bo3=false, bo0=false;
	int total_shape[6]={9,9,9,9,9,9};
	char ch1;
	char arr1[9][6];
	
	//part4:
	cout<<"Please enter (s) for starting the game and (e) to exit from the game :";
	while(bo1=true)
	{	
	cin>>ch1;
	if(ch1=='s') {bo1=true; break;}
	else if(ch1=='e')
	{	
	cout<<endl<<endl<<"            :::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
	cout<<"            Thank you for playing this game; have a good time !"<<endl;
	cout<<"            :::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl<<endl;
	return 0;
	}
	else cout<<"Sorry sir; you can only enter (s) or (e) to continue: ";
	}
	
	
	
	//part5:
	arr1[0][0]='.';
	arr1[0][1]='.';
	arr1[0][2]='.';
	arr1[0][3]='.';
	arr1[0][4]='.';
	arr1[0][5]='.';
	arr1[0][6]='.';
	
	arr1[1][0]='.';
	arr1[1][1]='.';
	arr1[1][2]='.';
	arr1[1][3]='.';
	arr1[1][4]='.';
	arr1[1][5]='.';
	arr1[1][6]='.';
	
	arr1[2][0]='.';
	arr1[2][1]='.';
	arr1[2][2]='.';
	arr1[2][3]='.';
	arr1[2][4]='.';
	arr1[2][5]='.';
	arr1[2][6]='.';
	
	arr1[3][0]='.';
	arr1[3][1]='.';
	arr1[3][2]='.';
	arr1[3][3]='.';
	arr1[3][4]='.';
	arr1[3][5]='.';
	arr1[3][6]='.';
	
	arr1[4][0]='.';
	arr1[4][1]='.';
	arr1[4][2]='.';
	arr1[4][3]='.';
	arr1[4][4]='.';
	arr1[4][5]='.';
	arr1[4][6]='.';
	
	arr1[5][0]='.';
	arr1[5][1]='.';
	arr1[5][2]='.';
	arr1[5][3]='.';
	arr1[5][4]='.';
	arr1[5][5]='.';
	arr1[5][6]='.';
	
	arr1[6][0]='.';
	arr1[6][1]='.';
	arr1[6][2]='.';
	arr1[6][3]='.';
	arr1[6][4]='.';
	arr1[6][5]='.';
	arr1[6][6]='.';
	
	arr1[7][0]='.';
	arr1[7][1]='.';
	arr1[7][2]='.';
	arr1[7][3]='.';
	arr1[7][4]='.';
	arr1[7][5]='.';
	arr1[7][6]='.';
	
	arr1[8][0]='.';
	arr1[8][1]='.';
	arr1[8][2]='.';
	arr1[8][3]='.';
	arr1[8][4]='.';
	arr1[8][5]='.';
	arr1[8][6]='.';
	
	
	//part6:
	cout<<endl<<"Here it is the game's map; let's get in :)"<<endl;
	cout<<"------------------------------------------"<<endl<<endl;
	cout<<" "<<1<<" "<<2<<" "<<3<<" "<<4<<" "<<5<<" "<<6<<endl;
	cout<<1;
	for(j=0; j<6; j++) {cout<<arr1[i][j]<<" ";}
	cout<<endl<<2;
	for(j=0; j<6; j++) {cout<<arr1[i][j]<<" ";}
	cout<<endl<<3;
	for(j=0; j<6; j++) {cout<<arr1[i][j]<<" ";}
	cout<<endl<<4;
	for(j=0; j<6; j++) {cout<<arr1[i][j]<<" ";}
	cout<<endl<<5;
	for(j=0; j<6; j++) {cout<<arr1[i][j]<<" ";}
	cout<<endl<<6;
	for(j=0; j<6; j++) {cout<<arr1[i][j]<<" ";}
	cout<<endl<<7;
	for(j=0; j<6; j++) {cout<<arr1[i][j]<<" ";}
	cout<<endl<<8;
	for(j=0; j<6; j++) {cout<<arr1[i][j]<<" ";}
	cout<<endl<<endl;
	
	
	//part7:
	do{
	cout<<"From 1 to 4, enter the column number which you want to import the shape:";
	while(bo2=true)
	{
	cin>>c;
	
	if(c<=4 && c>0)
	{	
	cout<<endl<<"           "<<"           "<<"               "<<"*"<<endl;
	cout<<"           "<<"           "<<"               "<<"*"<<"   "<<"  1"<<endl;
	cout<<"           "<<"           "<<"               "<<"*";
	
	cout<<endl<<endl<<"           "<<"           "<<"               ""*"<<endl;
	cout<<"           "<<"           "<<"               "<<"**"<<"   "<<" 2"<<endl;
	
	cout<<endl<<endl<<"           "<<"           "<<"               ""***"<<"   "<<"3";
	
	cout<<endl<<endl<<"           "<<"           "<<"               "" *"<<endl;
	cout<<"           "<<"           "<<"               "<<"***"<<"   "<<"4"<<endl<<endl;
	bo2=false;break;
	}
	else if(c>4 or c<1) {cout<<endl<<endl<<"Sorry sir; you should select from on of the 1 to 4 numbers:";}
	}
	
	
	//part8:
	cout<<"Please choose one of the shapes that you want to import:";
	while(bo3=true)
	{
	cin>>s;
	if(s<=4 && s>0) {bo3=true;break;}
	else {cout<<endl<<endl<<"Sorry sir; you should select from on of the 1 to 4 numbers:";}
	}
	
		if (bo3=true) {cout<<endl<<endl;}
		
		

  	//part9:
if(s==1)
{
	
	cout<<endl<<"The game that you have done, exists below:"<<endl;
	cout<<"------------------------------------------"<<endl<<endl;
	    main=total_shape[c-1];
        arr1[main-1][c-1]='*';
        arr1[main-2][c-1]='*';
        arr1[main-3][c-1]='*';
   		for(int i=1;i<7;i++) cout<<" "<<i;cout<<endl;
   		for(int i=1;i<9;i++){cout<<i;for(int j=0;j<6;j++){cout<<arr1[i][j]<<" ";}cout<<endl;};
   		cout<<endl;
   		cout<<endl;
        for(int i=0;i<6;i++){for(int j=1;j<9;j++){if(arr1[j][i]=='*'){total_shape[i]=j;break;} } };
        
}

else if(s==2)
{
	
	   cout<<endl<<"The game that you have done, exists below:"<<endl;
	   cout<<"------------------------------------------"<<endl<<endl;
	   point_min=find_min(total_shape[c-1],total_shape[c]);;
       arr1[point_min-1][c-1]='*';
       arr1[point_min-1][c]='*';
       arr1[point_min-2][c-1]='*';
   	   for(int i=1;i<7;i++) cout<<" "<<i;cout<<endl;
       for(int i=1;i<9;i++){cout<<i;for(int j=0;j<6;j++){cout<<arr1[i][j]<<" ";}cout<<endl;};
       for(int i=0;i<6;i++){for(int j=1;j<9;j++){if(arr1[j][i]=='*'){total_shape[i]=j;break;}}};
       
}


else if(s==3)
{
	
	    cout<<endl<<"The game that you have done, exists below:"<<endl;
		cout<<"------------------------------------------"<<endl<<endl;
		point_min=find_min(total_shape[c-1],total_shape[c],total_shape[c+1]);
       	arr1[point_min-1][c-1]='*';
       	arr1[point_min-1][c]='*';
       	arr1[point_min-1][c+1]='*';
   		for(int i=1;i<7;i++) cout<<" "<<i;cout<<endl;
   		for(int i=1;i<9;i++){cout<<i;for(int j=0;j<6;j++){cout<<arr1[i][j]<<" ";}cout<<endl;};
   		for(int i=0;i < 6;i++){for(int j=1;j<9;j++){if(arr1[j][i]=='*'){total_shape[i]=j;break;}}};
   		
}


else if(s==4)
{
	
	    cout<<endl<<"The game that you have done, exists below:"<<endl;
	   	cout<<"------------------------------------------"<<endl<<endl;
	   	point_min=find_min(total_shape[c-1],total_shape[c],total_shape[c+1]);
       	arr1[point_min-1][c-1]='*';
       	arr1[point_min-1][c]='*';
       	arr1[point_min-1][c+1]='*';
       	arr1[point_min-2][c]='*';
   		for(int i=1;i<7;i++) cout<<" "<<i;cout<<endl;
   		for(int i=1;i<9;i++){cout<<i;for(int j=0;j<6;j++){cout<<arr1[i][j]<<" ";}cout<<endl;};
       	for(int i=0;i<6;i++){for(int j=1;j<9;j++){if(arr1[j][i]=='*'){total_shape[i]=j;break;}}};
       	
}
  
  
	}while(arr1[0][0]!='*' && arr1[0][1]!='*' && arr1[0][2]!='*' && arr1[0][3]!='*' && arr1[0][4]!='*' && arr1[0][5]!='*');
	
	
	
	//part10:
	cout<<endl<<"Oos! seems like the game is over!";
	system("color E5");
	Sleep(100);
	system("color A4");
	Sleep(100);
	system("color E5");
	Sleep(100);
	system("color A4");
	Sleep(100);
	system("color E5");
	Sleep(100);
	system("color A4");
	cout<<endl<<endl<<"            :::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
	cout<<"            Thank you for playing this game; have a good time !"<<endl;
	cout<<"            :::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl<<endl;
	cout<<"               ! Please press any key to exit from the game !"<<endl;
	getch();
}

	//part11:
int find_min(int i,int j,int k)
{
    int min_number;
      if(i<=j && i<=k)min_number=i;
      else if(j<=k && j<=i)min_number=j;
      else min_number=k;
     return min_number;
}
