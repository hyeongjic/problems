def solution(prices)
    answer = []
    max_price = 0
    alive_price = {}
    prices_size = prices.size - 1
    prices.each_with_index do |price,index|
        max_price = [price, max_price].max
        alive_price[price]&.append(index) || alive_price[price] = [index]

        if price < max_price
            dead_price = alive_price.select{|key,_value| key > price}
            alive_price = alive_price.select{|key,_value| key <= price}
            dead_price.values.flatten.each do |value|
                answer[value] = index - value
            end
            max_price = price
        end
    end
    alive_price.values.flatten.each do |value|
        answer[value] = prices_size - value
    end
    return answer
end