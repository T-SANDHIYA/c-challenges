class Solution {
    public int lengthOfLastWord(String s) {
        String str = "";   // change 1: start empty

        for (int i = 0; i < s.length(); i++) {

            // change 2: reset only when space comes AFTER a word
            if (s.charAt(i) == ' ') {
                if (!str.equals("")&& i + 1 < s.length() && s.charAt(i + 1) != ' ') {
                    str = "";
                }
            }
            // keep your character adding logic
            else {
                str += s.charAt(i);
            }
        }

        // change 3: return only AFTER loop
        return str.length();
    }
}
