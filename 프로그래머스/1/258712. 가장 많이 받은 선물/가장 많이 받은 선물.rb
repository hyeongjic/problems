def solution(friends, gifts)
    answer = 0
    present_chart = Hash.new
    friends.each do |name|
        present_chart[name] = Hash.new
    end
    gifts.each do |str|
        giver, receiver = str.split(' ')
        present_chart[giver][receiver] = present_chart[giver][receiver].to_i + 1
        present_chart[giver][:give_count] = present_chart[giver][:give_count].to_i + 1
        present_chart[receiver][:receive_count] = present_chart[receiver][:receive_count].to_i + 1
    end
    
    present_chart.each do |name, values|
        present_chart[name][:present_score] = present_chart[name][:give_count].to_i - present_chart[name][:receive_count].to_i
    end
    
    next_month_present = present_chart.each_with_object({}) do |(name,values),hash|
        friends.each do |receiver_name|
            result = present_chart[name][receiver_name].to_i - present_chart[receiver_name][name].to_i
            
            next if result.negative?
            next if result.zero? && (present_chart[name][:present_score] - present_chart[receiver_name][:present_score]) <= 0
            
            hash[name] = hash[name].to_i + 1
        end
    end
    
    return next_month_present.values.max.to_i
end