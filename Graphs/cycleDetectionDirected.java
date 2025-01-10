package Graphs;

import java.util.*;


public class cycleDetectionDirected {
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

        int [] indegree = new int[n];
        //make a function to create a graph
        for(int i=0;i<e;i++){
            int u = sc.nextInt();
            int v = sc.nextInt();
            adj.get(u).add(v);
            indegree[v]++;

        }

        //now use Kahn's Algorithm
        Queue<Integer> q = new LinkedList<>();
        ArrayList<Integer> ans = new ArrayList<>();
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                q.add(i);
            }
        }
        boolean[] visited = new boolean[n];
        while (!q.isEmpty()){
            int top = q.poll();
            ans.add(top);
            for(int neighbour : adj.get(top)){
                indegree[neighbour]--;
                if(indegree[neighbour]==0){
                    q.add(neighbour);
                    visited[neighbour]=true;
                }
            }
        }
        if(ans.size()==n){
            System.out.println("No there is not a cycle");
        }else{
            System.out.println("yes there is a cycle");
        }
    }
}
