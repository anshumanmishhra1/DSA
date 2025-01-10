//package hashTable;
//import java.util.*;
//class NormralHashTable{
//    int size;
//    Integer[] hashTable;
//
//    NormralHashTable(int size){
//        this.size= size;
//        hashTable=new Integer[size];
//    }
//
//    int getIndex(int key){
//        return key%size;
//    }
//
//    void add(int key){
//        int index = getIndex(key);
//        hashTable[index] = key;
//    }
//
//    void remove(int key){
//        int index = getIndex(key);
//        hashTable[index]=null;
//    }
//    boolean isPresent(int key){
//        int index = getIndex(key);
//        if(hashTable[index]!=null) return true;
//        return false;
//    }
//}
//
//class LinearProbing{
//    int size;
//    Integer [] hashTable;
//    LinearProbing(int size){
//        this.size=size;
//        hashTable=new Integer[size];
//    }
//
//    int getIndex(int key){
//        return key%size;
//    }
//
//    void add(int key){
//        int index = getIndex(key);
//        int oldIndex =index;
//        do{
//            if(hashTable[index]==null){
//                hashTable[index]=key;
//                return;
//            }
//            index = (++index)%size;
//
//        }while (index!=oldIndex);
//    }
//
//    void remove(int key){
//        int index = getIndex(key);
//        int oldIndex =index;
//        do{
//            if(hashTable[index]==key){
//                hashTable[index]=null;
//                return;
//            }
//            index = (++index)%size;
//
//        }while (index!=oldIndex);
//    }
//}
//
//class SeparateChaining<K,V>{
//    private class HashNode<K,V>{
//        K key;
//        V value;
//        int hashCode;
//        HashNode<K,V> next;
//        HashNode(K key, V value, int hashCode){
//            this.key=key;
//            this.value=value;
//            this.hashCode=hashCode;
//
//        }
//    }
//
//    private HashNode<K,V> [] hashTable;
//    private int hashTableSize; //size of hashTable Array
//    private int size=0; //number of hashnodes in the hash table
//
//    SeparateChaining(int hashTableSize){
//        this.hashTableSize=hashTableSize;
//        hashTable=new HashNode[hashTableSize];
//    }
//
//    public int getSize(){
//        return size;
//    }
//
//    public boolean isEmpty(){
//        return size==0;
//    }
//
//    private int getHashCode(K key){
//        return Objects.hashCode(key);
//    }
//
//    private int getHashTableIndex(K key){
//        int index = getHashCode(key)%getSize();
//        return index<0?(-1 * index) : index;
//    }
//
//    public void add(K key, V value){
//        int index = getHashTableIndex(key);
//        HashNode<K,V> head = hashTable[index];
//        //search if key is present then update the value
//        while(head!=null){
//            if(head.key.equals(key)){
//                head.value=value;
//                return;
//            }
//            head = head.next;
//        }
//        //now add node
//        size++;
//        head=hashTable[index];
//
//        HashNode<K,V> newHn = new HashNode<>(key, value, getHashCode(key));
//        newHn.next=head;
//        hashTable[index]=newHn;
//
//
//        //search if key present then update value
//        while(head!=null){
//            if(head.key.equals(key)){
//                break;
//            }
//            prev=head;
//            head=head.next;
//        }
//        if(head==null){
//            System.out.println("Key is not present");
//            return null;
//        }
//        V value=head.value;
//        if(prev==null) head=head.next;
//        prev.next=head.next;
//        return value;
//    }
//
//
//
//}
//public class BasicsOfHashTable {
//    public static void main(String[] args) {
////     NormralHashTable nht = new NormralHashTable(10);
////     nht.add(11);
////     nht.add(13);
////     nht.add(25);
////     nht.add(4);
////
////        System.out.println(nht.isPresent(25));
////        nht.remove(25);
////        System.out.println(nht.isPresent(25));
////
////    }
//        LinearProbing l1 = new LinearProbing(5);
//        l1.add(5);
//        l1.add(12);
//        l1.add(16);
//        l1.add(24);
//        l1.add(25);
//    }
//}
