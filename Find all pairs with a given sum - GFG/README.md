# Find all pairs with a given sum
## Easy 
<div class="problem-statement">
                <p><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank"></a></p><div style="margin: 14px 0px !important;" class="row"><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank">             <div class="col-md-12" style="cursor:pointer;background: #EFF8F3 0% 0% no-repeat padding-box; display: flex; align-items: center; position:                 relative; padding: 1.5%; border-radius: 10px; display: inline-block; text-align: center; font-weight: 600; color: #333"> <img src="https://media.geeksforgeeks.org/img-practice/gcs2022thumbnail-1649059370.png" alt="Lamp" width="46" height="40" style="background: transparent 0% 0% no-repeat padding-box;opacity: 1; margin: 0 16px;" class="img-responsive"> Geeks Summer Carnival is LIVE NOW &nbsp; <i class="fa fa-external-link" aria-hidden="true"></i> </div></a></div><p><span style="font-size:18px">Given two unsorted arrays <strong>A</strong> of size <strong>N</strong> and <strong>B</strong> of size <strong>M</strong> of distinct elements, the task is to find all pairs from both arrays whose sum is equal to <strong>X</strong>.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
A[] = {1, 2, 4, 5, 7}
B[] = {5, 6, 3, 4, 8} 
X = 9 
<strong>Output: 
</strong>1 8
4 5 
5 4
<strong>Explanation:</strong>
(1, 8), (4, 5), (5, 4) are the
pairs which sum to 9.</span>
</pre>

<div><span style="font-size:18px"><strong>Example 2:</strong></span></div>

<pre><span style="font-size:18px"><strong>Input:</strong>
A[] = {-1, -2, 4, -6, 5, 7}
B[] = {6, 3, 4, 0} 
X = 8 
<strong>Output:</strong>
4 4 
5 3</span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>allPairs()</strong>&nbsp;which takes the array <strong>A[]</strong>,<strong> B[]</strong>, its size <strong>N </strong>and <strong>M </strong>respectively<strong> </strong>and<strong> </strong>an integer <strong>X&nbsp;</strong>as inputs and returns the sorted vector pair values of all the pairs u,v&nbsp;where u&nbsp;belongs to array&nbsp;A and v&nbsp;belongs to array B. If no such pair exist return empty vector pair.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(NLog(N))<br>
<strong>Expected Auxiliary Space:</strong> O(N)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N, M&nbsp;≤ 10<sup>6</sup><br>
-10<sup>6</sup> ≤ X, A[i], B[i] ≤ 10<sup>6</sup></span></p>
 <p></p>
            </div>