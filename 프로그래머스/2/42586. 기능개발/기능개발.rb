def solution(progresses, speeds)
    answer = []
    deploy_days = []
    progresses.each_with_index do |progress, index|
        deploy_days[index] = ((100.0 - progress) / speeds[index]).ceil
    end

    count = 1
    day = deploy_days[0]
    
    (1...deploy_days.size).each do |index|
        if day >= deploy_days[index]
            count += 1
        else
            answer << count
            count = 1
            day = deploy_days[index]
        end
    end
    answer << count
    
    return answer
end