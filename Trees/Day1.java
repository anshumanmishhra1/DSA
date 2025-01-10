package Trees;

import java.util.LinkedList;
import java.util.Queue;

public class Day1 {
    private class TreeNode{
        int data;
        TreeNode left;
        TreeNode right;

        TreeNode(int data){
            this.data=data;
        }
    }

    static int index;
    Day1(){
        index=0;
    }
    public TreeNode createTree(int[] arr){
        if(arr[index]==-1) return null;
        TreeNode newNode = new TreeNode(arr[index]);
        ++index;
        newNode.left=createTree(arr);
        ++index;
        newNode.right=createTree(arr);
        return newNode;
    }

    public void preOrder(TreeNode root){
        if(root==null) return;
        System.out.print(root.data+" ");
        preOrder(root.left);
        preOrder(root.right);
    }

    public void levelOrder(TreeNode root){
        Queue<TreeNode> q = new LinkedList<>();
        q.offer(root);
        while(!q.isEmpty()){
            root=q.poll();
            while(root!=null){
                if(root.left!=null) q.offer(root.left);
                if(root.right!=null) q.offer(root.right);
                System.out.println(root.data);
            }
        }
    }
    public static void main(String[] args) {
        Day1 bt = new Day1();
        int arr[] = {6,4,-1,7,3,-1,-1,-1,9,8,-1,-1,-1};
        TreeNode root = bt.createTree(arr);
        bt.preOrder(root);
        bt.levelOrder(root);
    }
}
