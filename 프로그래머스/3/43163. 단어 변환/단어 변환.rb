def check_word(current_word, target, words, depth, answer)
    return depth if current_word == target
    return answer if answer < depth
    
    words = words - [current_word]
    current_word.size.times do |index|
        check_word = current_word.dup
        check_word[index] = ".?"
        matched_words = words.select {|str| str.match? check_word }
        matched_words.each do |word|
            result = check_word(word, target, words, depth + 1, answer)
            answer = result if result.positive? && result < answer
        end
    end
    
    return answer
end

def solution(start, target, words)
    answer = 0
    return answer unless words.include? target
     
    answer = check_word(start, target, words, 0, 50) 
    
    return answer
end