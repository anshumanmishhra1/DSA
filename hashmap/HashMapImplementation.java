package hashmap;
import org.w3c.dom.Node;

import java.util.*;
public class HashMapImplementation {
    static class MyHashMap<K,V>{
        static final float Load_Factor = 0.75f;
        static final int Deafault_Capacity=4;

        private class Node{
            K key;
            V value;

            Node(K key, V value){
                this.key = key;
                this.value=value;
            }
        }

        private LinkedList<Node>[] buckets;
        int n; // no of entries in the map

        private void intBuckets(int N){ //N means what is the capicty of bucket array
            buckets = new LinkedList[N];
            for(int i=0;i<buckets.length;i++){
                buckets[i]= new LinkedList<>();
            }
        }

        private int HashFun(K key){
            int hc = key.hashCode();
            return (Math.abs(hc))%buckets.length;
        }

        private int searchInBucket(LinkedList<Node>ll, K key){
            for(int i=0;i<ll.size();i++){
                if(ll.get(i).key==key){
                    return 1;
                }
            }
            return -1;
        }

        public MyHashMap(){
            intBuckets(Deafault_Capacity);
        }

        //it will return the size of the bucket
        public int size(){
            return n;
        }

        //it will put or update the key in the map
        public void put(K key, V value){
            int bi=HashFun(key);
            LinkedList<Node> currBucket = buckets[bi];
            int ei =searchInBucket(currBucket, key);
        }

        //it will get the value of the key
        public void get(K key){

        }

        //it will remove the key from the hashmap
        public void remove(K key){

        }


    }
    public static void main(String[] args) {

    }
}
