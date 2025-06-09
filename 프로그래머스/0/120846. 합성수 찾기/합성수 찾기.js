function solution(n) {
    let answer = 0;
    const primeNumber = [];
    if (n !== 1) {
        for (let i = 2; i <= n; i++) {
            let isPrime = true
            for (let j of primeNumber) {
                if (i % j === 0) {
                    answer++;
                    isPrime = false
                    break;
                }
            }
            if (isPrime) primeNumber.push(i)
        }
    }
    
    return answer;
}