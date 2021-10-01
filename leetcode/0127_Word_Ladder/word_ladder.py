import collections


class Solution:
    def ladderLength(self, beginWord: str, endWord: str,
                     wordList: list) -> int:
        wordList = set(wordList)
        if endWord not in wordList:
            return 0

        queue = collections.deque([(beginWord, 1)])
        v = set()

        while queue:
            word, length = queue.popleft()
            if word == endWord:
                return length

            for i in range(len(word)):
                for c in 'abcdefghijklmnopqrstuvwxyz':
                    next_word = word[:i] + c + word[i + 1:]
                    if next_word in wordList and next_word not in v:
                        v.add(next_word)
                        queue.append((next_word, length + 1))

        return 0