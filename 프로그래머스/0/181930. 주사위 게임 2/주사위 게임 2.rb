def solution(a, b, c)
    answer = 0
    type = [a,b,c].uniq.length
    answer =
        case type
        when 3
            a + b + c
        when 2
            (a + b + c) * (a * a + b * b + c * c)
        when 1
            (a + b + c) * (a * a + b * b + c * c) *  (a * a * a + b * b * b + c * c * c)
        end
    return answer
end