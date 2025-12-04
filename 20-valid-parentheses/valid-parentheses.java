class Solution {
    public boolean isValid(String s) {

        int oldLength = -1;

        while (oldLength != s.length()) {
            oldLength = s.length();

            s = s.replace("()", "");
            s = s.replace("{}", "");
            s = s.replace("[]", "");
        }

        // If valid → string becomes empty
        return s.isEmpty();  
    }
}
