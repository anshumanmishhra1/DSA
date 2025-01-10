package Graphs;

import java.util.ArrayList;
import java.util.Scanner;



public class topologicalSortDFS {
    public static void topological(ArrayList<ArrayList<Integer>> adj, boolean[] visited, int i,ArrayList<Integer> ans ){
        visited[i]=true;

        for(int neighbour : adj.get(i)){
            if(!visited[neighbour]){
                topological(adj,visited,neighbour,ans);
            }
        }
        ans.add(0,i);


       for(int j=0;j<ans.size();j++){
           System.out.println(ans.get(j)+" ");
       }
    }

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
        for(int i=0;i<e;i++){
            int u = sc.nextInt();
            int v = sc.nextInt();
            adj.get(u).add(v); //we do only because we only want directed graph
        }

//       topological sort algorithm goes here
        boolean visited[] = new boolean[n];
        ArrayList<Integer> ans = new ArrayList<>(n);
        for(int i=0;i<n;i++){
            if(!visited[i]){
                topological(adj,visited,i,ans);
            }
        }
        System.out.println();
        System.out.println("-------------------------------");
        System.out.println();
        System.out.println("Printing topological sort : ");
        System.out.println(ans);

    }
}
