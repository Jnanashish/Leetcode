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
        let n = parseInt(readLine());
        let start = new Array(n);
        let end = new Array(n);
        let input_ar1 = readLine().split(' ').map(x=>parseInt(x));
        for(let i=0;i<n;i++)
            start[i] = input_ar1[i];
        let input_ar2 = readLine().split(' ').map(x=>parseInt(x));
        for(let i=0;i<n;i++)
            end[i] = input_ar2[i];
        let obj = new Solution();
        console.log(obj.maxMeetings(start, end, n));
    }
}
// } Driver Code Ends


//User function Template for javascript

/**
 * @param {number[]} start
 * @param {number[]} end
 * @param {number} n
 * @returns {number}
*/

class Solution 
{
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    maxMeetings(start, end, n)
    {
        // code here
        let vec = []
        for(let i = 0; i<n; i++){
            vec.push([start[i], end[i]])
        }
        vec.sort((a,b) =>{ 
            return  (a[1] - b[1])
            
        })
        let ans = 1;
        let curr = vec[0];
        // console.log(vec)
        for(let i = 1; i<n; i++){
            // console.log("CURR", curr, "VEC", vec[i])
            if(vec[i][0] > curr[1]){
                ans++;
                curr[1] = vec[i][1];
            }
        }
        return ans;
        
    }
}