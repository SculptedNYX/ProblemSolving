import java.util.Stack;

public class Solution
{
    public static boolean isValid(String s)
    {

        if(s.charAt(0) == ')' || s.charAt(0) == '}' || s.charAt(0) == ']')
            return false;

        Stack<Character> stack = new Stack<>();

        for (int i = 0; i < s.length(); i++)
        {
            switch (s.charAt(i))
            {
                case ')':
                    if((!stack.isEmpty()) && (stack.peek() == '('))
                    {
                        stack.pop();
                    }
                    else
                    {
                        return false;
                    }
                    break;

                case ']':
                    if((!stack.isEmpty()) && (stack.peek() == '['))
                    {
                        stack.pop();
                    }
                    else
                    {
                        return false;
                    }
                    break;

                case '}':
                    if((!stack.isEmpty()) && (stack.peek() == '{'))
                    {
                        stack.pop();
                    }
                    else
                    {
                        return false;
                    }
                    break;
                default:
                    stack.add(s.charAt(i));
            }
        }

        return stack.isEmpty();
    }



}
