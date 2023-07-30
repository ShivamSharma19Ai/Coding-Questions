#include<iostream>
using namespace std;
int CheckPassword(char str[], int n)
{
	bool isDigit=false,isCap=false,isSlashSpace=false,isNumStart=false,isLen=false;
	isLen = n>=4;
	isNumStart = (str[0]>='0' && str[0]<='9');
	
	for(int i=1;i<n;i++)
	{
		if(str[i]==' '|| str[i]=='/')
			isSlashSpace=true;
		else if(str[i]>='A'&&str[i]<='Z')
			isCap=true;
		else if(str[i]>='0' && str[i]<='9')
			isDigit=true;
	}
	if(!isNumStart && isDigit && isCap && !isSlashSpace && isLen)
		return 1;
	else
		return 0;
}
int main()
{
	char str[100];
	scanf("%[^\n]s",str);
	int len=0;
	for(len=0;str[len]!='\0';len++);
	cout<<CheckPassword(str,len);
}