def solution(priorities, location)
    order = []
    index_queue = (0...priorities.size).to_a
    answer = 0

    begin
        priority = priorities.shift
        index = index_queue.shift

        if priority < (priorities.max || 0)
            priorities << priority
            index_queue << index
        else
            answer += 1
            break if index == location
        end   
    end while !priorities.empty?

    return answer
end