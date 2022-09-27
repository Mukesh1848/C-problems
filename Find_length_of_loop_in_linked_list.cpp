
int lengthOfLoop(struct Node *n)

{

	int ans =  1;

	struct Node *temp =  n;

	while (temp->next != n)

	{

		ans++;

		temp = temp->next;

	}

	return ans;

}


int countNodesinLoop(struct Node *head)
{
    
    int temp = 0;

	struct Node *S_runner =  head; // slow runner

	    struct Node *F_runner =  head; // fast runner



	while (S_runner !=  NULL && F_runner !=  NULL && F_runner->next !=  NULL)

	{

		S_runner = S_runner->next;

		F_runner = F_runner->next->next;



// Point of collision

		if (S_runner == F_runner)

			return lengthOfLoop(S_runner);

	}



	   // if no loop is present

	return temp;
   
}
