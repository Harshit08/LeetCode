int mostWordsFound(char** sentences, int sentencesSize) {
    int max=0;
    for(int i=0;i<sentencesSize;i++){
        int j=0,count=1;
        while(sentences[i][j]){
            if(sentences[i][j] == ' '){
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