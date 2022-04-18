//#include "fstream"
//#include <iostream>
//#include <cstring>
//#include<ctime>
//#include<cstdlib>
//using namespace std;
//int up_down(char x[],char**y,int s)
//{
//	int b = 0;
//	int z = 0;
//	b = strlen(x);
//	
//		for (int j =0 ; j < b; j++)
//		{
//			y[j][0] = x[j];
//			z++;
//		}
//	
//	return z;
//}
//int down_up(char x[], char** y, int s,int w)
//{
//	int e = 0;
//	int l = 0;
//	e= strlen(x);
//	if ((w + e) < s)
//	{
//		for(int i=0, j = (w + e); j > e; j--,i++)
//		{
//			y[j][0] = x[i];
//			l++;
//		}
//	}		
//	return l;
//	
//}
//void diognal_1(char x[], char** y, int s)
//{
//	int k = strlen(x);	
//		for (int j = 0; j < s; j++)
//		{
//			if (y[j][j] == '*')
//			{
//				y[j][j] = x[j];
//			}		
//		}
//}
//void diognal_2(char x[], char** y, int s)
//{
//	int c = strlen(x);
//	for (int j = s - 1, i = 0; j > 0 && i < c; j--, i++)
//	{
//		if (y[j][i] == '*')
//		{
//			y[j][i] = x[i];
//		}
//	}
//}
//void left_right(char x[], char** y, int s)
//{
//	int n = strlen(x);
//	int cnt = 0;
//	for (int i = 0; i < s && cnt < n; i++)
//	{
//		for (int j = 0, i = 0; j < s && cnt < n; j++)
//		{
//			if (y[i][j] == '*')
//			{
//				y[i][j] = x[cnt];
//				cnt++;
//			}
//		}
//	}
//
//}
//void right_left(char x[], char** y, int s)
//{
//	int n = strlen(x);
//	int cnt = 0;
//	for (int i = 1; i < s && cnt < n; i++)
//	{
//		for (int j = s-1; j < s && cnt < n; j--)
//		{
//		   if (y[i][j] == '*')
//		   {
//						
//			    y[i][j] = x[cnt];
//				cnt++;		   
//		   }
//		}
//	}
//}
//
//int main()
//{
//	srand(time(0));
//	int cr = 0;
//	int rc = 0;
//	int  size;
//	fstream fin("file.txt");
//	char a[15];
//	int count = 0;
//	int max = 0;
//	for (int i = 0; !(fin.eof()); i++)
//	{
//		fin.getline(a, 15);
//		if (max < strlen(a))
//		{
//			max = strlen(a);
//		}
//		/*cout << a;*/
//		count++;
//	}
//	/*cout << count;
//	cout << max;*/
//	if (max > count)
//	{
//		size = max;
//	}
//	else
//	{
//		size = count;
//	}
//	char **b;
//	b = new char*[size];
//	for (int i = 0; i < size; i++)
//	{
//		b[i] = new char[size];
//	}
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			b[i][j] = '*';
//		}
//	}
//
//	fin.close();
//	fin.open("file.txt");
//	/*while (fin.getline(a, 15))*/
//	fin.getline(a, 15);
//	rc=up_down(a,b, size);
//	fin.getline(a, 15);
//	cr=down_up(a, b, size,rc);
//	fin.getline(a, 15);
//	diognal_1(a, b, size);
//	fin.getline(a, 15);
//	diognal_2(a, b, size);
//	fin.getline(a, 15);
//	left_right(a, b, size);
//	fin.getline(a, 15);
//	right_left(a, b, size);
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			if (b[i][j] == '*')
//			{
//				b[i][j] = (rand() % 26 + 97);
//			}
//		}
//	}
//	ofstream fout("output.txt");
//	for (int i = 0; i <size ; i++)
//	{
//		cout << "|";
//		for (int j = 0; j < size; j++)
//		{
//			fout << b[i][j] << "|";
//		}
//		fout << endl;
//		fout << "-----------------------------" << endl;
//	}
//	
//}
//
