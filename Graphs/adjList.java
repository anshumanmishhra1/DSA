package Graphs;
import java.util.*;
public class adjList {
    public static void printGraph(ArrayList<ArrayList<Integer>> adj) {
        for (int i = 0; i < adj.size(); i++) {
            System.out.print(i + " -> ");
            for (int neighbor : adj.get(i)) {
                System.out.print(neighbor + " ");
            }
            System.out.println();
        }
    }
    public static void addEdge(ArrayList<ArrayList<Integer>> adj, int u, int v){
        adj.get(u).add(v);
        adj.get(v).add(u); //here we are making an undirected graph
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
            addEdge(adj,u,v);
        }

        // Print the adjacency list
        System.out.println("The adjacency list of the graph is: ");
        printGraph(adj);
    }
}
