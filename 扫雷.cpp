#include<iostream>
#include<string>
using namespace std;
int dx[]={-1,-1,-1,0,0,1,1,1};
int dy[]={-1,0,1,-1,1,-1,0,1};
int main (){
    int rows,cols;
    cin>>rows>>cols;
    char** L=new char* [rows];
    for(int c=0;c<rows;c++){
        L[c]=new char[cols+1];
        cin>>L[c];
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(L[i][j]=='*'){
                cout<<'*';
            }else{
                int count=0;
                for(int m=0;m<8;m++){
                    int x=i+dx[m];
                    int y=j+dy[m];
                    if(x>=0&&x<rows&&y>=0&&y<cols){
                        if(L[x][y]=='*'){
                            count++;
                        }
                    }
                }
                cout<<count;
            }
        }
        cout<<endl;
    }
    for(int i=0;i<rows;i++){
        delete[]L[i];
    }
    delete[] L;
    return 0;

}
