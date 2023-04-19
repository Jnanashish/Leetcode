//{ Driver Code Starts
//Initial Template for javascript


'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();    
});

function readLine() {
    return inputString[currentLine++];
}


function main() {
    let t = parseInt(readLine());
    let i = 0;
    for(;i<t;i++)
    {
        
        let N = parseInt(readLine());
        let obj = new Solution();
        let res = obj.factorial(N);
        let s = "";
        for(let it of res){
            s+=it;
        }
        console.log(s);
    }
}

// } Driver Code Ends


//User function Template for javascript

/**
 * @param {number} N
 * @return {number[]}
*/

function multiply(x, res, res_size){
    let carry = 0;
    
    for(let i = 0; i<res_size; i++){
        let prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry = Math.floor(prod/10);
    }
    while(carry){
        res[res_size++] = carry%10;
        carry = Math.floor(carry/10)
    }
    return res_size;
}

class Solution {
    factorial(N){
       //code here
       let res = new Array(1000);
       let res_size = 1;
       res[0] = 1;
       
       for(let i = 2; i<=N; i++){
           res_size = multiply(i, res, res_size);
       }
       let ans = []
       for(let i = res_size-1; i>=0; i--){
            ans.push(res[i]);
       }
       return ans;
    }
}
