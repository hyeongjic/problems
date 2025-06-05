function solution(n) {
    var answer = 1;
    let sum = 0
    let start_num = 1;
    for (let i = 1; i <= Math.ceil(n/2); i++) {
        sum += i;
        if (sum > n) {
            while (sum > n) {
                sum -= start_num
                start_num++;
            }
        }
        
        if (sum === n && n != i) answer++;
    }
    
    return answer;
}