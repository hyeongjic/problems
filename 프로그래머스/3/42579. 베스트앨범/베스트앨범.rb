def solution(genres, plays)
    data = plays.each_with_index.group_by do |plays, index|
        genres[index]
    end

    answer = data.map do |_key, values|
        [values.sum(&:first), values.sort_by {|value,_index| -value }.first(2).map(&:last)]
    end

    return answer.sort_by {|total, indexs| -total}.map(&:last).flatten
end