#include <iostream>
using namespace std;

int main(){

    /*1
        *****
        *****
        *****
        *****
        ***** and similar patterns row = col = n
    */

    // int n;
    // cin >> n;

    // int i = 0;

    // while(i < n){
    //     int j = 0;
    //     while(j < n){
    //         cout << "*";
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }


    /*2
        111
        222
        333 and similar
    */

    // int n;
    // cin >> n;

    // int i = 0;
    // while(i < n){
    //     int j = 0; //if j = i then triagular pattern arises
    //     while(j < n){
    //         cout << i + 1;
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1; 
    // }

    /*3
        1234
        1234 
        1234
        1234 
    */

    // int n;
    // cin >> n;

    // int i = 0;
    // while(i < n){
    //     int j = 0;
    //     while(j < n){
    //         cout << j + 1;
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }


    /*3
        4321
        4321
        4321
        4321
    */

    // int n;
    // cin >> n;

    // int i = 1;
    // while(i <= n){
    //     int j = 1;
    //     while(j <= n){
    //         cout << n - j + 1;
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }    


    /*4
        123
        456
        789
    */

    // int n;
    // cin >> n;
    
    // int i = 1;
    // int count = 1;
    // while(i <= n){
    //     int j = 1;
    //     while(j <= n){
    //         cout << count << " ";
    //         count = count + 1;
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }



    /*5
        *
        **
        ***
        ****
    */

    // int n;
    // cin >> n;

    // int row;

    // while(row <= n){
    //     int col = 1;
    //     while(col <= row){
    //         cout << "*";
    //         col = col + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }



    /*6
        1
        22
        333
        4444
    */

    // int n;
    // cin >> n;

    // int row = 1;
    // while(row <= n){
    //     int j = 1;
    //     while(j <= row){
    //         cout << row;
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }


    /*7
        1
        2 3
        4 5 6
        7 8 9 10   
    */

    // int n;
    // cin >> n;int n;
    // cin >> n;

    // int i = 1;
    // int count = 1;
    // while(i <= n){        
    //     int j = 1;
    //     while(j <= i){
    //         cout << count << " ";
    //         j = j + 1;
    //         count = count + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }


    /*8
        1
        23
        345
        4567
    */

    // int n;
    // cin >> n;

    // int i = 1;
    // while(i <= n){
    //     int j = 1;
    //     int count = i;
    //     while(j <= i){
    //         cout << count << " ";
    //         count = count + 1;
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }

    // without using count

    // int i = 1;
    // while(i <= n){
    //     int j = 1;
    //     while(j <= i){
    //         cout << j + i - 1 << " ";
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }


    /*9
        1
        21
        321
        4321
    */

    // int n;
    // cin >> n;
    // int i = 1;
    // while(i <= n){
    //     int j = 1;
    //     int count = i;
    //     while(j <= i){
    //         cout << count << " ";
    //         j = j + 1;
    //         count = count - 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }

    // int n;
    // cin >> n;
    // int i = 1;
    // while(i <= n){
    //     int j = 1;
    //     while(j <= i){
    //         cout << i - j + 1 << " ";
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }



    /*10
        AAA
        BBB
        CCC
    */

    // int n;
    // cin >> n;

    // int i = 1;
    // while(i <= n){
    //     int j = 1;
    //     char ch = 'A' + i - 1;
    //     while(j <= n){
    //         cout << ch;
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }


    /*11
        ABC
        ABC
        ABC
    */

    // int n;
    // cin >> n;

    // int i = 1;
    // while(i <= n){
    //     int j = 1;
    //     while(j <= n){
    //         char ch = 'A' + j - 1;
    //         cout << ch;
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }



    /*12
        ABC
        BCD
        CDE
    */

    // int n;
    // cin >> n;

    // int i = 1;
    // while(i <= n){
    //     int j = 1;       
    //     while(j <= n){
    //         char ch = 'A' + i + j - 2;
    //         cout << ch;
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }



    /*13
        A
        BB
        CCC
    */

    // int n;
    // cin >> n;

    // int i = 1;
    // while (i <= n){
    //     int j = 1;
    //     // char ch = 'A' + i - 1;
    //     while(j <= i){
    //         cout << (char)('A' + i - 1);
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }


    /*14
        A
        BC
        DEF
        GHIJ
    */

    // int n;
    // cin >> n;

    // int i = 1;
    // char ch = 'A';
    // while(i <= n){
    //     int j = 1;
    //     while(j <= i){
    //         cout << ch;
    //         ch = ch + 1;
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;   
    // }

    
    /*15
        A
        BC
        CDE
        DEFG
    */

    // int n;
    // cin >> n;

    // int i = 1;
    // while(i <= n){
    //     int j = 1;
    //     while(j <= i){
    //         char ch = 'A' + i + j - 2;
    //         cout << ch;
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }


    /*16
        D
        CD
        BCD
        ABCD
    */

    // int n;
    // cin >> n;

    // int i = 1;
    // while(i <= n){
    //     int j = 1;       //a start ch can be used here as char ch = 'A' + n - i;
    //     while(j <= i){
    //         char ch = 'A' + n - i + j - 1;  //then this need not be done as we can simply increment ch by ch + 1 for every 'j' iteration or column iteration
    //         cout << ch;
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }



    /*17
           *
          ** 
         ***
        ****
    */

    
    // int n;
    // cin >> n;

    // int i = 1;
    // while (i <= n){
    //     int j = n;
    //     while(j > 0){        // or while (j)
    //         if(j > i){
    //             cout << " ";
    //         }
    //         else if(j <= i){
    //             cout << "*";
    //         }
    //         j = j - 1;
    //     }    
    //     cout << endl;
    //     i = i + 1;
    // }

    //or

    // int n;
    // cin >> n;
    // int i = 1;
    // while(i <= n){
    //     int space = n - i;
    //     while(space){
    //         cout << " ";
    //         space = space - 1;
    //     }

    //     int j = i;
    //     while(j){
    //         cout << "*";
    //         j = j - 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }


    /*18
        xxxx
        xxx
        xx
        x
    */

    // int n;
    // cin >> n;

    // int i = 1;
    // while(i <= n){
    //     int j = 1;
    //     while(j <= n - i + 1){
    //         cout << "x";
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }


    /*19
        xxxx
         xxx
          xx
           x
    */

    // int n;
    // cin >> n;

    // int i = 1;
    // while(i <= n){
    //     int j = n - i + 1;
    //     int k = i - 1;
    //     while(k){
    //         cout << " ";
    //         k = k - 1;
    //     }
    //     while(j){
    //         cout << "x";
    //         j = j - 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }


    /*20
        1111
         222
          33
           4
    */

    // int n;
    // cin >> n;
    // int i = 1;
    // while(i <= n){
    //     int j = n - i + 1;
    //     int k = i - 1;
    //     while(k){
    //         cout << " ";
    //         k = k - 1;
    //     }
    //     while (j){ 
    //         cout << i;
    //         j = j - 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }


    /*21
           1
          22
         333
        4444
    */

    // int n;
    // cin >> n;

    // int i = 1;
    // while(i <= n){
    //     int j = 1;
    //     while(j <= n){
    //         if(j <= n - i){
    //             cout << " ";
    //         }
    //         else {
    //             cout << i;
    //         }
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }


    /*22
        1234
         234
          34
           4
    */

    // int n;
    // cin >> n;

    // int i = 1;
    // while(i <= n){
    //     int j = n - i + 1;
    //     int k = i - 1;
    //     while(k){
    //         cout << " ";
    //         k = k - 1;
    //     }
    //     while(j){
    //         cout << n - j + 1;
    //         j = j - 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }


    /*23
               1
             2 3 
           4 5 6
         7 8 9 10
    
    */

    // int n;
    // cin >> n;

    // int i = 1;
    // int count = 1;
    // while(i <= n){
    //     int j = 1;
    //     int k = 1;
    //     while(k <= n - i){
    //         cout << " ";
    //         k = k + 1;
    //     }
    //     while(j <= i){
    //         cout << count << " ";
    //         count = count + 1;
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;      
    // }


    /*24
              1
            1 2 1
          1 2 3 2 1
        1 2 3 4 3 2 1
    */

    //my code more lines of code, one loop less

    // int n;
    // cin >> n;

    // int i = 1;
    // while(i <= n){       
    //     int k = n - i;
    //     while(k){
    //         cout << "  "; //two spaces;
    //         k = k - 1;
    //     }
    //     int j = 1;
    //     int l = 2*i - 1;
    //     while(l){
    //         if(l >= i){
    //             cout << j << " ";
    //             j = j + 1;
    //         }
    //         else {
    //             cout << l << " ";
    //         }
    //         l = l - 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // } 

    //Sir's sol

    // int n;
    // cin >> n;
    // int i = 1;
    // while(i <= n){
    //     int j = 1, space = 1;
    //     while(space <= n - i){
    //         cout << "  ";
    //         space = space + 1;
    //     }
    //     while (j <= i){
    //         cout << j << " ";
    //         j = j + 1;
    //     }
    //     j = i - 1;
    //     while(j >= 1){
    //         cout << j << " ";
    //         j = j - 1;
    //     }
    //     i = i + 1;
    //     cout << endl;
    // }


    /*25
        1 2 3 4 5 5 4 3 2 1
        1 2 3 4 * * 4 3 2 1
        1 2 3 * * * * 3 2 1
        1 2 * * * * * * 2 1
        1 * * * * * * * * 1
    */

    // int n;
    // cin >> n;

    // int i = 1;
    // while(i <= n){
    //     int j = 1;
    //     while(j <= n - i + 1){
    //         cout << j << " ";
    //         j = j + 1;
    //     }
    //     int star = 1;
    //     while(star <= 2*i - 2){
    //         cout << "* ";
    //         star = star + 1;
    //     }
    //     j = j - 1;
    //     while(j > 0){
    //         cout << j << " ";
    //         j = j - 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }

    /*26.
            *
           * *
          * * *
         * * * *
        * * * * *
    */
    int n;
    cin >> n;

    int i = 1;
    while(i <= n){
        int k = n - i;
        while(k){
            cout << " ";
            k = k - 1;
        }
        int j = 1;
        while(j <= i){
            cout <<  "* ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
        }
}   