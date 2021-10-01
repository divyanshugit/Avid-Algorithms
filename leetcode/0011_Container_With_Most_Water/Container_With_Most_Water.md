## 11. Container With Most Water

Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of the line i is at (i, ai) and (i, 0). Find two lines, which, together with the x-axis forms a container, such that the container contains the most water.

**Notice** that you may not slant the container.

>**Example 1:**

><img src="https://s3-lc-upload.s3.amazonaws.com/uploads/2018/07/17/question_11.jpg" width="400px">

>**Input:** height = [1,8,6,2,5,4,8,3,7] <br>
>**Output:** 49 <br>
>**Explanation:** The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
<hr>

>**Example 2:**

>**Input:** height = [1,1] <br>
>**Output:** 1
<hr>

>**Example 3:**

>**Input:** height = [4,3,2,1,4] <br>
>**Output:** 16
<hr>

>**Example 4:**

>**Input:** height = [1,2,1] <br>
>**Output:** 2
<hr>