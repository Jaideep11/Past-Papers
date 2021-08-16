#include <iostream> 
using namespace std;
#define MAX 1000 
class Stack {
int top;
char postfix[100];

public:
char a[MAX]; // Maximum size of Stack

Stack()
{ top = -1; } 

bool push(char x)
{
if (top >= (MAX - 1)) {
cout << "Stack Overflow"; return false;
}

else {
a[++top] = x;
cout << x << " pushed into stack\n"; return true;

}
}

char pop()
{
if (top < 0) {
cout << "Stack Underflow"; return 0;
 }
else {
char x = a[top--]; 
return x;

}
}
int peek()
{
if (top < 0) {
cout << "Stack is Empty";
return 0;
 
}
else {
int x = a[top];
return x;

}
}


int checkprecedence(char a)
{
	if(a=='+' || a=='-')
	return 1;
	else if(a=='*' || a=='/')
	return 2;
	else if  (a=='^')
	return 3;
}

void infix_to_postfix (char *infix)
{
	int i=0,j=0;
	while (infix[i]!='\0')
	{  
	if(infix[i]=='(')
	{
		push(infix[i]);
	}
	else if((infix[i]>='a' || infix[i]>='A' ) && (infix[i]<='z' ||infix[i]<='Z' ) ||infix[i]>'0')
	{
		postfix[j++]=infix[i];
	}
	
	else if(infix[i]=='+' ||infix[i]=='-' || infix[i]=='*' ||infix[i]=='/' || infix[i]=='^')
	{
		while((peek()=='+') || (peek()=='-')|| (peek()=='*')|| (peek()=='/' )||(peek()=='^'))
		{
			if(checkprecedence(peek())>checkprecedence(infix[i]))
			{
				postfix[j++]=pop();
				
			}
			break;
		}
		push(infix[i]);
	}
	else if(infix[i]==')')
	{    char ch;
		while((ch=pop())!='(')
		{
			postfix[j++]=ch;
		}
	}
		i++;
	}
	postfix[j]='\0';
	cout<<postfix<<endl;
}

};
// Driver program to test above functions 
int main()
{
class Stack s;
char infix[100];
cout<<"enter infix expression:"<<endl;
cin>>infix;
s.infix_to_postfix(infix);

return 0;
}

