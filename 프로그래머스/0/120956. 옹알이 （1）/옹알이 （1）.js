function solution(babbling) {
    var answer = 0;
    const baby = ['aya','ye','woo','ma']; 
    for (let str of babbling) {
        let index = 0;
        while (index < str.length) {
            let isfailed = true;
            for (let pron of baby) {
                if (pron === str.substring(index, index+pron.length)) {
                    isfailed = false;
                    index += pron.length;
                    break;
                }
            }
            if (isfailed) break;
        }
        if (index === str.length) answer++;
    }
    return answer;
}