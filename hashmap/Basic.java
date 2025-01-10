package hashmap;
import java.util.*;
public class Basic {
    public static void main(String[] args) {
        Map<String,Integer> mp = new HashMap<>();
        //this is the way to add or put element in the hashmap
        mp.put("Akash", 22);
        mp.put("Yash", 16);
        mp.put("Lav", 19);
        mp.put("Rishika", 18);
        mp.put("Harry", 18);

        //getting element according to the key
        System.out.println(mp.get("Yash"));
        System.out.println(mp.get("Rahul"));

        //chaning or upadating the value of the key
        //the key must be unique value may be similar

        mp.put("Yash",45);
        System.out.println(mp.get("Yash"));

        //removing a pair from the hashmap
        System.out.println(mp.remove("Yash"));
        System.out.println(mp.remove("Rahul"));

        //checking if the key is present in the hashmap or not
        System.out.println(mp.containsKey("Rishika"));
        System.out.println(mp.containsKey("Rahul"));

        //Adding a new entry only if the new key doesn't key exist already
        System.out.println(mp.putIfAbsent("Yashika",30));

        //getting all the key in the map
        System.out.println(mp.keySet());

        //getting all the values in the map
        System.out.println(mp.values());

        //getting all entries in the hashmap
        System.out.println(mp.entrySet());

        //traversing in the map we use for each loop
        for(String key : mp.keySet()){
            System.out.printf("Age of %s is %d\n", key, mp.get(key));
        }

    }
}
