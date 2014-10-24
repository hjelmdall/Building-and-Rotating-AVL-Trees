//Programmer: Jon Holmberg
//Date: 12/18/2013
//Purpose: Successfully balance and rotate AVL trees.

/*Preconditions:

void insert(int key): requires input from user for key value to insert.

node *search(int key): requires call with specified key value that exists 
in prebuilt AVL tree.

void destroy_tree(): requires existing AVL tree to be destroyed.

void displayTree(node *treeNode): requires prebuilt AVL tree in order to
for function to display AVL tree.

void rootDisplay(node *rootValue): requires the root to not be null. 

void alphaRotation() along with the other void "   "Rotation() functions
require a built tree in order to run. 

void destroy_tree(node *child): requires call of void destroy_tree().

void insert(int key, node *child): requires call of void insert(int key).

node *search(int key, node *child): requires execution of node *search(int key).

int searchChild(binaryTree treeObject): requires call of promptSearch(binaryTree treeObject).

//Postconditions:

void insert(int key): Will have passed key value and root to 
void insert(int key, node *child).

node *search(int key): Will have passed key value to node *search(int key, node *child).

void destroy_tree(): Will have called void destroy_tree(node *child).

int searchChild(binaryTree treeObject): Shows left or right child of node from
specified key value or confirmation that it is a leaf and has no children.

void promptSearch(binaryTree treeObject): Will have asked user if they want to 
search for a node within the current AVL tree.

void displayTree(node *treeNode): Will have recursively displayed children of left 
subtree and right subtree as long as root's children are not null.

void rootDisplay(node *rootValue): Will have displayed keyValue of root for current AVL tree.

void alphaRotation(): Will have performed a left rotation at the root node.

void bravoRotation(): Will have peformed a left rotation at the root node. 

void charlieRotation(): Will have performed a right rotation at the root's 
right child and then a left rotation at the root node. 

void deltaRotation(): Will have performed a right rotation at the root node.

void oscarRotation(): Will have performed a right rotation at the root node.

void omegaRotation(): Will have performed a left rotation at the root's left child 
and then a right rotation at the root node.


void destroy_tree(node *child): Will have successfully deallocated node memory
from current AVL tree.

void insert(int key, node *child): Will have successfully inserted the new key value 
into the current AVL tree.

node *search(int key, node *child): Will have returned node containing the keyValue passed
from node *search(int key).
*/



#include <iostream>
using namespace std;

struct node
{
	int keyValue;
	node *left;
	node *right;

};



class binaryTree
{
public:
	binaryTree();
	/*~binaryTree();*/

	void insert(int key);
	node *search(int key);
	void destroy_tree();
	int searchChild(binaryTree treeObject);
	void promptSearch(binaryTree treeObject);
	void displayTree(node *treeNode);
	node *root;
	void rootDisplay(node *rootValue);
	void alphaRotation();
	void bravoRotation();
	void charlieRotation();
	void deltaRotation();
	void oscarRotation();
	void omegaRotation();


private:
	void destroy_tree(node *child);
	void insert(int key, node *child);
	node *search(int key, node *child);



};

int main()
{
	binaryTree alphaTree;
	alphaTree.insert(10);
	alphaTree.insert(5);
	alphaTree.insert(20);
	alphaTree.insert(3);
	alphaTree.insert(15);
	alphaTree.insert(30);
	alphaTree.insert(25);
	alphaTree.insert(40);
	alphaTree.insert(50);

	cout << "Presorted alphaTree:\n\n " << endl;
	alphaTree.rootDisplay(alphaTree.root);
	cout << endl;
	alphaTree.displayTree(alphaTree.root);
	cout << "\n\n";
	alphaTree.alphaRotation();
	cout << "Sorted tree: \n\n";
	alphaTree.rootDisplay(alphaTree.root);
	cout << endl;
	alphaTree.displayTree(alphaTree.root);

	cout << "\n\n";

	binaryTree bravoTree;
	bravoTree.insert(10);
	bravoTree.insert(5);
	bravoTree.insert(20);
	bravoTree.insert(15);
	bravoTree.insert(30);
	bravoTree.insert(40);

	cout << "Presorted bravoTree:\n\n " << endl;
	bravoTree.rootDisplay(bravoTree.root);
	cout << endl;
	bravoTree.displayTree(bravoTree.root);
	cout << "\n\n";
	bravoTree.bravoRotation();
	cout << "Sorted tree: \n\n";
	bravoTree.rootDisplay(bravoTree.root);
	cout << endl;
	bravoTree.displayTree(bravoTree.root);

	cout << "\n\n";

	binaryTree charlieTree;
	charlieTree.insert(30);
	charlieTree.insert(20);
	charlieTree.insert(60);
	charlieTree.insert(10);
	charlieTree.insert(40);
	charlieTree.insert(70);
	charlieTree.insert(35);
	charlieTree.insert(50);
	charlieTree.insert(80);
	charlieTree.insert(55);

	cout << "Presorted charlieTree:\n\n " << endl;
	charlieTree.rootDisplay(charlieTree.root);
	cout << endl;
	charlieTree.displayTree(charlieTree.root);
	cout << "\n\n";
	charlieTree.charlieRotation();
	cout << "Sorted tree: \n\n";
	charlieTree.rootDisplay(charlieTree.root);
	cout << endl;
	charlieTree.displayTree(charlieTree.root);

	cout << "\n\n";

	binaryTree deltaTree;
	deltaTree.insert(17);
	deltaTree.insert(11);
	deltaTree.insert(23);
	deltaTree.insert(6);
	deltaTree.insert(12);
	deltaTree.insert(30);
	deltaTree.insert(3);
	deltaTree.insert(7);
	deltaTree.insert(1);

	cout << "Presorted deltaTree:\n\n " << endl;
	deltaTree.rootDisplay(deltaTree.root);
	cout << endl;
	deltaTree.displayTree(deltaTree.root);
	cout << "\n\n";
	deltaTree.deltaRotation();
	cout << "Sorted tree: \n\n";
	deltaTree.rootDisplay(deltaTree.root);
	cout << endl;
	deltaTree.displayTree(deltaTree.root);

	cout << "\n\n";

	binaryTree oscarTree;
	oscarTree.insert(50);
	oscarTree.insert(30);
	oscarTree.insert(60);
	oscarTree.insert(20);
	oscarTree.insert(40);
	oscarTree.insert(10);

	cout << "Presorted oscarTree:\n\n " << endl;
	oscarTree.rootDisplay(oscarTree.root);
	cout << endl;
	oscarTree.displayTree(oscarTree.root);
	cout << "\n\n";
	oscarTree.oscarRotation();
	cout << "Sorted tree: \n\n";
	oscarTree.rootDisplay(oscarTree.root);
	cout << endl;
	oscarTree.displayTree(oscarTree.root);

	cout << "\n\n";

	binaryTree omegaTree;
	omegaTree.insert(50);
	omegaTree.insert(30);
	omegaTree.insert(60);
	omegaTree.insert(20);
	omegaTree.insert(40);
	omegaTree.insert(70);
	omegaTree.insert(10);
	omegaTree.insert(35);
	omegaTree.insert(45);
	omegaTree.insert(38);

	cout << "Presorted omegaTree:\n\n " << endl;
	omegaTree.rootDisplay(omegaTree.root);
	cout << endl;
	omegaTree.displayTree(omegaTree.root);
	cout << "\n\n";
	omegaTree.omegaRotation();
	cout << "Sorted tree: \n\n";
	omegaTree.rootDisplay(omegaTree.root);
	cout << endl;
	omegaTree.displayTree(omegaTree.root);

	alphaTree.destroy_tree();
	bravoTree.destroy_tree();
	charlieTree.destroy_tree();
	deltaTree.destroy_tree();
	oscarTree.destroy_tree();
	omegaTree.destroy_tree();

	return 0;
}


void binaryTree::rootDisplay(node *rootValue)
{

	cout << rootValue->keyValue << " is the root!" << endl;

}

void binaryTree::displayTree(node *treeNode)
{

if (treeNode->left != NULL)
{
  cout << treeNode->left->keyValue << " is the left child of  " << treeNode->keyValue << endl;
  displayTree(treeNode->left);
}
if (treeNode->right != NULL)

{
  cout << treeNode->right->keyValue << " is the right child of " << treeNode->keyValue << endl;
  displayTree(treeNode->right);
}
	
}


void binaryTree::promptSearch(binaryTree treeObject)
{
	char input;
	do
	{
		cout << "Would you like to search for a child node? [y for yes, n for no]: ";
		cin >> input;
		input = tolower(input);
		if (input == 'y')
			cout << treeObject.searchChild(treeObject) << endl;
	} while (input == 'y');

}





int binaryTree::searchChild(binaryTree treeObject)
{
	int x = 0;
	char input;
	cout << "Enter key value to search:\n";
	cin >> x;
	if (treeObject.search(x)->right == NULL && treeObject.search(x)->left == NULL)
	{
		cout << "This key value is a leaf!" << endl;
		return treeObject.search(x)->keyValue;
	}
	cout << "Which child would you like to search for[l for left child, r for right child]:\t";
	cin >> input;
	input = tolower(input);

	if (input == 'l')
	{

		cout << "The left child of this parent is: ";
		return treeObject.search(x)->left->keyValue;
	}//end if

	if (input == 'r')
	{
		cout << "The right child of this parent is: ";
		return treeObject.search(x)->right->keyValue;
	} //end if

}




binaryTree::binaryTree() //Constructor
{
	root = NULL;
}



void binaryTree::destroy_tree(node *child)
{
	if (child != NULL)
	{
		destroy_tree(child->left); //
		destroy_tree(child->right);
		delete child;
	}
}


void binaryTree::insert(int key, node *child)
{
	if (key < child->keyValue) 
	{
		if (child->left != NULL)
			insert(key, child->left);
		else
		{
			child->left = new node;
			child->left->keyValue = key;
			child->left->left = NULL;   
			child->left->right = NULL;  
		}
	}
	else if (key >= child->keyValue) 
	{
		if (child->right != NULL)
			insert(key, child->right);
		else
		{
			child->right = new node;
			child->right->keyValue = key;
			child->right->left = NULL; 
			child->right->right = NULL;  
		}
	}
}

void binaryTree::insert(int key)
{
	if (root != NULL)
		insert(key, root);
	else
	{
		root = new node; //create new node.
		root->keyValue = key; //set root's key value to value passed from main.
		root->left = NULL; //set left child to null, set right child to null. 
		root->right = NULL;
	}
}


node *binaryTree::search(int key, node *child)
{
	if (child != NULL)
	{
		if (key == child->keyValue)
			return child;
		if (key < child->keyValue)
			return search(key, child->left);
		else
			return search(key, child->right);
	}
	else return NULL;
}



node *binaryTree::search(int key)
{
	return search(key, root);
}


void binaryTree::destroy_tree()
{
	destroy_tree(root);
}





void binaryTree::alphaRotation() 
{


	root->left->right = root->right->left;
	root->right->left = NULL;
	node *tempPointer = root->right;
	tempPointer->left = NULL;
	root->right = NULL;
	tempPointer->left = root;
	tempPointer->left->right = tempPointer->left->left->right;
	tempPointer->left->left->right = NULL;
	root = tempPointer;


}

void binaryTree::bravoRotation()
{
	root->left->right = root->right->left;
	root->right->left = NULL;
	node *tempPointer = root->right;
	tempPointer->left = NULL;
	root->right = NULL;
	tempPointer->left = root;
	tempPointer->left->right = tempPointer->left->left->right;
	tempPointer->left->left->right = NULL;
	root = tempPointer;

}

void binaryTree::charlieRotation()
{
	node *tempPointer = root->right;
	root->right = NULL;
	node *newPointer = tempPointer->left;
	tempPointer->left = NULL;
	tempPointer->left = newPointer->right;
	newPointer->right = NULL;
	newPointer->right = tempPointer;
	root->right = newPointer;

	//left rotation at root
	root->left->right = root->right->left;
	root->right->left = NULL;
	node *holdPointer = root->right;
	root->right = NULL;
	holdPointer->left = root;
	holdPointer->left->right = holdPointer->left->left->right;
	holdPointer->left->left->right = NULL;
	root = holdPointer;

}

void binaryTree::deltaRotation()
{
	root->right->left = root->left->right;
	root->left->right = NULL;
	node *tempPointer = root->left;
	root->left = NULL;
	tempPointer->right = root;
	tempPointer->right->left = tempPointer->right->right->left;
	tempPointer->right->right->left = NULL;
	root = tempPointer;
}



void binaryTree::oscarRotation()
{
	root->right->left = root->left->right;
	node *temp = root->left;
	root->left = NULL;
	temp->right = root;
	temp->right->left = temp->right->right->left;
	temp->right->right->left = NULL;
	root = temp;

}

void binaryTree::omegaRotation()
{
	root->left->left->right = root->left->right->left;
	node *temp = root->left->right;
	temp->left = NULL;

	node *newPointer = root->left;
	root->left = NULL;
	root->left = newPointer->right;
	newPointer->right = NULL;
	newPointer->right = newPointer->left->right;
	newPointer->left->right = NULL;
	root->left->left = newPointer;

	root->right->left = root->left->right;
	root->left->right = NULL;
	temp = root->left;
	root->left = NULL;
	temp->right = root;
	temp->right->left = temp->right->right->left;
	temp->right->right->left = NULL;
	root = temp;

}