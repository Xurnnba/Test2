#include <iostream>
#include <vector>

using namespace std;

// Segment Tree class
class SegmentTree {
private:
    vector<int> tree;  // Stores the segment tree
    int n;             // Size of the array
public:
    // Constructor
    SegmentTree(int n) {
        this->n = n;
        tree.resize(4 * n);
    }

    // Builds the segment tree recursively
    void build(vector<int>& a, int v, int tl, int tr) {
        if (tl == tr) {
            tree[v] = a[tl];
        } else {
            int tm = (tl + tr) / 2;
            build(a, v * 2, tl, tm);
            build(a, v * 2 + 1, tm + 1, tr);
            tree[v] = tree[v * 2] + tree[v * 2 + 1];
        }
    }

    // Queries the sum of elements in the given range [l, r]
    int query(int v, int tl, int tr, int l, int r) {
        if (l > r) {
            return 0;
        }
        if (l == tl && r == tr) {
            return tree[v];
        }
        int tm = (tl + tr) / 2;
        return query(v * 2, tl, tm, l, min(r, tm)) +
               query(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r);
    }

    // Updates the value at index i to val
    void update(int v, int tl, int tr, int i, int val) {
        if (tl == tr) {
            tree[v] = val;
        } else {
            int tm = (tl + tr) / 2;
            if (i <= tm) {
                update(v * 2, tl, tm, i, val);
            } else {
                update(v * 2 + 1, tm + 1, tr, i, val);
            }
            tree[v] = tree[v * 2] + tree[v * 2 + 1];
        }
    }
};

int main() {
    int n;
    cin >> n;

    // Read the input array
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Build the segment tree
    SegmentTree st(n);
    st.build(a, 1, 0, n - 1);

    // Answer the queries and updates
    int q;
    cin >> q;
    while (q--) {
        char c;
        int l, r;
        cin >> c >> l >> r;
        if (c == 'q') {
            cout << st.query(1, 0, n - 1, l - 1, r - 1) << endl;
        } else {
            st.update(1, 0, n - 1, l - 1, r);
        }
    }

    return 0;
}

//Here's an example prompt that could be solved using this implementation:

//You are given an array of integers, and you need to answer the following types of queries:

// Update the value at index i to val.
// Find the sum of elements in the range [l, r].
// Implement a Segment Tree to efficiently answer these queries.



//sample input
// 5
// 1 2 3 4 5
// 4
// q 1 3
// u 2 10
// q 2 4
// u 5 8

//sample output
// 6
// 15

//In this implementation,
// we define a SegmentTree class with three methods: build, query, and update. 
//The build method recursively builds the segment tree by dividing the array into two halves until each leaf node corresponds to a single element in the array. 
//The query method recursively searches the tree to find the sum of elements in the given range [l, r]. 
//The update method recursively updates the value at a specific index in the array.

//The main function reads the input array,
// builds the segment tree,
//and then answers the queries and updates using the query and update methods of the SegmentTree class.

// Explanation:

// We first build the segment tree for the input array [1, 2, 3, 4, 5]. The queries are as follows:

// Query the sum of elements in the range [1, 3], which is 1 + 2 + 3 = 6.
// Update the value at index 2 to 10, so the array becomes [1, 10, 3, 4, 5].
// Query the sum of elements in the range [2, 4], which is 10 + 3 + 4 = 17.
// Update the value at index 5 to 8, so the array becomes [1, 10, 3, 4, 8].
// The final output is the sum of elements in the range [2, 4], which is 10 + 3 + 4 = 17, and the sum of elements in the range [1, 5], which is 1 + 10 + 3 + 4 + 8 = 26.


// The syntax of the build function in C++ looks like this:

// 
// 
// void build(int node, int start, int end, int arr[], int tree[]);
// The parameters of the build function are as follows:

// node: This parameter represents the index of the current node in the Segment Tree. The root node of the Segment Tree is typically represented by 1, and its left and right child nodes are represented by 2 * node and 2 * node + 1, respectively.

// start: This parameter represents the starting index of the range that the current node represents in the input array.

// end: This parameter represents the ending index of the range that the current node represents in the input array.

// arr[]: This parameter is the input array on which the Segment Tree is built.

// tree[]: This parameter is the Segment Tree array in which the constructed Segment Tree is stored.

// The build function recursively constructs the Segment Tree by dividing the input array into smaller subarrays and building the corresponding nodes in the Segment Tree. At each node, the function calculates the sum of the values of the corresponding range in the input array and stores it in the corresponding node of the Segment Tree.

// Here's an example implementation of the build function:

//
// 
// void build(int node, int start, int end, int arr[], int tree[]) {
//     if (start == end) {
//         tree[node] = arr[start];
//     } else {
//         int mid = (start + end) / 2;
//         build(2 * node, start, mid, arr, tree);
//         build(2 * node + 1, mid + 1, end, arr, tree);
//         tree[node] = tree[2 * node] + tree[2 * node + 1];
//     }
// }
// This implementation assumes that the Segment Tree stores the sum of values of the input array. If you want to build a Segment Tree that supports other range queries and update operations, you'll need to modify the implementation accordingly.




