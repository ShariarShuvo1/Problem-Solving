class WordDictionary:

    def __init__(self):
        self.data_list = []

    def addWord(self, word: str) -> None:
        self.data_list.append(word)

    def search(self, word: str) -> bool:
        n = len(word)
        dot_count = word.count('.')
        if dot_count == 1:
            idx1 = word.index('.')
            new_word = word[:idx1] + word[idx1+1:]
        elif dot_count == 2:
            idx1 = word.index('.')
            idx2 = word.index('.', idx1+1)
            new_word = word[:idx1] + word[idx1+1:idx2] + word[idx2+1:]
        for w in self.data_list:
            if len(w) == n:
                if dot_count != 0:
                    if dot_count == 1:
                        prev_word = w[:idx1] + w[idx1+1:]
                        if new_word == prev_word:
                            return True
                    else:
                        prev_word = w[:idx1] + w[idx1+1:idx2] + w[idx2+1:]
                        if new_word == prev_word:
                            return True
                else:
                    if w == word:
                        return True
        return False



# Your WordDictionary object will be instantiated and called as such:
# obj = WordDictionary()
# obj.addWord(word)
# param_2 = obj.search(word)