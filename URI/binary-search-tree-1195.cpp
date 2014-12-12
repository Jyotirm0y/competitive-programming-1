// author: Rodrigo Alves
// problem: Binary Search Tree
// url: https://www.urionlinejudge.com.br/judge/en/problems/view/1195
// type: Data Structures
#include <bits/stdc++.h>

typedef struct bstree {
    int value;
    struct bstree *leftChild;
    struct bstree *rightChild;
} BSTree;

BSTree* BSTInsert(BSTree *originalTree, int input)
{
    BSTree *newtree = new BSTree();
    newtree -> value = input;

    if (originalTree -> value == 0) {
        originalTree -> value = input;
    } else if (input < originalTree -> value) {
        if (originalTree -> leftChild == NULL) {
            originalTree -> leftChild = newtree;
        } else {
            BSTInsert(originalTree -> leftChild, input);
        }
    } else {
        if (originalTree -> rightChild == NULL) {
            originalTree -> rightChild = newtree;
        } else {
            BSTInsert(originalTree -> rightChild, input);
        }
    }
    return newtree;
}

void preOrder(BSTree *myTree) {
  if (myTree) {
    printf(" %d", myTree -> value);
    preOrder(myTree -> leftChild);
    preOrder(myTree -> rightChild);
  }
}

void inOrder(BSTree *myTree) {
  if (myTree) {
    inOrder(myTree -> leftChild);
    printf(" %d", myTree -> value);
    inOrder(myTree -> rightChild);
  }
}

void postOrder(BSTree *myTree) {
  if (myTree) {
    postOrder(myTree -> leftChild);
    postOrder(myTree -> rightChild);
    printf(" %d", myTree -> value);
  }
}

int main()
{
    int C, N, number;
    scanf("%d", &C);

    for (int i = 1; i <= C; i++) {
      scanf("%d", &N);

      BSTree *tree = new BSTree();

      while (N--) {
        scanf("%d", &number);
        BSTInsert(tree, number);
      }

      printf("Case %d:\n", i);

      printf("Pre.:");
      preOrder(tree);
      printf("\n");

      printf("In..:");
      inOrder(tree);
      printf("\n");

      printf("Post:");
      postOrder(tree);
      printf("\n\n");
    }

    return 0;
}
