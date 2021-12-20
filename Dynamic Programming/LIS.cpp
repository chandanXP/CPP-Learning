 #include <iostream>
using namespace std;

int LIS(int input[], int size){
    int *table= new int[size];//look up table to store solution of subproblems
    table[0] =1;//minimum longest sequence is 1
    for(int i=1; i<size; ++i){
        table[i]=1;//initially we consider it to be equals to 1
        for(int j =i-1; j>0;--j){
            if(input[i]< input[j]){//if ith indexed value is smaller the skip that iteration
                continue;
            }
            int greater_sequence = table[j]+1;//previous value +1
            if(greater_sequence>table[i]){//if the value is greater than the table[i](previous) value the, update it
                table[i]= greater_sequence;
            }
        }   
    }
    int best=0;
    for(int i=0; i<size; ++i){//finding greatest in array
        if(table[i]>best){
            best = table[i];
        }
    }
    delete []table;//delete
    return best;
}

int main()
{
    //find longest common sequence: 4  3  7  13 5 18 8
    int size;
    cin>>size;
    int *input = new int[size];
    for(int i=0; i<size; ++i)
        cin>>input[i];
    int res =LIS(input , size);
    cout<<res;

    return 0;
}
