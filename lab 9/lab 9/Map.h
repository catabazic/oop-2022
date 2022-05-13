#pragma once
#include <iostream> 

template <typename K, typename V>
struct pair;
template <typename K, typename V>
class Map;


template <typename K, typename V>
class Iterator {
  public:
    pair<K, V> *p;
    int cont;

    struct m {
        K key;
        V value;
        int index;
    };

    Iterator(int n, pair<K,V>*d) : cont(n) {
        p = d;
    }

    bool operator!=(const Iterator& other) {
        return cont != other.cont;
    }

    Iterator& operator++() {
        cont++;
        p++;
        return *this;
    }

    m operator*() {
        return {p->first,p->second,cont};
    }
};

template <typename K, typename V>
struct pair {
    K first;
    V second ;
};


template<typename K, typename V>
class Map {
    pair<K, V> p[100];
    int cont;

  public:
    
    Map();
    Iterator<K,V> begin();
    Iterator<K,V> end();


    V& operator[](K);
    void Set(const K& key, V& value);
    bool Get(const K& key, V& value);
    int Count();
    void Clear();
    bool Delete(const K& key);
    bool Includes(const Map<K, V>& map);


};

template <typename K, typename V>
Map<K, V>::Map() {
    this->cont = 0;
}

template <typename K, typename V>
Iterator<K, V> Map<K, V>::begin() {
    return Iterator(0, &p[0]);
}

template <typename K, typename V>
Iterator<K, V> Map<K, V>::end() {
    return Iterator(cont, &p[cont]);
}

template <typename K, typename V>
V& Map<K, V>::operator[](K key) {
    for (int i = 0; i < cont; i++) {
        if (this->p[i].first == key) {
            return this->p[i].second;
        }
    }
    this->p[cont].first = key;
    this->cont++;
    return this->p[cont - 1].second;
}

template <typename K, typename V>
void Map<K, V>::Set(const K& key, V& value) {
    this->p[cont]->first  = key;
    this->p[cont]->second = value;
    this->cont++;
}

template <typename K, typename V>
bool Map<K, V>::Get(const K& key, V& value) {
    for (int i = 0; i < cont; i++) {
        if (this->p[i]->first == key) {
            this->p[i]->secont = value;
            return true;
        }
    }
    return false;
}

template <typename K, typename V>
int Map<K, V>::Count() {
    return this->cont;
}

template <typename K, typename V>
void Map<K, V>::Clear() {
    for (int i = 0; i < cont; i++) {
        this->p[i]->first  = NULL;
        this->p[i]->secont = NULL;
    }
    this->cont = 0;
}

template <typename K, typename V>
bool Map<K, V>::Delete(const K& key) {
    int j = -1;
    for (int i = 0; i <= cont; i++) {
        j++;
        if (this->p[j]->first == key) {
            break;
        }
    }
    if (j == cont)
        return false;
    this->p[j]->first  = NULL;
    this->p[j]->secont = NULL;
    this->cont--;
    return true;
}

template <typename K, typename V>
inline bool Map<K, V>::Includes(const Map<K, V>& map) {
    if (this->contor < map.cont) {
        return false;
    } else {
        int nr=0;
        K vect[map->cont];
        bool ok = true;
        for (int i = 0; i < cont; i++) {
            for (int j = 0; i < map.cont; i++) {
                if (p[i]->first == map.p[j]->first) {
                    for (int m = 0; m < nr; m++) {
                        if (vect[m] == p[i]->first) {
                            ok = false;
                            break;
                        }
                    }
                    if (ok == true) {
                        vect[nr] = p[i]->first;
                        nr++;
                        if (nr == map->cont) {
                            return true;
                        }
                        break;
                    } else {
                        ok = true;
                    }                        
                }
            }
        }
    }
    return false;
}

