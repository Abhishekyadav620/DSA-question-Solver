class Solution {
    public int firstUniqChar(String s) {
        HashMap<Character,Integer>map=new LinkedHashMap<>();

        for(int i=0;i<s.length();i++)
        {
            map.put(s.charAt(i),map.getOrDefault(s.charAt(i),0)+1);
           
        }
        

        for(Map.Entry<Character,Integer>e:map.entrySet())
        {
            if(e.getValue()==1)
            {
                return s.indexOf(e
                .getKey());
            }
        }
        return -1;
       
        
    }
}