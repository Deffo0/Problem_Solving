#include <bits/stdc++.h>
using namespace std;

template <class T> class Sorter{
public:
    virtual void sort(T arr[], int n) = 0;
};

template <class T> class Merge : public Sorter<T>
{
public:
    void sort(T array[], int n){
        sort(array,0,n - 1);
    }

private:
    void sort(T unsortedElements[], int start, int end) {
        if(start >= end)
            return;
        int middle = (start + end) / 2;

        sort(unsortedElements, start, middle);
        sort(unsortedElements, middle + 1, end);
        merge(unsortedElements, start, middle, end);

    }
    void merge(T array[], int start, int middle, int end){
        T tempArr[end - start + 1];
        int tempCtr = 0;
        int index1 = start;
        int index2 = middle + 1;
        while(index1 <= middle && index2 <= end){
            if((array[index1].total_grade - array[index2].total_grade) > 10){
                tempArr[tempCtr] = array[index1];
                tempCtr++;
                index1++;
            }
            else if ((array[index2].total_grade - array[index1].total_grade) > 10){
                tempArr[tempCtr] = array[index2];
                tempCtr++;
                index2++;
            }
            else if (array[index1].name + array[index2].name < array[index2].name + array[index1].name){
                tempArr[tempCtr] = array[index1];
                tempCtr++;
                index1++;
            }else if (array[index2].name + array[index1].name < array[index1].name + array[index2].name){
                tempArr[tempCtr] = array[index2];
                tempCtr++;
                index2++;
            }
        }
        for(int i = index2; i <= end; i++){
            tempArr[tempCtr] = array[i];
            tempCtr++;
        }
        for(int i = index1; i <= middle; i++){
            tempArr[tempCtr] = array[i];
            tempCtr++;
        }

        int tempIndex = 0;
        for(int i = start; i <= end; i++){
            array[i] = tempArr[tempIndex];
            tempIndex++;
        }
    }
};
struct Student {
    string name;
    int total_grade;
    int arabic_grade;
    int maths_grade;
    int science_grade;
    int english_grade;
};

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    int input;
    cin >> input;
    Student students[input];

    for (int i = 0; i < input; ++i) {
        cin >> students[i].name >> students[i].arabic_grade >> students[i].maths_grade >> students[i].science_grade >> students[i].english_grade;
        students[i].total_grade = students[i].arabic_grade + students[i].maths_grade + students[i].science_grade + students[i].english_grade;
    }
    Merge<Student> sorter;
    sorter.sort(students, input);
    for (int i = 0; i < input; ++i) {
        cout << students[i].name << " " << students[i].total_grade << " " << students[i].arabic_grade << " "  << students[i].maths_grade << " " << students[i].science_grade << " " << students[i].english_grade << endl;
    }

}