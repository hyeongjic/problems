def solution(s)
    array = s.split(' ').map(&:to_i)
    return array.minmax.join(" ")
end