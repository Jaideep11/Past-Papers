#include<iostream>
using namespace std;
class stack_reverse
{
	class node
	{
		public:
		int data;
		node *next;
	};
	public:
	node *front;
	node *rear;
		stack_reverse()
		{
			front=NULL;
			rear=NULL;
		}
		void Enqueue(int data)
		{
			node *tp1=new node();
			tp1->data=data;
			tp1->next=NULL;
			if(front==NULL&&rear==NULL)
			{
				rear=tp1;
				front=rear;
			}
			else
			{
				rear->next=tp1;
				rear=tp1;
			}
		}		
		void Dequeue()
		{
			node *tp1=new node();
			if(front==NULL)
		    {
		    	cout<<"stack_reverse is empty";
			}
			else
			{
				tp1=front;
				front=front->next;
				cout<<" "<<tp1->data;
				delete tp1;
				tp1 =NULL;
			}			
		}
		node *Getfront()
		{
			return front;
		}
		void clear( )
		{
			node *tp1=new node();
			node *temp=new node;
			tp1=front;
			while(tp1!=NULL)
			{
				cout<<" "<<tp1->data;
				temp=tp1->next;
				delete tp1;
				tp1=NULL;
				tp1=temp;
			}
	}
		void reverse( node  *Q1 )
		{
			if(Q1==NULL)
			{
				return ;
			}
			else
			{
				reverse(Q1->next);			
			node *tvr=new node();
					tvr=Q1;
				node *Q2=new node();
				Q2->data=tvr->data;
				Q2->next=NULL;
   
				if(front==NULL)
				{
					front=Q2;
					rear=front;
				}
				else
				{
					rear->next=Q2;
					rear=Q2;
				}		
		}
}
};
int main()
{
	stack_reverse queue1,queue2;
	queue1.Enqueue(5);
	queue1.Enqueue(7);
	queue1.Enqueue(9);
	queue2.reverse(queue1.Getfront());
    queue1.clear();	
	cout<<"\n\nAfter reversing the string:\n\n";
	queue2.clear();
}
