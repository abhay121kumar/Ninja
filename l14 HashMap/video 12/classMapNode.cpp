template<typename V>
class MapNode{
    public:
    string key;
    V value;
    MapNode* next;

    MapNode(string key,V value){
        this->key = key;
        this->value = value;
        next = NULL;
    }

    ~MapNode(){
        delete next;
    }
};