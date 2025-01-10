package Graphs;

import java.util.ArrayList;
import java.util.Scanner;


public class DFS {
    public static void addEdges(ArrayList<ArrayList<Integer>> adj, int u, int v) {
        adj.get(u).add(v);
        adj.get(v).add(u); // For undirected graph
    }

    public static void dfs(ArrayList<ArrayList<Integer>> adj,boolean [] visited, int i){
        visited[i]=true;
        System.out.println(i +" ");
        for(int neighbour : adj.get(i)){
            if(!visited[neighbour]){
                dfs(adj,visited,neighbour);
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the no of vertices : ");
        int m = sc.nextInt();
        System.out.println("Enter the no of edges : ");
        int n = sc.nextInt();

        ArrayList<ArrayList<Integer>> adj = new ArrayList<>();
        for(int i=0;i<m;i++){
            adj.add(new ArrayList<>());
        }

        //function to create a graph and add edge :
        boolean[] visited= new boolean[m];
        for(int i=0;i<n;i++){
            int u = sc.nextInt();
            int v = sc.nextInt();
            addEdges(adj,u,v);
        }
        System.out.println("printing the dfs graph traversal : ");
        for(int i=0;i<m;i++){
            if(!visited[i]){
                dfs(adj,visited,i);
            }
        }

    }
}
