package Graphs;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class BFS {
    public static void addEdge(ArrayList<ArrayList<Integer>> adj, int u, int v) {
        adj.get(u).add(v);
        adj.get(v).add(u);
    }

    public static void printBFS(ArrayList<ArrayList<Integer>> adj, boolean[] visited, int src) {
        Queue<Integer> q = new LinkedList<>();
        q.add(src);
        visited[src] = true;

        while (!q.isEmpty()) {
            int top = q.poll();
            System.out.print(top + " "); // Print nodes in BFS order
            for (int neighbour : adj.get(top)) {
                if (!visited[neighbour]) {
                    q.add(neighbour);
                    visited[neighbour] = true;
                }
            }
        }
    }

    public static void printGraph(ArrayList<ArrayList<Integer>> adj) {
        System.out.println("Adjacency List:");
        for (int i = 0; i < adj.size(); i++) {
            System.out.print(i + " -> ");
            for (int neighbour : adj.get(i)) {
                System.out.print(neighbour + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of vertices: ");
        int m = sc.nextInt();
        System.out.println("Enter the number of edges: ");
        int n = sc.nextInt();

        ArrayList<ArrayList<Integer>> adj = new ArrayList<>();
        for (int i = 0; i < m; i++) adj.add(new ArrayList<>());

        // Create the graph
        System.out.println("Enter the edges (u v): ");
        for (int i = 0; i < n; i++) {
            int u = sc.nextInt();
            int v = sc.nextInt();
            addEdge(adj, u, v);
        }

        // Print the adjacency list
        printGraph(adj);

        // Perform BFS traversal
        System.out.println("Here is the BFS Traversal of the Graph: ");
        boolean[] visited = new boolean[m];

        // Starting from vertex 0
        printBFS(adj, visited, 0);
    }
}
