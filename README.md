# Graph (Adjacency List) - C++

A graph implementation written from scratch using Modern C++.

This project stores graphs using an adjacency list representation and implements two fundamental graph traversal algorithms:

- Depth First Search (DFS)
- Breadth First Search (BFS)

The goal of this project was to understand how graphs are represented internally and how different traversal strategies work.

---

## Features

- Add Vertex
- Add Edge
- Check if a Vertex Exists
- Check if an Edge Exists
- Prevent Duplicate Edges
- Undirected Graph Representation
- Depth First Search (DFS)
- Breadth First Search (BFS)

---

## Data Structure

The graph is represented using an adjacency list.

```cpp
std::unordered_map<char, std::vector<char>> road;
```

Each key is a vertex.

Each vector stores all neighbouring vertices.

Example

```
A ----- B
|
|
C
```

Stored as

```text
A -> B C
B -> A
C -> A
```

---

## Graph Traversals

### Depth First Search (DFS)

DFS explores one path completely before backtracking.

Example

```
        A
      /   \
     B     C
    / \
   D   E
```

Traversal

```
A → B → D → E → C
```

Implementation details

- Recursive
- Uses an `unordered_set` to prevent revisiting vertices
- Recursion replaces the need for an explicit stack

Complexity

```
Time: O(V + E)
Space: O(V)
```

---

### Breadth First Search (BFS)

BFS explores the graph level by level.

Example

```
        A
      /   \
     B     C
    / \     \
   D   E     F
```

Traversal

```
A → B → C → D → E → F
```

Implementation details

- Uses a queue
- Uses an `unordered_set` for visited vertices
- Processes vertices in the order they are discovered

Complexity

```
Time: O(V + E)
Space: O(V)
```

---

## Operations

### Add Vertex

Creates a new vertex if it does not already exist.

Average Complexity

```
O(1)
```

---

### Add Edge

Creates an undirected edge between two vertices.

Average Complexity

```
O(n)
```

where **n** is the number of neighbours of the source vertex.

---

### Contains Vertex

Checks if a vertex exists.

Average Complexity

```
O(1)
```

---

### Contains Edge

Checks if an edge already exists.

Uses `std::find()` on the adjacency list.

Complexity

```
O(n)
```

---

## Complexity Summary

| Operation | Complexity |
|-----------|------------|
| Add Vertex | Average O(1) |
| Add Edge | O(n) |
| Contains Vertex | Average O(1) |
| Contains Edge | O(n) |
| DFS | O(V + E) |
| BFS | O(V + E) |

---

## Concepts Practiced

- Graph Representation
- Adjacency Lists
- Graph Traversal
- Depth First Search
- Breadth First Search
- Recursion
- Queues
- Hash Maps
- Hash Sets
- STL Algorithms (`std::find`)
- API Design
- Time Complexity Analysis

---

## What I Learned

- Graphs store relationships rather than hierarchy.
- An adjacency list is memory efficient for sparse graphs.
- DFS explores as deep as possible before backtracking.
- BFS explores graphs level by level.
- DFS naturally uses recursion.
- BFS naturally uses a queue.
- `unordered_set` provides efficient visited checks.
- Different data structures are chosen based on the operations an algorithm performs rather than familiarity.

---

## Future Improvements

- Remove Edge
- Remove Vertex
- Connected Components
- Cycle Detection
- Topological Sort
- Dijkstra's Algorithm
- Minimum Spanning Tree
