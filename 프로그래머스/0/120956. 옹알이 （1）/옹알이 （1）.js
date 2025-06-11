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

/*
문제를 맞추긴 했지만 좋지 않은 방법이라 생각
문자열을 확인하는건 정규식을 활용해서 풀 수 있도록 노력 필요

function solution(babbling) {
  var answer = 0;
  const regex = /^(aya|ye|woo|ma)+$/;

  babbling.forEach(word => {
    if (regex.test(word)) answer++;  
  })

  return answer;
}

*/
