class Solution {
  bool rotateString(String s, String goal) {
    if (s.length != goal.length) {
      return false;
    }

    goal += goal;

    return goal.contains(s) ? true : false;
  }
}
