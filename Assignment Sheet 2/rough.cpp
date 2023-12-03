// Orchards are a piece of enclosed land planted with different fruit trees in an orderly manner. The owners will manage those trees and fulfill all the needs like pesticides, water, fertilizers for a better yielding. 
 
// Ashok and Anand are friends. On a fine day they went to an orchard where lemon and mango trees are planted in rows. The owner planted these trees in rows but in random order. Some trees have plenty of fruits and some other plants didn't give good yield. While they are walking through the rows, both of them selected a row of trees. The trees in the row are represented by M and L which represents mango and lemon respectively. After selecting the rows, they both argued for sometime over the number of fruits. Then they saw Akhil walking towards them. They asked Akhil to declare which row holds more number of fruits. Akhil understood that guessing the row with maximum number of fruits will be quite difficult. 
 
// So he asked to follow the below rules. 
 
// Each time one has to select three trees from the row and form a set out of them, such that no two adjacent trees in the set should be same. 
// Once a tree is selected, they cannot walk back and select another tree. 
// Trees need not to be adjacent for selection. 
// Who ever have the more number of possibilities will be considered as winners. 
// Given two strings denoting the trees in the selected rows, find who is the winner. If the string is invalid, print "Invalid input" and if no one wins, print "Draw". 

// Constraints 
// 1 <= len(str) <= 10^4 
 
// Input 
// First line consists of the string denoting trees in Ashok's row. 
 
// Second line consists of the string denoting trees in Anand's row. 
 
// Output 
// Print the name of the winner in a single line. 
 
// Time Limit (secs) 
// 1 
 
// Examples 
// Example 1 
 
// Input 
 
// MMLMLLM 
 
// LMLLLMLM 
 
// Output 
 
// Anand 
 
// Explanation 

// Ashok's possibilities are (1,3,4), (2,3,4), (3,4,6), (4,6,7), (1,3,7), (3,4,5), (1,5,7), (2,6,7), (2,3,7), (2,5,7), (4,6,7), (1,6,7) ie., 12 possibilities. 
 
// Anand's possibilities are (2,3,6), (1,2,3), (1,6,7), (1,2,4), (3,6,7), (2,3,8), (1,2,5), (2,4,6), (4,6,7), (1,2,7), (2,4,8), (5,6,7), (2,5,6), (2,7,8), (2,5,8), (6,7,8) ie., 16 possibilities. Hence he wins. 
 
// Example 2 
 
// Input 
 
// MLLM 
 
// LMLL 
 
// Output 
 
// Draw 
 
// Explanation 
 
// Ashok's possibilities are (1,3,4), (1,2,4) ie., 2 possibilities. 
 
// Anand's possibilities are (1,2,4), (1,2,3) ie., 2 possibilities. 
 
// So no one wins and we print draw.

#include<iostream>
#include<vector>
#include<string>
using namespace std;

int f(int ind, char prev, string &str, string &ds, vector<vector<vector<int>>> &dp){
    if(ds.size() == 3)
        return 1;
    
    if(ind == str.size())
        return 0;

    int c, size = ds.size();
    if(prev == 'a')
        c = 0;
    else
        c = (prev == 'L') ? 1 : 2;
    
    if(dp[ind][c][size] != -1)
        return dp[ind][c][size];

    char curr = str[ind];
    int pick = 0, notPick = 0;
    if(curr  != prev){
        ds.push_back(curr);
        pick = f(ind + 1, curr, str, ds, dp);
        ds.pop_back();
    }

    notPick = f(ind + 1, prev, str, ds, dp);
    return dp[ind][c][size] = pick + notPick;
}

int findPoss(string &str){
    vector<vector<vector<int>>> dp(str.size(), vector<vector<int>>(3, vector<int>(3, -1)));  // 0 = a, 1 = l, 2 = M
    string ds;
    return f(0, 'a', str, ds, dp);
}

int main(){
    string ash = "MMLMLLM";
    string anand = "LMLLLMLM";
    int as = findPoss(ash);
    int an = findPoss(anand);
    cout << "Ashok has " << as << " possibilities" << endl;
    cout << "Anand has " << an << " possibilities" << endl;
    if(as>an)
        cout << "Winner is Ashok" << endl;
    else if(as<an)
        cout << "Winner is Anand" << endl;
    else
        cout << "Its a Draw!" << endl;

    return 0;
}