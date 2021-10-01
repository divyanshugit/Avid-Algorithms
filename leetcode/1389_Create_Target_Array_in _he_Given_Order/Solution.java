class Solution {
    public int[] createTargetArray(int[] nums, int[] index) {
        int [] a= new int[index.length];
        for(int i=0;i<index.length;i++)
        {
            for(int j=(index.length-1);j>index[i];j--)
            {
                a[j]=a[j-1];
            }
            a[index[i]]=nums[i];
        }
        return a;
    }
}