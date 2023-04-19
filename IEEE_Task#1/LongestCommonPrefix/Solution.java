public class Solution {
    public static String longestCommonPrefix(String[] strs) {

        int strsSize = strs.length;
        int sizeOfFirstWord = strs[0].length();
        String output = "";
        for(int i = 0; i < sizeOfFirstWord; i++)
        {
            char currentChar = strs[0].charAt(i);
            for(int j = 0; j < strsSize; j++)
            {
                if(strs[j].length() < (i+1) || strs[j].charAt(i) != currentChar)
                {
                    return output;
                }
            }
            output += currentChar;
        }

        return output;
    }
}
