// the last node is called the leaf
//the first node is called the root
//any in between node is called a parent

// node, left righ
// left, node, right
// left righ node
public class BinaryTree
  {
    private class Node
      {
        char value;
        Node left;
        Node right;

        //Node constructor
        Node(char val)
        {
          value = val;
          left = null;
          right = null;
        }
        //Node constructor
        Node (char val, Node leftChild, Node rightChild)
        {
          value = val;
          left = leftChild;
          right = rightChild;
        }
      }

    private Node root;

    //class constructor
    public BinaryTree()
    {
      Node aNode = new Node('A');
      aNode.left = new Node('B');
      Node dNode = new Node('D');
      node cNode = new Node('C', dNode, null);
      aNode.right = cNode;
      root = aNode;
    }

    private void preorder(Node btree)
    {
      if(btree != null)
      {
        System.out.print(btree.value + " ");
        preorder(btree.left);
        preorder(btree.right);
      }
    }

    private void inorder(Node btree)
    {
      if(btree != null)
      {
        inorder(btree.left);
        System.out.print(btree);
        inorder(btree.right);
      }
    }
    private void postorder(Node btree)
    {
      if(btree != null)
      {
        postorder(btree.left);
        postorder(btree.right);
        System.out.print(btree.value + " ");
      }
    }
    public void preorder()
    {
      preorder(root);
    }
    public void 
  }