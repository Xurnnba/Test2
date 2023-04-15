// Of course! Imagine you have a shelf with some books on it. Each book has a weight. 
//If you want to know the total weight of all the books on the shelf, you would have to pick up each book and add up all the weights. 
//This takes a lot of time and effort

// Now, imagine you have a magic book that can tell you the total weight of all the books on the shelf in just a snap.
// How does this magic book work? It uses a Fenwick tree!
// A Fenwick tree is like a bookshelf with compartments.
// Each compartment contains a summary of the weights of the books in certain positions.
// When you add or remove a book from the shelf, the Fenwick tree updates the summary in the appropriate compartments. 
//This way, the Fenwick tree can tell you the total weight of all the books on the shelf without having to pick up each book and add up their weights one by one.


// For example, let's say you have a shelf with 10 books. You could create a Fenwick tree with 10 compartments, one for each book.
// Each compartment contains the weight of the book at that position. 
//To find the total weight of all the books on the shelf, you simply add up the summary in each compartment of the Fenwick tree.
// If you add a new book to the shelf, the Fenwick tree updates the summaries in the compartments after the new book's position.
// If you remove a book from the shelf, the Fenwick tree updates the summaries in the compartments after the removed book's position.
// Fenwick trees are very efficient and can be used to solve many problems in computer science. 
//They are especially useful for problems involving range queries and updates on an array. 
//They are like a magic bookshelf that can quickly give you information about the books on the shelf without having to pick them up one by one.



// Here's an example problem that can be solved using a Fenwick tree, along with the implementation in C++:

// Problem: You are given an array of integers and you have to answer several queries of the form "what is the sum of the integers from index i to index j?".

// Input:

// The first line of the input contains two integers n and q (1 <= n, q <= 10^5), where n is the length of the array and q is the number of queries.
// The second line contains n integers a1, a2, ..., an, where each ai (1 <= ai <= 10^3) is the i-th element of the array.
// Each of the following q lines contains two integers li and ri (1 <= li <= ri <= n), which represent a query asking for the sum of the integers from index li to index ri.


// Output:

// For each query, output a single integer representing the sum of the integers from index li to index ri.

//Sample Input
// 5 3
// 1 2 3 4 5
// 1 3
// 2 4
// 3 5

//Sample Output
// 6
// 9
// 12

// Explanation:

// In the first query, we have to calculate the sum of elements from index 1 to 3, which is 1 + 2 + 3 = 6.
// In the second query, we have to calculate the sum of elements from index 2 to 4, which is 2 + 3 + 4 = 9.
// In the third query, we have to calculate the sum of elements from index 3 to 5, which is 3 + 4 + 5 = 12.
// Here's the C++ implementation using a Fenwick tree:

#include <iostream>
#include <vector>

using namespace std;

// Returns the sum of elements from index 1 to index i in the given Fenwick tree
int get_sum(vector<int>& fenwick, int i) {
    int sum = 0;
    while (i > 0) {
        sum += fenwick[i];
        i -= i & -i;
    }
    return sum;
}

// Updates the value of the element at index i in the given Fenwick tree
void update(vector<int>& fenwick, int i, int val) {
    while (i < fenwick.size()) {
        fenwick[i] += val;
        i += i & -i;
    }
}

int main() {
    int n, q;
    cin >> n >> q;

    // Initialize the array and the Fenwick tree
    vector<int> a(n + 1);
    vector<int> fenwick(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        update(fenwick, i, a[i]);
    }

    // Answer the queries using the Fenwick tree
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << get_sum(fenwick, r) - get_sum(fenwick, l - 1) << endl;
    }

    return 0;
}


// In this implementation, we first initialize the array a and the Fenwick tree fenwick by reading the input.
// Then, for each query, we use the get_sum function to calculate the sum of the elements in the given range. 
//The update function is used to update the values in the Fenwick tree whenever an element in the array is changed.

// The get_sum function  is used to calculate the sum of elements from the beginning of the array up to a certain index i. 
//The function takes a single parameter, i, which is the index up to which we want to calculate the sum.

// Here's how the getSum() function works:

// Initialize a variable sum to 0.
// Traverse the Fenwick Tree by starting at index i and moving up the tree until we reach the root (which has index 0).
// At each node, add the value of the node to sum.
// Move to the parent of the current node by flipping the rightmost set bit of the current index (i.e., subtracting the lowest one-bit value).
// Repeat steps 3-4 until we reach the root.
