//{ Driver Code Starts
//Initial Template for javascript

"use strict";

process.stdin.resume();
process.stdin.setEncoding("utf-8");

let inputString = "";
let currentLine = 0;

process.stdin.on("data", (inputStdin) => {
  inputString += inputStdin;
});

process.stdin.on("end", (_) => {
  inputString = inputString
    .trim()
    .split("\n")
    .map((string) => {
      return string.trim();
    });

  main();
});

function readLine() {
  return inputString[currentLine++];
}

/* Function to print an array */
function printArray(arr, size) {
  let i;
  let s = "";
  for (i = 0; i < size; i++) {
    s += arr[i] + " ";
  }
  console.log(s);
}

function main() {
  let t = parseInt(readLine());
  let i = 0;
  for (; i < t; i++) {
    let inputAr = readLine().split(" ").map((x)=>parseInt(x));
    
    let n = inputAr[0];
    let m = inputAr[1];
    let k = inputAr[2];
    let A = new Array(n);
    let B = new Array(m);
    let input_ar1 = readLine().split(" ").map((x) => parseInt(x));
    for(let i = 0;i<n;i++)
      A[i] = input_ar1[i];
    let input_ar2 = readLine().split(" ").map((x) => parseInt(x));
    for(let i = 0;i<m;i++)
      B[i] = input_ar2[i];
  
    let obj = new Solution();
    let res = obj.kthElement(A,B,n,m,k);
    
    console.log(res);

  }
}
// } Driver Code Ends


//User function Template for javascript

/**
 * @param {number[]} A
 * @param {number[]} B
 * @param {number} n
 * @param {number} m
 * @param {number} k
 * @returns {number}
 */

class Solution {
    kthElement(A,B,n,m,k){ 
        //code here
        let cnt = 0;
        let i = 0, j = 0 
        while(i < n && j < m){
            if(A[i] < B[j]){
                cnt++
                if(cnt === k) return A[i]
                i++;
            } else {
                cnt++;
                if(cnt === k) return B[j]
                j++;
            }
        }
            while(i < n){
                cnt++
                if(cnt === k) return A[i]
                i++; 
            }
            while(j < m){
                cnt++;
                if(cnt === k) return B[j]
                j++;                
            }
            return -1;
        
    }
}