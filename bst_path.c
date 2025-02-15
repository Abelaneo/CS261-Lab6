#include <stdio.h>
#include <stdlib.h>

/* CS 261 - Recitation 6  
* Complete the functions to determine the length of the longest path 
* and the length of the shortest path from the root to a leaf node in a
* BST
*/


struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

int shortestPath(struct TreeNode* root)
{
  /*  COMPLETE  */
  return -2;
}

int longestPath(struct TreeNode* root)
{
   /*  COMPLETE  */
   return -2;
}

struct TreeNode* newNode(int val){
    struct TreeNode *n = malloc(sizeof(struct TreeNode));
    n->val = val;
    n->left = NULL;
    n->right = NULL;
    return n;
}

int main(void)
{
    
    //test 1: Empty Tree
    printf("\nTest1: Empty Tree....\n");
    printf("Longest Path:\tExpected: -1\tActual: %d\n", longestPath(NULL));
    printf("Shortest:\tExpected: -1\tActual: %d\n", shortestPath(NULL));
    
	//test 2: Tree with only a root node
    //  20
        
    struct TreeNode *root = newNode(20);

    printf("\nTest2: Root node only ....\n");
    printf("Longest Path:\tExpected: 0\tActual: %d\n", longestPath(root));
    printf("Shortest Path:\tExpected: 0\tActual: %d\n", shortestPath(root));

    //test 3:
    //            20
    //         18
    //      16
    //   14
    //12    
    struct TreeNode *node1 = newNode(18);
    root->left = node1;

    struct TreeNode *node2 = newNode(16);
    node1->left = node2;

    struct TreeNode *node3 = newNode(14);
    node2->left = node3;

    struct TreeNode *node4 = newNode(12);
    node3->left = node4;


    printf("\nTest3....\n");
    printf("Longest Path:\tExpected: 4\tActual: %d\n", longestPath(root));
    printf("Shortest Path:\tExpected: 4\tActual: %d\n", shortestPath(root));

    //test 4:
    //            20
    //         18    22
    //      16
    //   14
    //12
    struct TreeNode *node5 = newNode(22);
    root->right = node5;
    printf("\nTest4....\n");
    printf("Longest Path:\tExpected: 4\tActual: %d\n", longestPath(root));
    printf("Shortest Path:\tExpected: 1\tActual: %d\n", shortestPath(root));


    //test 5:
    //             20
    //          18    22
    //       16     21   26 
    //    14                30
    // 12    15
	//10
    struct TreeNode *node6 = newNode(21);
    node5->left = node6;
    struct TreeNode *node7 = newNode(26);
    node5->right = node7;
    struct TreeNode *node8 = newNode(30);
    node7->right = node8;
    struct TreeNode *node9 = newNode(10);
    node4->left = node9;
    struct TreeNode *node10 = newNode(15);
    node3->right = node10;	
	
    printf("\nTest5....\n");
    printf("Longest Path:\tExpected: 5\tActual: %d\n", longestPath(root));
    printf("Shortest Path:\tExpected: 2\tActual: %d\n", shortestPath(root));

    free(root);
    free(node1);
    free(node2);
    free(node3);
    free(node4);
    free(node5);
    free(node6);
    free(node7);
    free(node8);
    free(node9);
    free(node10);
    return 0;
}
