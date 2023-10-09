<h2><a href="https://leetcode.com/problems/distribute-repeating-integers/"><div id="big-omega-company-tags"><div id="big-omega-topbar"><div class="companyTagsContainer" style="overflow-x: scroll; flex-wrap: nowrap;"><div class="companyTagsContainer--tag">No companies found for this problem</div></div><div class="companyTagsContainer--chevron"><div><svg version="1.1" id="icon" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px" viewBox="0 0 32 32" fill="#4087F1" xml:space="preserve" style="width: 20px;"><polygon points="16,22 6,12 7.4,10.6 16,19.2 24.6,10.6 26,12 "></polygon><rect id="_x3C_Transparent_Rectangle_x3E_" class="st0" fill="none" width="32" height="32"></rect></svg></div></div></div></div>1655. Distribute Repeating Integers</a></h2><h3>Hard</h3><hr><div><p>You are given an array of <code>n</code> integers, <code>nums</code>, where there are at most <code>50</code> unique values in the array. You are also given an array of <code>m</code> customer order quantities, <code>quantity</code>, where <code>quantity[i]</code> is the amount of integers the <code>i<sup>th</sup></code> customer ordered. Determine if it is possible to distribute <code>nums</code> such that:</p>

<ul>
	<li>The <code>i<sup>th</sup></code> customer gets <strong>exactly</strong> <code>quantity[i]</code> integers,</li>
	<li>The integers the <code>i<sup>th</sup></code> customer gets are <strong>all equal</strong>, and</li>
	<li>Every customer is satisfied.</li>
</ul>

<p>Return <code>true</code><em> if it is possible to distribute </em><code>nums</code><em> according to the above conditions</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [1,2,3,4], quantity = [2]
<strong>Output:</strong> false
<strong>Explanation:</strong> The 0<sup>th</sup> customer cannot be given two different integers.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [1,2,3,3], quantity = [2]
<strong>Output:</strong> true
<strong>Explanation:</strong> The 0<sup>th</sup> customer is given [3,3]. The integers [1,2] are not used.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> nums = [1,1,2,2], quantity = [2,2]
<strong>Output:</strong> true
<strong>Explanation:</strong> The 0<sup>th</sup> customer is given [1,1], and the 1st customer is given [2,2].
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == nums.length</code></li>
	<li><code>1 &lt;= n &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= nums[i] &lt;= 1000</code></li>
	<li><code>m == quantity.length</code></li>
	<li><code>1 &lt;= m &lt;= 10</code></li>
	<li><code>1 &lt;= quantity[i] &lt;= 10<sup>5</sup></code></li>
	<li>There are at most <code>50</code> unique values in <code>nums</code>.</li>
</ul>
</div>