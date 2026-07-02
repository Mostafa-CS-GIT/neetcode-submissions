class MyHashSet 
{
private:
    bool arr[1000001]; 
public:
    MyHashSet() 
    {
        fill(begin(arr), end(arr), false);
    }
    void add(int key) 
    {
        if (key >= 0 && key <= 1000000) 
        {
            arr[key] = true;
        }
    }
    void remove(int key) {
        if (key >= 0 && key <= 1000000) 
        {
            arr[key] = false;
        }
    }
    bool contains(int key) {
        if (key >= 0 && key <= 1000000) 
        {
            return arr[key];
        }
        return false;
    }
};