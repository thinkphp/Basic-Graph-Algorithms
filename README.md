# Basic Graph Algorithms

* 1) Introduction and history
* 2) Why Study Graphs
* 3) Storing Graphs
* 4) Graph Traversal
* 5) Topological Sort


* 1) An abstract way of representing connectivity using nodes (also called vertices) and edges.
   We will label the nodes from 1 to n.
   m edges connect some pairs of nodes. Edges can be either one-directional or bidirectional.
   Nodes and Edges can have some auxiliary information.
   
   A graph is a collection of pairs-pairs integers, pairs of people, pairs of cities, pairs of stars, pairs of countries
   pairs of scientific papers, pairs of web pages, pairs of game positions, pairs of recursive subproblems, even pairs of graphs.
   
  
  
* 2) Lots of problems formulated and solved in terms of Graphs

       * Shortest path problems.
       * Network flow problems.
       * Matching problems.
       * 2-SAT problem.
       * Graph coloring problem.
       * Traveling salesman problem ( still unsolved)
       * and many more.
   
 3) Need to store both the set of nodes V and the set of edges E
 
       * nodes can be store in an array.
       * edges must be stored in some other way.    
        
       Want to support operations such as:
        
       * retrieving all edges incident to a particular node.
       * testing if given two nodes are directy connected.
       
         Use either Adjacency Matrix or adjacency list to store the edges.
         
         Adjacency Matrix: An easy way to store connectivity information.
         
          
         
         Adjacency List

  4) Graph Traversal
  
       * The most basic graph algorithm that visits the nodes of a graph in a certain order. 
       * Used as a subroutine in many other algorithms.

       We will cover two algorithms:
       * Depth First Search: uses recursion Stack.
       * Breadth First Search: uses queue.
