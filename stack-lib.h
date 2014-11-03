#define STACKLEN 50		//Define the length of the stack

typedef struct _stack
{
	int array[STACKLEN];
	int top; 
} list;


/***********************************************************
	Function Name: init_stack
	Function Description: Initialize a stack.
	Inputs: Pointer of variable of structure _stack. Eg. init_stack(&example);
	Outputs: None.
	Notes: None.
************************************************************/ 


void init_stack(list *seqstack){
	int i=0;
	for (; i < STACKLEN; ++i)
	{
		seqstack->array[i]=0;
	}
	seqstack->top=0;
}

/***********************************************************
	Function Name: check_stack_empty
	Function Description: Check a stack if it is empty.
	Inputs: Pointer of variable of structure _stack. Eg. check_stack_empty(&example);
	Outputs: 1 means empty; 0 means not empty.
	Notes: None.
************************************************************/ 

int check_stack_empty(list *seqstack){
	if (seqstack->top==0){
		return 1;
	}else {
		return 0;
	}

}

/***********************************************************
	Function Name: check_stack_full
	Function Description: Check a stack if it is full.
	Inputs: Pointer of variable of structure _stack. Eg. check_stack_full(&example);
	Outputs: 1 means full; 0 means not full.
	Notes: None.
************************************************************/ 

int check_stack_full(list *seqstack){
	if (seqstack->top==STACKLEN-1){
		return 1;
	}else {
		return 0;
	}

}

/***********************************************************
	Function Name: push
	Function Description: Push an element into a stack.
	Inputs: Pointer of variable of structure _stack and value to input. 
			Eg. push(&example,value);
	Outputs: 1 means full and exit ; 0 means not full and success.
	Notes: Use Function check_stack_full.
************************************************************/ 

int push(list *seqstack,int x){
	if(check_stack_full(seqstack)){
		return 1;
	}else{
		
		seqstack->array[seqstack->top]=x;
		seqstack->top+=1;
		return 0;
	}
	
}

/***********************************************************
	Function Name: pop
	Function Description: Pop an element from a stack.
	Inputs: Pointer of variable of structure _stack. 
			Eg. pop(&example);
	Outputs: 1 means empty and exit ; 0 means not empty and success.
	Notes: Use Function check_stack_empty.
************************************************************/ 

int pop(list *seqstack){
	if (check_stack_empty(seqstack))
	{
		return 1;
	} else{
		seqstack->array[seqstack->top]=0;
		seqstack->top-=1;
		return 0;
	}
}

/***********************************************************
	Function Name: print_stack
	Function Description: Print all elements of a stack.
	Inputs: Pointer of variable of structure _stack and the length to print. 
			Eg. print_stack(&example,length);
	Outputs: None.
	Notes: Use Function check_stack_empty.
************************************************************/ 

void print_stack(list *seqstack,int l){
	int i=l-1;
	 if (check_stack_empty(seqstack)){
	 	printf("========STACK========\n");
	 	printf("The stack is empty.\n");
	 	printf("=====================\n");
	 }else{
	 	printf("========STACK========\n");
		for (; i>=0; i--)
			{
				printf("%d\n",seqstack->array[i]);
			}
			if (check_stack_full(seqstack)){
				printf("The stack is full.\n");
			}
		printf("=====================\n");
	 }
}

