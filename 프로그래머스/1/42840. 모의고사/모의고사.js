function solution(answers) {
    let answer = [];
    const mathGiver_1 = [1,2,3,4,5];
    const mathGiver_2 = [2,1,2,3,2,4,2,5];
    const mathGiver_3 = [3,3,1,1,2,2,4,4,5,5];
    const scores = [0 ,0 ,0];
    
    for (let i in answers) {
        if (answers[i] === mathGiver_1[i%mathGiver_1.length]) scores[0]++;
        if (answers[i] === mathGiver_2[i%mathGiver_2.length]) scores[1]++;
        if (answers[i] === mathGiver_3[i%mathGiver_3.length]) scores[2]++;
    }
    scores.reduce((acc, score, index) => {
        if (acc < score) {
            acc = score;
            answer = [index + 1] 
        } else if (acc === score) {
            answer.push(index+1)
        }
        return acc
    }, 0)
    return answer;
}