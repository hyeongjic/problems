def calculate(numbers, target, current_value, index, answer)    
    index += 1
    
    if index == numbers.size
        answer += 1 if current_value == target
        return answer
    end
    
    
    answer = calculate(numbers, target, current_value + numbers[index] , index, answer)
    answer = calculate(numbers, target, current_value - numbers[index] , index, answer)
    return answer
end

def solution(numbers, target)
    answer = 0
    index = 0

    answer = calculate(numbers, target, numbers[index], index, answer)
    answer = calculate(numbers, target, -numbers[index], index, answer)
    return answer
end
