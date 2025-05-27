function solution(s) {
    // str[0] => charAt, slice => subslice를 사용하면 한줄로 표현 가능
    // s.split(" ").map(v => v.charAt(0).toUpperCase() + v.substring(1).toLowerCase()).join(" ");
    return s.split(" ").map((str) => {
        if (str === "") {
            return ""
        } else {
            return (str[0].toUpperCase() + str.slice(1).toLowerCase()) 
        }
    }).join(" ")
}
