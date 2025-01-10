package Trees;

import java.util.Scanner;
class Node{
    int val;
    Node left;
    Node right;
    Node(int val){
        this.val=val;
    }
}

class BinaryTree{
    static int idx=-1;
    public static Node buildTree(int arr[]){
        idx++;
        if(arr[idx]==-1) return null;
        Node newNode = new Node(arr[idx]);
        newNode.left=buildTree(arr);
        newNode.right=buildTree(arr);
        return newNode;
    }
}
public class Implementation {
    public static void display(Node root){
        if(root==null) return;
        System.out.print(root.val + " ");
        display(root.left);
        display(root.right);
    }

    public static int totalSum(Node root){
        if(root==null) return 0;
        int leftSum = totalSum(root.left);
        int rightSum = totalSum(root.right);

        return root.val+leftSum+rightSum;
    }

    public static int maxValue(Node root){
        if(root==null) return Integer.MIN_VALUE;
        return Math.max(root.val,Math.max(maxValue(root.left),maxValue(root.right)));
    }

    public static int levels(Node root){
        if(root==null)return 0;
        return 1 + Math.max(levels(root.left),levels(root.right));
    }
    public static void main(String[] args) {
        int n ;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the no of Nodes : ");
        n = sc.nextInt();
        int arr[] = new int[n];
        System.out.println("Enter the values of nodes : ");
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }

        BinaryTree tree = new BinaryTree();
        Node root = tree.buildTree(arr);
//        System.out.println(root.val);
//        display(root);
//        int res = totalSum(root);
//        System.out.println(res);

//        int res = maxValue(root);
        int res = levels(root);
        System.out.println(res);
    }
}
