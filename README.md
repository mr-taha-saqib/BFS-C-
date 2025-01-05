# Connected Components for Undirected Graph using BFS

This README provides an overview of how to find connected components in an undirected graph using Breadth-First Search (BFS).

## Overview

Finding connected components in an undirected graph is a straightforward process. The goal is to identify all groups of vertices in the graph where every pair of vertices in the same group is connected (directly or indirectly) through edges. BFS can be utilized to achieve this efficiently.

## Steps to Implement

1. **Initialize all vertices as not visited.**  
   Create a boolean array to keep track of whether each vertex has been visited.

2. **Iterate through all vertices:**  
   For each vertex `v`:
   - If `v` is not visited, do the following:
     - Call the BFS procedure.
     - Print a newline character (`\n`) to separate components, ensuring that each connected component is displayed on a new line.

3. **Mark the current vertex as visited:**  
   As part of the BFS traversal, mark vertex `v` as visited and print it.

4. **Explore adjacent vertices:**  
   For every adjacent vertex `u` of the current vertex `v`:
   - If `u` has not been visited, call the BFS procedure for `u`.
