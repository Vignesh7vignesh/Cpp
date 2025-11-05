#include <vector>
#include <list> // To simulate linked lists for chaining
#include <functional> // For std::hash (basic example)

template <typename T>
class MyHashSet {
private:
    // Underlying array of lists (buckets)
    std::vector<std::list<T> > buckets;
    size_t num_elements;
    size_t capacity;
    const double MAX_LOAD_FACTOR = 0.75; // Threshold for rehashing

    // Simple hash function (for demonstration)
    // In real-world, std::hash<T> would be used or a custom one for user-defined types.
    size_t getHash(const T& val) const {
        return std::hash<T>{}(val) % capacity;
    }

    // Resize and rehash the set
    void rehash() {
        size_t old_capacity = capacity;
        capacity *= 2; // Double the capacity
        std::vector<std::list<T>> new_buckets(capacity);

        // Iterate through old buckets and re-insert elements into new buckets
        for (const auto& bucket : buckets) {
            for (const T& val : bucket) {
                new_buckets[getHash(val)].push_back(val);
            }
        }
        buckets = std::move(new_buckets); // Efficiently move new_buckets to buckets
    }

public:
    // Constructor
    MyHashSet(size_t initial_capacity = 16) :
        capacity(initial_capacity), num_elements(0) {
        buckets.resize(capacity);
    }

    // Insert an element
    bool insert(const T& val) {
        // Check load factor before insertion
        if ((double)(num_elements + 1) / capacity > MAX_LOAD_FACTOR) {
            rehash();
        }

        size_t index = getHash(val);
        // Check if element already exists in the bucket
        for (const T& existing_val : buckets[index]) {
            if (existing_val == val) {
                return false; // Element already present
            }
        }
        buckets[index].push_back(val);
        num_elements++;
        return true; // Element inserted
    }

    // Remove an element
    bool remove(const T& val) {
        size_t index = getHash(val);
        for (auto it = buckets[index].begin(); it != buckets[index].end(); ++it) {
            if (*it == val) {
                buckets[index].erase(it);
                num_elements--;
                return true; // Element removed
            }
        }
        return false; // Element not found
    }

    // Check if an element exists
    bool contains(const T& val) const {
        size_t index = getHash(val);
        for (const T& existing_val : buckets[index]) {
            if (existing_val == val) {
                return true; // Element found
            }
        }
        return false; // Element not found
    }

    size_t size() const {
        return num_elements;
    }

    bool empty() const {
        return num_elements == 0;
    }
};


int main() {
    MyHashSet<int> mySet;
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(10); // Duplicate, won't be added
    mySet.insert(5);
    mySet.insert(25); // Might trigger rehash depending on initial capacity

    std::cout << "Contains 10: " << mySet.contains(10) << std::endl; // Output: 1 (true)
    std::cout << "Contains 30: " << mySet.contains(30) << std::endl; // Output: 0 (false)

    mySet.remove(20);
    std::cout << "Contains 20 after removal: " << mySet.contains(20) << std::endl; // Output: 0 (false)

    std::cout << "Set size: " << mySet.size() << std::endl; // Output: 3 (10, 5, 25)

    return 0;
}

