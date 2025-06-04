function solution(s) {
    let zeroCount = 0;
    let executeCount = 0;
    
    while(s != "1") {
        executeCount++;
        s = s.split("").reduce((array, element) => {
           if (element === "0") {
               zeroCount++;
           } else {
               array.push(element)
           }
            return array
        }, []);
        s = s.length.toString(2)
    }
    
    return [executeCount, zeroCount];
}