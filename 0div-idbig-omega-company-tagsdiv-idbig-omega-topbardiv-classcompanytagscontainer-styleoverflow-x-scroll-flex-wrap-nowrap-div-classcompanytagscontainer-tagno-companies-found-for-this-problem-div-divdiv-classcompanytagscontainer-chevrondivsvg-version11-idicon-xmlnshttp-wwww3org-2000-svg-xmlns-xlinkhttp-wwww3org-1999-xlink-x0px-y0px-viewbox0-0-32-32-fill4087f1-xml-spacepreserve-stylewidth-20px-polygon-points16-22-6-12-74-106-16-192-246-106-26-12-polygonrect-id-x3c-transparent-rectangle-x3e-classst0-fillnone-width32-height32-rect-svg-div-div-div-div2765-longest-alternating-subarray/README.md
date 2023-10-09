<h2><a href="https://leetcode.com/problems/longest-alternating-subarray/"><div id="big-omega-company-tags"><div id="big-omega-topbar"><div class="companyTagsContainer" style="overflow-x: scroll; flex-wrap: nowrap;"><div class="companyTagsContainer--tag">No companies found for this problem</div></div><div class="companyTagsContainer--chevron"><div><svg version="1.1" id="icon" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px" viewBox="0 0 32 32" fill="#4087F1" xml:space="preserve" style="width: 20px;"><polygon points="16,22 6,12 7.4,10.6 16,19.2 24.6,10.6 26,12 "></polygon><rect id="_x3C_Transparent_Rectangle_x3E_" class="st0" fill="none" width="32" height="32"></rect></svg></div></div></div></div>2765. Longest Alternating Subarray</a></h2><h3>Easy</h3><hr><div><p>You are given a <strong>0-indexed</strong> integer array <code>nums</code>. A subarray <code>s</code> of length <code>m</code> is called <strong>alternating</strong> if:</p>

<ul>
	<li><code>m</code> is greater than <code>1</code>.</li>
	<li><code>s<sub>1</sub> = s<sub>0</sub> + 1</code>.</li>
	<li>The <strong>0-indexed</strong> subarray <code>s</code> looks like <code>[s<sub>0</sub>, s<sub>1</sub>, s<sub>0</sub>, s<sub>1</sub>,...,s<sub>(m-1) % 2</sub>]</code>. In other words, <code>s<sub>1</sub> - s<sub>0</sub> = 1</code>, <code>s<sub>2</sub> - s<sub>1</sub> = -1</code>, <code>s<sub>3</sub> - s<sub>2</sub> = 1</code>, <code>s<sub>4</sub> - s<sub>3</sub> = -1</code>, and so on up to <code>s[m - 1] - s[m - 2] = (-1)<sup>m</sup></code>.</li>
</ul>

<p>Return <em>the maximum length of all <strong>alternating</strong> subarrays present in </em><code>nums</code> <em>or </em><code>-1</code><em> if no such subarray exists</em><em>.</em></p>

<p>A subarray is a contiguous <strong>non-empty</strong> sequence of elements within an array.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [2,3,4,3,4]
<strong>Output:</strong> 4
<strong>Explanation:</strong> The alternating subarrays are [3,4], [3,4,3], and [3,4,3,4]. The longest of these is [3,4,3,4], which is of length 4.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [4,5,6]
<strong>Output:</strong> 2
<strong>Explanation:</strong> [4,5] and [5,6] are the only two alternating subarrays. They are both of length 2.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= nums.length &lt;= 100</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 10<sup>4</sup></code></li>
</ul>
</div>