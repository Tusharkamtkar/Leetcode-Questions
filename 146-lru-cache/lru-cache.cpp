class LRUCache {
public:

    struct Node{

        int key;
        int val;

        Node* next;
        Node* prev;

        Node(int k, int v):

            key(k),
            val(v),
            next(nullptr),
            prev(nullptr){}  
    };

    unordered_map<int, Node*> mpp;

    int capa;

    Node* head = new Node(-1, -1);
    Node* tail = new Node(-1, -1);

    void deleteNode(Node* node){

        Node* prevNode = node->prev;
        Node* nextNode = node->next;

        prevNode->next = nextNode;
        nextNode->prev = prevNode;
    }

    void insertAfterHead(Node* node){

        Node* currNextHead = head->next;

        head->next = node;

        node->next = currNextHead;
        currNextHead->prev = node;
        node->prev = head;
    }

    LRUCache(int capacity) {

        capa = capacity;

        head->next = tail;
        tail->prev = head;

    }
    
    int get(int key) {
        
        if(mpp.find(key) == mpp.end()){
            return -1;
        }

        Node* node = mpp[key];

        deleteNode(node);
        insertAfterHead(node);

        return node->val;
    }
    
    void put(int key, int value) { // no need to change anything in map
        
        if(mpp.find(key) != mpp.end()){

            Node* node = mpp[key];

            node->val = value;

            deleteNode(node);
            insertAfterHead(node);
            return;
        }
        else{

            if(mpp.size() == capa){

                Node* node = tail->prev;

                mpp.erase(node->key);

                deleteNode(node);
            }

            Node* node = new Node(key, value);


            insertAfterHead(node);
            mpp[key] = head->next;
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */