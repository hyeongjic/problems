function solution(n, works) {
    let answer = 0;
    let total_work = works.reduce((acc, cur) => acc+cur)
    let worktime = n
   
    if (total_work > worktime) {
        works.sort((a,b) => a - b)
        let pivot = 0
        let index = works.length - 1
        for (let i in works) {
            let overtime = works[i] * (works.length - i)
            if ((total_work - overtime) > worktime) {
                total_work -= works[i];
                answer += works[i]**2
            } else {
                pivot = works[i];
                worktime -= (total_work - overtime)
                index = i
                break;
            }
        }
        if (works.length != index) {
            const rest_works_count = works.length - index
            const q = pivot - parseInt(worktime / rest_works_count);
            const r = worktime % rest_works_count;
            answer += (q**2 * (rest_works_count - r)) + ((q-1)**2 * r);
        }
    }
   
    return answer;
}

