#include <iostream>
#include <memory>

struct CPP_NODE
{
    int data;
    std::shared_ptr<CPP_NODE> next;

    CPP_NODE(int value) : data(value), next(nullptr) {}
};

struct LinkedList
{
    LinkedList() : head(nullptr) {}

    // Function to insert a new node at the beginning of the list
    void insertAtBeginning(int value) {
        std::shared_ptr<CPP_NODE> newNode = std::make_shared<CPP_NODE>(value);
        newNode->next = head;
        head = newNode;
    }

    // Function to display the elements of the list
    void display() {
        std::shared_ptr<CPP_NODE> current = head;
        while (current != nullptr) {
            std::cout << current->data << " -> ";
            current = current->next;
        }
        std::cout << "nullptr" << std::endl;
    }

    // Function to delete a node by its value
    void deleteNode(int value) {
        if (head == nullptr)
            return; // List is empty

        if (head->data == value) {
            head = head->next;
            return;
        }

        std::shared_ptr<CPP_NODE> current = head;
        while (current->next != nullptr) {
            if (current->next->data == value) {
                current->next = current->next->next;
                return;
            }
            current = current->next;
        }
    }

private:
    std::shared_ptr<CPP_NODE> head; // Pointer to the first node in the list
};

typedef struct C_NODE {
  int32_t data;
  struct C_NODE* next;
} C_NODE;

void insertAtEnd(C_NODE** head, int32_t val){

  C_NODE* newNode = (C_NODE*)malloc(sizeof(C_NODE));
  
  newNode->data = val;
  newNode->next = NULL;

  if (*head == NULL) {
    *head = newNode;  // If list is empty, new node becomes head
    return;
  }

  C_NODE* temp = *head;
  while(temp->next != NULL){
    temp = temp->next;
  }

  temp->next = newNode;
}

void insertAtBegin(C_NODE** head, int32_t val){

  C_NODE* newNode = (C_NODE*)malloc(sizeof(C_NODE));
  
  newNode->data = val;
  newNode->next = NULL;

  if (*head == NULL) {
    *head = newNode;  // If list is empty, new node becomes head
    return;
  }

  newNode->next = *head;
  *head = newNode;
}

void deleteVal(C_NODE** head, int32_t val){

  if (*head == NULL) return;

  C_NODE* temp = *head;
  if(temp->data == val){
    *head = temp->next;
    free(temp);
    return;
  }

  while(temp->next != NULL){
    if(temp->next->data == val){
      C_NODE* toDelete = temp->next;
      temp->next = temp->next->next;
      free(toDelete);
      return;
    }
    temp = temp->next;
  }
}

void reverse(C_NODE** head) {
    C_NODE* prev = NULL;
    C_NODE* current = *head;
    C_NODE* next = NULL;

    while (current != NULL) {
        next = current->next;  // Store next node
        current->next = prev;  // Reverse current node's pointer
        prev = current;        // Move prev to this node
        current = next;        // Move to next node
    }
    *head = prev;  // Update head to new first node
}

void sort(C_NODE** head) {
    if (*head == NULL) return;  // Empty list, no need to sort

    int swapped;
    C_NODE* temp;
    C_NODE* last = NULL;

    do {
        swapped = 0;
        temp = *head;

        while (temp->next != last) {
            if (temp->data > temp->next->data) {
                // Swap the data
                int32_t tempData = temp->data;
                temp->data = temp->next->data;
                temp->next->data = tempData;

                swapped = 1;
            }
            temp = temp->next;
        }
        last = temp;
    } while (swapped);
}

void display(C_NODE* head){

  if(head == NULL) {
    printf("%s\n","list empty");
    return;
  }

  while(head != NULL){
    printf("%i ", head->data);
    head = head->next;
  }
}

void clear(C_NODE** head){
  C_NODE* temp;
  while(*head != NULL){
    temp = *head;
    *head = (*head)->next;
    free(temp);
  }
  if(*head == NULL) printf("%s\n","CLEARED");
}

C_NODE* mergeSortedLists(C_NODE* l1, C_NODE* l2) {
    // Create a dummy node to simplify the merge logic
    C_NODE* dummy = (C_NODE*)malloc(sizeof(C_NODE));
    C_NODE* current = dummy;

    // Traverse both lists and merge them
    while (l1 != NULL && l2 != NULL) {
        if (l1->data <= l2->data) {
            current->next = l1;
            l1 = l1->next;
        } else {
            current->next = l2;
            l2 = l2->next;
        }
        current = current->next;
    }

    // If any nodes are left in either list, attach them
    if (l1 != NULL) {
        current->next = l1;
    } else {
        current->next = l2;
    }

    // The merged list starts at the next of the dummy node
    C_NODE* mergedHead = dummy->next;
    free(dummy);  // Free the dummy node
    return mergedHead;
}

int main()
{
  printf("%s\n","C LINKED LIST");
  C_NODE* head = NULL;

  insertAtEnd(&head,2);
  insertAtEnd(&head,3);
  insertAtEnd(&head,4);
  insertAtEnd(&head,5);
  insertAtBegin(&head,6);
  insertAtEnd(&head,69);

  /*deleteVal(&head, 69);*/
  /*deleteVal(&head, 6);*/

  /*reverse(&head);*/
  sort(&head);

  /*clear(&head);*/
  display(head);

  printf("%s\n","");
  printf("%s\n","CPP LINKED LIST");

  LinkedList myList;

  myList.insertAtBeginning(5);
  myList.insertAtBeginning(10);
  myList.insertAtBeginning(15);
  myList.insertAtBeginning(20);

  myList.display(); // Display the list: 20 -> 15 -> 10 -> 5 -> nullptr

  myList.deleteNode(10);

  myList.display(); // Display the list after deleting 10: 20 -> 15 -> 5 -> nullptr
}
