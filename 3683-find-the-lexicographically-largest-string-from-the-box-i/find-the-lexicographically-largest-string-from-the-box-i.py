class Solution(object):
    def answerString(self, word, numFriends):
        """
        :type word: str
        :type numFriends: int
        :rtype: str
        """

        n = len(word)
        m = n - numFriends + 1

        if numFriends == 1: 
          return word

        return max(word[i : i + m] for i in range(n))
        