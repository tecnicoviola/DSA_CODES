// //  * * * * * * * * * *
//     * * * *     * * * *
//     * * *         * * *
//     * *             * *
//     *                 *
//     *                 *
//     * *             * *
//     * * *         *  * *
//     * * * *      * * * *
//     * * * * *  * * * * *

#include<iostream>
using namespace std;

int main(){
    
    int n , row ,col, k, p;
    cin>>n;

    // UPPER PYRAMID

    for(int row=1; row<=n; row++){

        //STAR(HALF-PYRAMID)
        for(int col=n; col>=row; col--){
            cout<<"*";
        }

        //SPACE(FULL PYRAMID)
        for(int k=1; k<=2*row; k++){
            cout<<" ";
        }

        //STAR(HALF-PYRAMID)
        for(int p=row; p<=n; p++){
            cout<<"*";
        }
        cout<<endl;
    }  
       for(int row=1; row<=n; row++){

        //STAR(HALF-PYRAMID)
        for(int col=1; col<=row; col++){
            cout<<"*";
        }

        //SPACE(FULL PYRAMID)
        for(int k=n; k>2*row+1; k--){
            cout<<" ";
        }

        //STAR(HALF-PYRAMID)
        for(int p=1; p<=row; p++){
            cout<<"*";
        }
        cout<<endl; 
    }
}
