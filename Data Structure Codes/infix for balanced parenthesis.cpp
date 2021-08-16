#include<iostream>
using namespace std;
class Fun {
	public:
		char data;
		Fun* next;
		Fun* head, * tp1;
		char c;
		int original;
	public:
		static int x, k;
		static int l;
		static Fun* temp;
		void Pushing(char* p) {
			if (k == 0) {
				head = new Fun;
				head->data = (*p);
			} else {
				tp1 = new Fun;
				tp1->data = (*p);
			}
			if (k != 0) {
			tp1->next = head;
				head = tp1;
			} else
				head->next = 0;
			temp = head;
			l++;
			k++;
		}
		char  Popping() {

			c = head->data;
			head = head->next;
			temp = head;
			l--;
			if (l == 0) {
				head = 0;
				temp = 0;
				k = 0;
				x = 0;
			}
			return c;
		}
};
int Fun::x = 0;
int Fun::k = 0;
int Fun::l = 0;
Fun* Fun::temp = 0;
int main() {
	int i,j = 0,pts=0,a,sum,original;
	Fun s1;
	static int b = 0, d = 0, f = 0, g = 0, h = 0, n = 0;
	string exp, copy;
	cout << "Enter any infix expression : " << endl;
	cin >> exp;

	char* s = &exp[0];
	char* t = s;
	for (i = 0; (*s) != '\0'; i++) {
		j++;
		s++;
	s = t;
	char* p = &copy[0];
	static int z=0;

	for (i = 0; i < j; i++) {
		if(s[i]=='(')
			b++;
		if(s[i]=='[')
			f++;
		if(s[i]=='{')
			h++;
		if(s[i]==')'||s[i]==']'||s[i]=='}') {

			if(s[i]==')')
				d++;
			else if(s[i]==']')
				g++;
			else if(s[i]=='}')
				n++;
		}
		p[sum]=s[i];
		sum++;
		char check;
		if (s[i] == '('||s[i]=='{'||s[i]=='[') {
			s1.Pushing(&s[i]);
		}
		else if(s[i]==')'||s[i]==']'||s[i]=='}') {
			if(s1.temp==0) {
				z=0;
				continue;
			}
			check=s1.Popping();
			if(check=='(')
				check=')';
			else if(check=='[')
				check=']';
			else if(check=='{')
				check='}';
			if(s[i]==check)
				z++;
		}
	}
	if (z==b+h+f) {
		cout<<"the expression with balanced paranthesis is : "<<endl;
		for(i=0; i<j; i++)
			cout<<p[i];

	} else    if(b==d&&h==n&&f==g) {

		cout<<"Balanced paranthesis: "<<endl;
		for(i=0; i<j; i++)
			cout<<p[i];
	}
	else
		cout<<"Not balanced"<<endl;
}
}

