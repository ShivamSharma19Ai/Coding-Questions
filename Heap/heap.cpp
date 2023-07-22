#include <iostream>
using namespace std;

class heap {
    public:
      int arr[100];
      int size=0;

      void insert(int val){
           size=size+1;
           int index=size;
           arr[index]=val;

           while(index>1){
            int parent=index/2;

            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index=parent;
            }
            else{
                return ;
            }
            
           }
      }

      void deleteFromHeap()
    {
        if (size == 0)
        {
            cout << "nothing to delete" << endl;
            return;
        }

        // put last node element at root node
        arr[1] = arr[size];

        // remove lase node
        size--;

        // put root node at corect position
        int i = 1;

        while (i < size)
        {
            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;

            if (leftIndex < size && arr[i] < arr[leftIndex] && arr[leftIndex] > arr[rightIndex])
            {
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }

            else if (rightIndex < size && arr[i] < arr[rightIndex] && arr[leftIndex] < arr[rightIndex])
            {
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }

            else
            {
                return;
            }
        }
    }
    void heapify(int arr[], int n, int i){
        int largest = i;
        int left = 2*i;
        int right = 2*i+1;

        if(left<n && arr[largest] < arr[left]){
            largest=left;
        }
        if(right<n && arr[largest]<arr[right]){
            largest=right;
        }
        if(largest!=i){
            swap(arr[largest],arr[i]);
            heapify(arr, n, largest);
        }
    }
    void heapSort(int arr[], int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
 
    // One by one extract an element from heap
    for (int i = n - 1; i >= 0; i--) {
        // Move current root to end
        swap(arr[0], arr[i]);
 
        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}
};

int main(){
    return 0;
}