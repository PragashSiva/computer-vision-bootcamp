
#ifndef FOO_H_INCLUDED
#define FOO_H_INCLUDED


class merge_sort{
public:

    merge_sort(int* array);

    int* merge(int* array);
    void print(int* array);

private:
     int* array;

};

#endif // FOO_H_INCLUDED