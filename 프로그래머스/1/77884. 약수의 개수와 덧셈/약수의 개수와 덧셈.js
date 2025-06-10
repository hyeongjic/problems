function solution(left, right) {
    var answer = 0;
    for (let i = left; i <= right; i++) {
        let count = (i === 1 ? 1 : 2);
        for(let j=2; j <= Math.ceil(i/2); j++) {
            if (i % j === 0) count++;
        }
        
        answer += (count % 2 ===0 ? i : -i)
    }
    return answer;
}