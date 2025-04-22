def solution(array, commands)
    answer = []
    commands.each do |first,last,index|
        sliced_array = array[(first-1)..(last-1)].sort
        answer << sliced_array[index - 1]
    end

    return answer
end