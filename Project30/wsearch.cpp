#include "fstream"
#include <iostream>
#include<string>
#include <cstring>
using namespace std;
bool up_down(char x[][10], char y[], int s)
{
	int count = 1;
	int e = strlen(y);
	int  i1 = 0;
	int  j1 = 0;
	for (int i = 0; i < s; i++)
	{
		for (int j = 0; j < s; j++)
		{
			if (y[i] == x[j][i])
			{
				i1 = j;
				j1 = i;
				int m = i;
				for (int k = j; k < e - 1; k++, m++)
				{
					if (y[m + 1] == x[k + 1][i])
					{
						count++;
					}
					else
						break;
				}
			}
			if (count == e)
				break;
		}
		if (count == e)
			break;
	}
	if (count == e)
	{
		cout << "{" << "(" << i1 << "," << j1 << ")" << "," << "(" << i1 + e - 1 << "," << j1 << ")" << "}";
		return true;
	}
	else
	{
		return false;
	}

}
bool down_up(char x[][10], char y[], int s)
{
	int count = 1;
	int e = strlen(y);
	int  i1 = 0;
	int  j1 = 0;
	for (int i = 0; i < s; i++)
	{
		for (int j = s - 1; j >= 0; j--)
		{
			if (y[i] == x[j][i])
			{
				i1 = j;
				j1 = i;
				int m = i;
				for (int k = j; m < e - 1; k--, m++)
				{
					if (y[m + 1] == x[k - 1][i])
					{
						count++;
					}
					else
						break;
				}
			}
			if (count == e)
				break;
		}
		if (count == e)
			break;
	}
	if (count == e)
	{
		cout << "{" << "(" << i1 << "," << j1 << ")" << "," << "(" << i1 - e + 1 << "," << j1 << ")" << "}";
		return true;
	}
	else
	{
		return false;
	}


}

bool diognal_1(char x[][10], char y[], int s)
{
	int count = 1;
	int e = strlen(y);
	int  i1 = 0;
	int  j1 = 0;
	int i2 = 0;
	int j2 = 0;

	for (int j = s - 1, i = 0; j >= 0 && i < e; j--, i++)
	{
		if (i + j == s - 1)
		{
			if (y[i] == x[j][i])
			{
				i1 = j;
				j1 = i;
				int m = i;
				for (int k = j; m < e - 1; k--, m++)
				{
					int u = k - 1;
					if (y[m + 1] == x[u][i + 1])
					{
						i2 = u;
						j2 = m + 1;
						count++;
					}
					else
						break;
				}
			}
		}
		if (count == e)
			break;
	}
	if (count == e)
	{
		cout << "{" << "(" << i1 + e - 2 << "," << j1 - e + 2 << ")" << "," << "(" << i2 << "," << j2 << ")" << "}";
		return true;
	}
	else
	{
		return false;
	}
}
bool diognal_2(char x[][10], char y[], int s)
{
	int count = 1;
	int e = strlen(y);
	int  i1 = 0;
	int  j1 = 0;
	int i2 = 0;
	int j2 = 0;
	for (int i = 0; i < e; i++)
	{
		for (int j = 0; j < e; j++)
		{
			if (i == j)
			{
				if (y[i] == x[j][i])
				{
					i1 = j;
					j1 = i;
					int m = i;
					for (int k = j; m < e - 1; k++, m++)
					{
						int u = k + 1;
						if (y[m + 1] == x[k + 1][i + 1])
						{
							i2 = u;
							j2 = m + 1;
							count++;
						}
						else
							break;
					}
				}
			}
			if (count == e)
				break;
		}
		if (count == e)
			break;
	}
	if (count == e)
	{
		cout << "{" << "(" << i1 - e + 2 << "," << j1 - e + 2 << ")" << "," << "(" << i2 << "," << j2 << ")" << "}";
		return true;
	}
	else
	{
		return false;
	}
}
bool left_right(char x[][10], char y[], int s)
{
	int count = 1;
	int e = strlen(y);
	int  i1 = 0;
	int  j1 = 0;
	int i2 = 0;
	int j2 = 0;
	for (int i = 0; i < s; i++)
	{
		for (int j = 0; j < s; j++)
		{
			if (y[i] == x[i][j])
			{
				i1 = i;
				j1 = j;
				int m = i;
				for (int k = j; m < e - 1; k++, m++)
				{
					int u = k + 1;
					if (y[m + 1] == x[i][u])
					{
						i2 = i;
						j2 = u;
						count++;
					}
					else
						break;
				}
			}
			if (count == e)
				break;
		}
		if (count == e)
			break;
	}
	if (count == e)
	{
		cout << "{" << "(" << i1 << "," << j1 << ")" << "," << "(" << i2 << "," << j2 << ")" << "}";
		return true;
	}
	else
	{
		return false;
	}
}
bool right_left(char x[][10], char y[], int s)
{
	int count = 1;
	int e = strlen(y);
	int  i1 = 0;
	int  j1 = 0;
	int i2 = 0;
	int j2 = 0;
	for (int i = 1; i < s; i++)
	{
		for (int j = s - 1; j >= 0; j--)
		{
			if (y[i] == x[i][j])
			{
				i1 = i;
				j1 = j;
				int m = i;
				for (int k = j; m < e - 1; k--, m++)
				{
					int u = k - 1;
					if (y[m + 1] == x[i][u])
					{
						i2 = i;
						j2 = u;
						count++;
					}
					else
						break;
				}
			}
			if (count == e - 1)
				break;
		}
		if (count == e - 1)
			break;
	}
	if (count == e - 1)
	{
		cout << "{" << "(" << i1 << "," << j1 + 1 << ")" << "," << "(" << i2 << "," << j2 << ")" << "}";
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	ifstream fin;
	fin.open("easy.txt", ios::in);
	char b = ' ';
	char a[10][10] = {};
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			fin >> b;
			a[i][j] = b;
		}
	}
	char c[15];
	cout << "Enter word";
	cin.getline(c, 15);
	if (up_down(a, c, 10) || down_up(a, c, 10) || diognal_1(a, c, 10) || diognal_2(a, c, 10) || left_right(a, c, 10) || right_left(a, c, 10))
	{
	}
	system("pause");
	return 0;
}








