require 'set'

def solution(board)
    answer = board.size * board.size
    danger_zone = Set.new()
    if board.size == 1 && board.flatten.first == 1
        answer = 0;
    else
        board.each_with_index do |array,x|
            array.each_with_index do |value, y|
                if value == 1
                    target_x =
                        if x-1 < 0
                            [x, x+1]
                        elsif x+1 >= board.size
                            [x-1, x]
                        else
                            [x-1, x, x+1]
                        end

                    target_y =
                        if y-1 < 0
                            [y, y+1]
                        elsif y+1 >= board.size
                            [y-1, y]
                        else
                            [y-1, y, y+1]
                        end
                    danger_zone = danger_zone | target_x.product(target_y)
                end
            end
        end
        answer -= danger_zone.size
    end
    return answer
end
