#include <utility>
#include <cstdlib>
#include <string>
#include <iostream>
 
 
#ifndef AF_MIN_HEAP
#define AF_MIN_HEAP
 
using namespace std;
 
class MinHeap{

    public:
        MinHeap();
 
        //Capacity
        int get_num_elements(){return this->num_elements;}
        int last(){return this->num_elements;}
        bool full(){return this->num_elements == MAX_CAPACITY;}
 
        //Inserts and delete
        unsigned int delete_min();
        int insert(pair<string, int> p);
        int set(unsigned int index, pair<string, int> &p);
 
        //Percolate functions
        int percolate_down(unsigned int index);
 
        //parent & child functions
        unsigned int parent(unsigned int i){return i/2;}
        unsigned int right(unsigned int i){return (i*2)+1;}
        unsigned int left(unsigned int i){return (i*2);}
 
        //Getters and Setters
        pair<string, int> get_min();
        pair<string, int> get(unsigned int i){return heap[i];}
		void set_string_at_index(string s, int i){heap[i].first = s;}
		void set_occurances_at_index(int index, int occurances){heap[index].second = occurances;}
        string get_string_at_index(unsigned int i){return heap[i].first;}
        int get_occurances_at_index(unsigned int i){return heap[i].second;}
 
        //Other
        void print();
        void swap(pair<string, int> &a, pair<string, int> &b);
 
    private:
        unsigned int num_elements;
        unsigned int MAX_CAPACITY;
        pair<string, int> heap[16];
 
};

#endif
