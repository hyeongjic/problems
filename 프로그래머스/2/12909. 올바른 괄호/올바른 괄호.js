function solution(s){
    let answer = true;
    let right = 0
    let left = 0
    
    
    s.split("").forEach(function(str) {
        if (str === "(") {
            right++;
        } else {
            right--
            if (right < 0) answer = false;
        }
    });
    if (right != 0) answer = false;
    return answer;
}