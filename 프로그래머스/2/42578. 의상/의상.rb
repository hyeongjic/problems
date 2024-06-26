def solution(clothes)
    answer = 1
    clothes_hash = clothes.to_h
    clothes_by_category = clothes_hash.keys.group_by { |k| clothes_hash[k] }
    clothes_by_category.values.each { |arr| answer *= (arr.size + 1) }
    
    return answer - 1
end
