class MyHashMap {
   private:
    static const int SIZE = 1000001;
    int data[SIZE];
    bool initialized[SIZE];
   public:
    MyHashMap() 
    {
        fill(initialized, initialized + SIZE, false);
        fill(data, data + SIZE, -1);
    }
    void put(int key, int value) 
    {
        if (key >= 0 && key < SIZE) 
        {
            data[key] = value;
            initialized[key] = true;
        }
    }
    int get(int key) 
    {
        if (key >= 0 && key < SIZE && initialized[key]) 
        {
            return data[key];
        }
        return -1;
    }
    void remove(int key) 
    {
        if (key >= 0 && key < SIZE) 
        {
            initialized[key] = false;
        }
    }
};