// stl -> standard template library

//stl has 3 major components ->
    // containers -> they store and organise data in a specific manner
    /*- Sequence containers -> Array , vector , queue , deque , list -> they are implemented as arrays or linkedlists
      - Associative  containers -> set , multiset , map , multimap
      - unordered associative containers -> unordered_set , unordered_multiset, unordered_map, unordered_multimap
      
      
      2. Iterators -> these are the objects that are used to access elements of a container
      
      3. algorithm -> sorting , searching , copy , count , swap etc*/

    #include <iostream>
    #include <vector>
    #include <set>
    #include <array>
    using namespace std;
    
    int main()
    {
        vector<int> vec1 = {3,2,6,4,8};
        set<int> set1;

        // stl array
        array<int,5>arr2 = {1,2,3,4,5};
        array<int,5>arr3;
        arr3=arr2;
        cout << arr3[0];
    }