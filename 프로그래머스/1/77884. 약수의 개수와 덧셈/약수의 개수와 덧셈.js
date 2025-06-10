function solution(left, right) {
    var answer = 0;
    // 숫자에 루트를 씌웠을때 정수면 그 숫자의 약수는 홀수이다
    // Number.isInteger(Math.sqrt(number))
    for (let i = left; i <= right; i++) {
        let count = (i === 1 ? 1 : 2);
        for(let j=2; j <= Math.ceil(i/2); j++) {
            if (i % j === 0) count++;
        }
        
        answer += (count % 2 ===0 ? i : -i)
    }
    return answer;
}
