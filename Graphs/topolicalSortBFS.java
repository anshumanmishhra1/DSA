package Graphs;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class topolicalSortBFS {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the no of vertices : ");
        int n = sc.nextInt();
        System.out.println("Entet the no of edges : ");
        int e = sc.nextInt();
        ArrayList<ArrayList<Integer>> adj = new ArrayList<>();
        for(int i=0;i<n;i++){
            adj.add(new ArrayList<>());
        }


        //make a function to create a graph
        int[] indegree = new int[n];
        for(int i=0;i<e;i++){
            int u = sc.nextInt();
            int v = sc.nextInt();
            adj.get(u).add(v); // topological sort only works on Directed and Acyclic
            indegree[v]++;
        }

        //now topological sort
        Queue<Integer> q = new LinkedList<>();
        ArrayList<Integer> ans = new ArrayList<>();
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                q.add(i);
            }
        }
        while (!q.isEmpty()){
            int top = q.remove();
            ans.add(top);
            for(int neighbour : adj.get(top)){
                indegree[neighbour]--;
                if (indegree[neighbour] == 0) {
                    q.add(neighbour);
                }
            }
        }
        for(int i=0;i< ans.size();i++){
            System.out.print(ans.get(i)+" ");
        }

    }
}
