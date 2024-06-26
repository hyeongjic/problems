def solution(m, n, startX, startY, balls)
    answer = []
    min = m * m + n * n
    
    balls.each do |x, y|
        distances = [min]

        if startY != y
            distances << calculate(startX + x, startY-y)
            distances << calculate((2*m - (startX + x)),startY-y)
        elsif startX < x
            distances << calculate(startX + x, 0)
        elsif startX > x
            distances << calculate(2*m - (startX + x), 0)
        end
        
        if startX != x
            distances << calculate(startX - x, (startY+y))
            distances << calculate(startX-x, (2*n - (startY+y)))
        elsif startY < y
            distances << calculate(0, (startY+y))
        elsif startY > y
            distances << calculate(0, (2*n - (startY+y)))
        end
        answer << distances.min
    end
    return answer
end

def calculate(x,y)
    x * x + y * y
end