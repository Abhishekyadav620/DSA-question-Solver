class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        HashMap<Integer,Integer>map=new HashMap<>();

        for(int i=0;i<nums.length;i++)
        {
            map.put(nums[i],map.getOrDefault(nums[i],0)+1);
        }
        int[] arr=new int[k];
        

        for(int i=0;i<k;i++)
        {
            int maxx=-1;
            for(Map.Entry<Integer,Integer>e:map.entrySet())
            {
                maxx=Math.max(maxx,e.getValue());
            }

            for(Map.Entry<Integer,Integer>e:map.entrySet())
            {
                if(e.getValue()==maxx)
                {
                   arr[i]= e.getKey();
                }
            }
            map.remove(arr[i]);
        }
        return arr;
       
        
    }
}