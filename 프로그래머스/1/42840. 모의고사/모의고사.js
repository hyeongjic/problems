function solution(answers) {
    let answer = [];
    const mathGiver_1 = [1,2,3,4,5];
    const mathGiver_2 = [2,1,2,3,2,4,2,5];
    const mathGiver_3 = [3,3,1,1,2,2,4,4,5,5];
    const scores = [0 ,0 ,0];

    // 3명이라 하드 코딩으로 넣긴 했는데 더 많은 사람 수를 대응 가능하게 짜는것도 고려해볼껄 싶다
    // 그나마 아래 스코어 구하는 방법은 사람이 많아도 대응은 됨
    // filter를 활용하는 방법도 좋은 것 같다
    // scores[0] = answers.filter((a,i)=> a === mathGiver_1[i%mathGiver_1.length]).length;
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
