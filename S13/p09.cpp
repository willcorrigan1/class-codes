#include<iostream> 
#include<fstream> 
using namespace std; 

int main(){ 
    ifstream infile("p09-in.txt");
    ofstream outfile("p09-out.txt");
    int studentCount; 
    infile >> studentCount; 
    for(int i = 0; i < studentCount; i++) { 
        int numOfCourses; 
        infile >> numOfCourses; 
        double sum = 0; 
        for(int j = 0; j < numOfCourses; j++) { 
            double grade; 
            infile >> grade; 
            sum += grade;
        }
        double average = sum / numOfCourses; 
        outfile << average << endl; 
    }
}