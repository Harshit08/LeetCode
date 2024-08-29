class Solution {
    public int mostWordsFound(String[] sentences) {
        int max=0;
        for(int i=0;i<sentences.length;i++){
            int count=1,j=0;
            while(j<sentences[i].length()){
                if(sentences[i].charAt(j)==' '){
                    count++;
                }
                j++;
            }
            if(max<count){
                max=count;
            }
        }
        return max;
    }
}