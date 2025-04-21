def solution(bridge_length, weight, truck_weights)
    current_time = 0
    current_bridge = []
    end_time = []
    total_truck = truck_weights.size
    truck_weights.each do |truck|
        index = end_time.find_index {|time| time > current_time }
        unless index.nil?
            current_bridge = current_bridge[index..-1]
            end_time = end_time[index..-1]
        end

        check = 1
        while (current_bridge.sum + truck) > weight || (current_bridge.size + 1) > bridge_length do
            pp "-----#{current_bridge.sum}----#{current_bridge.size + 1}"
            current_bridge.shift
            current_time = end_time.shift
            check = 0
        end
        
        current_time += check 
        current_bridge << truck
        end_time << (current_time + bridge_length)

        puts "#{truck} end_time: #{end_time.last} #{end_time}" 
    end
 
    return end_time.last 
end