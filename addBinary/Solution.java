class Solution {
    public static String addBinary(String a, String b) {
        String result = "";
        int carry = 0;
        int sizeA = a.length();
        int sizeB = b.length();
        int finalSize = sizeA;
        if(sizeA > sizeB)
        {
            for (int i = 0; i < (sizeA-sizeB); i++)
            {
                b = "0"+b;
            }

        }
        else if (sizeB > sizeA)
        {
            for (int i = 0; i < (sizeB-sizeA); i++)
            {
                a = "0"+a;
            }

            finalSize = sizeB;
        }

        for(int i = finalSize-1; i >= 0 ; --i)
        {
            if(b.charAt(i) =='0' && a.charAt(i) =='0')
            {
                if(carry == 0)
                {
                    result = "0" + result;
                }
                else
                {
                    result = "1" + result;
                    carry = 0;
                }
            }
            else if((b.charAt(i)=='0' && a.charAt(i)=='1') || (b.charAt(i)=='1' && a.charAt(i) == '0'))
            {

                if(carry == 0) result = "1" + result;

                else result = "0" + result;

            }
            else if(b.charAt(i) == '1' && a.charAt(i)=='1')
            {
                result = (carry == 0)? "0" + result : "1" + result;
                carry = 1;
            }

        }

        if(carry == 1)
        {
            result = "1" + result;
        }

        return result;
    }
}